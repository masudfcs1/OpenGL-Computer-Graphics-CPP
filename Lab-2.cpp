
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3f(0.0, 0.25, 1.0);
    glBegin(GL_POLYGON);


    glVertex2i(300, 500);
    glVertex2i(350, 600);
    glVertex2i(400, 500);
    glVertex2i(500, 450);
    glVertex2i(400, 400);
    glVertex2i(350, 300);
    glVertex2i(300, 400);
    glVertex2i(200, 450);

    glEnd();

    glColor3f(1.0, 0.21, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 650);
    glVertex2i(500, 750);
    glVertex2i(550, 650);
    glVertex2i(650, 600);
    glVertex2i(550, 550);
    glVertex2i(500, 450);
    glVertex2i(450, 550);
    glVertex2i(350, 600);
    glEnd();

    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(600, 500);
    glVertex2i(650, 600);
    glVertex2i(700, 500);
    glVertex2i(800, 450);
    glVertex2i(700, 400);
    glVertex2i(650, 300);
    glVertex2i(600, 400);
    glVertex2i(500, 450);

    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 350);
    glVertex2i(500, 450);
    glVertex2i(550, 350);
    glVertex2i(650, 300);
    glVertex2i(550, 250);
    glVertex2i(500, 150);
    glVertex2i(450, 250);
    glVertex2i(350, 300);


    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 900, 0.0, 900);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}