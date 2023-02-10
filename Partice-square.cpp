#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 1.0f, 0.50f, 1.0f);
    gluOrtho2D(0, 60, 0, 10);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.50f, 0.50f);
    // glVertex2f(-2.0f, -2.0f);
    // glVertex2f(2.0f, -2.0f);
    // glVertex2f(2.0f, 2.0f);
    // glVertex2f(-2.0f, 2.0f);

    glVertex2i(2, 2);
    glVertex2i(8, 2);
    glVertex2i(8, 8);
    glVertex2i(2, 8);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.50f, 0.50f);
    glVertex2i(10, 2);
    glVertex2i(18, 2);
    glVertex2i(10, 8);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.50f, 0.50f);
    glVertex2i(19, 2);
    glVertex2i(26, 2);
    glVertex2i(26, 8);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.50f, 0.50f);
    glVertex2i(20, 2);
    glVertex2i(26, 2);
    glVertex2i(26, 8);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.50f, 1.50f);
    glVertex2f(18.5, 2);
    glVertex2i(24, 8);
    glVertex2i(12, 8);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.30f, 1.50f, 1.50f);
    glVertex2i(28, 5);
    glVertex2i(32, 2);
    glVertex2i(36, 5);
    glVertex2i(32, 8);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.30f, 1.50f, 1.50f);
    glVertex2i(28, 5);
    glVertex2i(32, 2);
    glVertex2i(36, 5);
    glVertex2i(32, 8);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.50f, 1.40f, 1.50f);
    glVertex2i(38, 2);
    glVertex2i(48, 2);
    glVertex2i(47, 3);
    glVertex2i(41, 3);
    glVertex2i(41, 8);
    glVertex2i(38, 8);
    // glVertex2i(40,4);

    glEnd();





    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(900, 1000);
    glutInitWindowPosition(250, 250);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}