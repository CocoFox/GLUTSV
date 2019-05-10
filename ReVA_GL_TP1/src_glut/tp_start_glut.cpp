#ifdef __APPLE__
    #include <GLUT/glut.h>
    #include <stdlib.h>
    #include <iostream>
#else
    #include <GL/glut.h>
#endif

using namespace std;


int colorcount = -1;
float red = 0.0;
float green = 0.0;
float blue = 0.0;
/* Render here */

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  /* Swap front and back buffers */
  glutSwapBuffers();
}



void updatecolor(int &count){
  count++;
  if(count % 5 == 0){
    // red
    red = 1.0;
    blue = 0.0;
    green = 0.0;
  }
  if (count % 5 == 1)
  {
    // blue
    red = 0.0;
    blue = 1.0;
    green = 0.0;
  }
  if (count % 5 == 2)
  {
    // yellow
    red = 1.0;
    blue = 0.0;
    green = 1.0;
  }
  if (count % 5 == 3)
  {
    // magenta
    red = 1.0;
    blue = 1.0;
    green = 0.0;
  }
  if (count % 5 == 4)
  {
    // gREEEEEEEEEEEn
    red = 1.0;
    blue = 1.0;
    green = 0.0;
  }

  glClearColor(red,green,blue,1.0);
  display();
}

void keyboard(unsigned char key, int x, int y){
  cout << key;
  switch(key){
      case 'q':
      case 'Q': exit(0);
   break;

    case ' ': updatecolor(colorcount);
  break;
      
  }
  
}
int main(int argc, char **argv) {

  /* Create a windowed mode window and its OpenGL context */
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(800,800);
  glutCreateWindow("Hello world");
  
  /* Callback for display */
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  /* Main loop */
  glutMainLoop();
  return 0;
}