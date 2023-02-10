#include <windows.h>
#include <GL/glut.h>

void display() {
    //  glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    //glBegin(GL_QUADS);
    bool ok = false;

    for (int i = 0;i <= 800;i += 100) {
        for (int j = 0;j <= 800;j += 100) {

            if (ok) {
                glColor3f(0.0, 0.0, 0.0);
                ok =! ok;
            }
            else {
                glColor3f(1.0, 1.0, 1.0);
                ok =! ok;
            }
            glBegin(GL_QUADS);
            glVertex2i(i, j);
            //glVertex2i(i, 100);
            glVertex2i(i, j+100);
            glVertex2i(i+100, j+100);
            glVertex2i(i+100, j);
            glEnd();
            glFlush();


        }
    }
}


void myInit(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800, 0.0, 800);

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    //glutCreateWindow("Simple Triangle");
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("chess");
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(111, 111);
    glutDisplayFunc(display);


    //return 0;

    myInit();
    glutMainLoop();
}