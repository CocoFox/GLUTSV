#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

/* Render here */
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    /* Swap front and back buffers */
    glutSwapBuffers();
}

int main(int argc, char **argv)
{

    /* Create a windowed mode window and its OpenGL context */
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Hello world");

    /* Callback for display */
    glutDisplayFunc(display);

    glutCreateWindow("Hello world2");
    glutDisplayFunc(display);
    /* Main loop */
    glutMainLoop();
    return 0;
}