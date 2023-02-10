#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(0, 100, 0, 130);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.70f, 0.0f);
    // glVertex2f(-2.0f, -2.0f);
    // glVertex2f(2.0f, -2.0f);
    // glVertex2f(2.0f, 2.0f);
    // glVertex2f(-2.0f, 2.0f);

    glVertex2i(25, 10);
    glVertex2i(70, 10);
    glVertex2i(70, 70);
    glVertex2i(25, 70);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 01.0f, 01.0f);
    glVertex2i(25, 70);
    glVertex2i(70, 70);
    glVertex2i(47, 110);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 01.0f, 01.0f);
    glVertex2i(40, 10);
    glVertex2i(50, 10);
    glVertex2i(50, 35);
    glVertex2i(40, 35);



    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(1.0f, 01.0f, 01.0f);
    glVertex2i(55, 25);
    glVertex2i(60, 25);
    glVertex2i(60, 35);
    glVertex2i(55, 35);



    glEnd();



    glPointSize(5.0);
    glBegin(GL_LINES);
    glColor3f(01.0f, 01.0f, 01.0f);
    glVertex2i(25, 50);
    glVertex2i(70, 50);




    glEnd();








    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}