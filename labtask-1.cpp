#include<GL/gl.h>
#include<GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3f(0, 0., .0);
    // glBegin(GL_POLYGON);
    // // glVertex3f(0.25, 0.25, 0.0);
    // // glVertex3f(0.75, 0.25, 0.0);
    // // glVertex3f(0.75, 0.75, 0.0);
    // // glVertex3f(0.25, 0.75, 0.0);

    // glVertex2d(100,100 );
    // glVertex2d(300,100 );
    // glVertex2d(300,300);
    // glVertex2d(100,300 );

    // glEnd();



    glColor3f(1, 0.4, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();

    glColor3f(0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();

    glColor3f(1, 1.3, 1.3);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();

    glColor3f(0.5, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();



    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(450, 320);
    glVertex2i(450, 230);
    glVertex2i(330, 230);
    glEnd();

    // glColor3f(0.7, 0.3, 0.7);
    // glLineWidth(8);
    // glBegin(GL_LINES);
    // glVertex2i(390, 320);
    // glVertex2i(390, 230);
    // glVertex2i(330, 273);
    // glVertex2i(450, 273);
    // glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(650, 320);
    glVertex2i(650, 230);
    glVertex2i(530, 230);
    glEnd();

    // glColor3f(0.1, 0.7, 0.5);
    // glLineWidth(5);
    // glBegin(GL_LINES);
    // glVertex2i(590, 320);
    // glVertex2i(590, 230);
    // glVertex2i(530, 273);
    // glVertex2i(650, 273);
    // glEnd();




    // glColor3f(1, 1, 1.0);
    // glBegin(GL_POLYGON);

    // glVertex2d(100,100 );
    // glVertex2d(300,100 );
    // glVertex2d(300, 300);
    // glVertex2d(100, 300 );
    // glEnd();















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
    //Applies subsequent matrix operations to the projection matrix stack 
    glLoadIdentity(); //by deault ide.
    // glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    gluOrtho2D(0, 1000, 0, 1000);
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