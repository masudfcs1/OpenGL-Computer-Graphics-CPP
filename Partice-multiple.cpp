#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(0, 22, 0, 12);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.440f, 0.20f);
    // glVertex2f(-2.0f, -2.0f);
    // glVertex2f(2.0f, -2.0f);
    // glVertex2f(2.0f, 2.0f);
    // glVertex2f(-2.0f, 2.0f);

    glVertex2i(6, 1);
    glVertex2i(10, 7);
    glVertex2i(6, 12);
    glVertex2i(2, 7);


    glColor3f(0, 01, 0);
    glVertex2i(10, 1);
    glVertex2i(14, 6);
    glVertex2i(10, 12);
    glVertex2i(6, 6);
    // glVertex2i(2, 7);


    glColor3f(0, 01, 0.5);
    glVertex2i(16, 1);
    glVertex2i(20, 6);
    glVertex2i(20, 12);
    glVertex2i(12, 6);





    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(900, 800);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}