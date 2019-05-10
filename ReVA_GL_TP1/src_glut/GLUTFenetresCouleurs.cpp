#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

/* Render here */
void displayBlue(void)
{
    glClearColor(0.0,0.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    /* Swap front and back buffers */
    glutSwapBuffers();
}

void displayRed(void)
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
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
    glutDisplayFunc(displayBlue);

    glutCreateWindow("Hello world2");
    glutDisplayFunc(displayRed);
    /* Main loop */
    glutMainLoop();
    return 0;
}