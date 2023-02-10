//Md.Yehsun Mehedee//
#include <windows.h>
#define PI 3.14159265358979323846
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>


void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth(1.0);
    glOrtho(-1, 1, -1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void ground()
{
    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.03);
    glVertex2f(0.2f, -0.07);
    glVertex2f(0.3f, -0.1);
    glVertex2f(0.2f, -0.13);
    glVertex2f(0.1f, -0.17);
    glVertex2f(0.2f, -0.2);
    glVertex2f(0.35f, -0.23);
    glVertex2f(0.25f, -0.25);
    glVertex2f(0.18f, -0.28);
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.2f, -0.35);
    glVertex2f(0.4f, -0.4);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.2f, -0.65);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.2f, -0.75);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.2f, -0.85);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.25f, -0.95);
    glVertex2f(0.4f, -1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.17f, -0.19);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.3f, -0.12f);
    glVertex2f(0.3f, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.23f, -0.295);
    glVertex2f(0.25f, -0.305f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.35f, -0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.3f, -0.34);
    glVertex2f(0.25f, -0.365f);
    glVertex2f(0.2f, -0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.205f, -0.655);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.4f, -0.625);
    glVertex2f(0.25f, -0.675);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.3f, -0.72);
    glVertex2f(0.24f, -0.7595);
    glVertex2f(0.2f, -0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.4f, -0.825);
    glVertex2f(0.24f, -0.865);
    glVertex2f(0.2f, -0.85);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.35f, -0.925);
    glVertex2f(0.27f, -0.958);
    glVertex2f(0.25f, -0.948);
    glEnd();
}





void river()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 76, 153);
    glVertex2f(-1.0f, 0.45f);

    glColor3ub(0, 128, 255);
    glVertex2f(1.0f, 0.45f);

    glColor3ub(102, 178, 255);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

void boat()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 1);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.15f, 0.35f);
    glVertex2f(0.15f, 0.35f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(-0.13f, 0.4f);
    glVertex2f(-0.11f, 0.48f);
    glVertex2f(-0.088f, 0.52f);
    glVertex2f(0.13f, 0.52f);
    glVertex2f(0.14f, 0.49f);
    glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 102);
    glVertex2f(-0.038f, 0.57f);
    glVertex2f(-0.038f, 0.73f);
    glVertex2f(-0.035f, 0.75f);
    glVertex2f(0.064f, 0.73f);
    glVertex2f(0.065f, 0.71f);
    glVertex2f(0.065f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.0f, 0.52f);
    glVertex2f(0.0f, 0.79f);
    glVertex2f(0.01f, 0.79f);
    glVertex2f(0.01f, 0.52f);
    glEnd();
}

void boat2()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.55f, 0.05f);
    glVertex2f(0.85f, 0.05f);
    glVertex2f(0.9f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 0, 0);
    glVertex2f(0.57f, 0.1f);
    glVertex2f(0.59f, 0.18f);
    glVertex2f(0.612f, 0.22f);
    glVertex2f(0.73f, 0.22f);
    glVertex2f(0.84f, 0.19f);
    glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 102, 0);
    glVertex2f(0.662f, 0.27f);
    glVertex2f(0.662f, 0.43f);
    glVertex2f(0.665f, 0.45f);
    glVertex2f(0.764f, 0.43f);
    glVertex2f(0.765f, 0.41f);
    glVertex2f(0.765f, 0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 25, 0);
    glVertex2f(0.7f, 0.22f);
    glVertex2f(0.7f, 0.49f);
    glVertex2f(0.71f, 0.49f);
    glVertex2f(0.71f, 0.22f);
    glEnd();
}


void way()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.35f, -0.2f);
    glVertex2f(-0.22f, -0.2f);
    glVertex2f(-0.28f, -0.5f);
    glVertex2f(-0.43f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.43f, -0.5f);
    glVertex2f(-0.75f, -1.0f);
    glVertex2f(-0.56f, -1.0f);
    glVertex2f(-0.28f, -0.5f);
    glEnd();
}
void building()
{


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);//ground floor
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.20f, -0.50f);
    glVertex2f(-0.20f, -0.35f);
    glVertex2f(-0.50f, -0.35f);
    glEnd();

    glBegin(GL_QUADS);//ground floor door
    glColor3ub(96, 96, 96);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.30f, -0.50f);
    glVertex2f(-0.30f, -0.40f);
    glVertex2f(-0.40f, -0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.50f, -0.35f);
    glVertex2f(-0.20f, -0.35f);
    glVertex2f(-0.20f, -0.33f);
    glVertex2f(-0.50f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);//2nd floor
    glColor3ub(255, 255, 204);
    glVertex2f(-0.50f, -0.33f);
    glVertex2f(-0.20f, -0.33f);
    glVertex2f(-0.20f, -0.18f);
    glVertex2f(-0.50f, -0.18f);
    glEnd();

    glBegin(GL_QUADS);//2nd floor window
    glColor3ub(96, 96, 96);
    glVertex2f(-0.40f, -0.20f);
    glVertex2f(-0.30f, -0.20f);
    glVertex2f(-0.30f, -0.31f);
    glVertex2f(-0.40f, -0.31f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.50f, -0.18f);
    glVertex2f(-0.20f, -0.18f);
    glVertex2f(-0.20f, -0.16f);
    glVertex2f(-0.50f, -0.16f);
    glEnd();
    glBegin(GL_QUADS);//3rd floor
    glColor3ub(255, 255, 204);
    glVertex2f(-0.50f, -0.16f);
    glVertex2f(-0.20f, -0.16f);
    glVertex2f(-0.20f, -0.01f);
    glVertex2f(-0.50f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);//3rd floor window
    glColor3ub(96, 96, 96);
    glVertex2f(-0.40f, -0.14f);
    glVertex2f(-0.30f, -0.14f);
    glVertex2f(-0.30f, -0.03f);
    glVertex2f(-0.40f, -0.03f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.50f, -0.01f);
    glVertex2f(-0.20f, -0.01f);
    glVertex2f(-0.20f, 0.01f);
    glVertex2f(-0.50f, 0.01f);
    glEnd();
    glBegin(GL_QUADS);//4th floor
    glColor3ub(255, 255, 204);
    glVertex2f(-0.50f, 0.01f);
    glVertex2f(-0.20f, 0.01f);
    glVertex2f(-0.20f, 0.16f);
    glVertex2f(-0.50f, 0.16f);
    glEnd();

    glBegin(GL_QUADS);//4th floor window
    glColor3ub(96, 96, 96);
    glVertex2f(-0.40f, 0.14f);
    glVertex2f(-0.30f, 0.14f);
    glVertex2f(-0.30f, 0.03f);
    glVertex2f(-0.40f, 0.03f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.50f, 0.16f);
    glVertex2f(-0.20f, 0.16f);
    glVertex2f(-0.20f, 0.18f);
    glVertex2f(-0.50f, 0.18f);
    glEnd();
    glBegin(GL_QUADS);//5th floor
    glColor3ub(255, 255, 204);
    glVertex2f(-0.50f, 0.18f);
    glVertex2f(-0.20f, 0.18f);
    glVertex2f(-0.20f, 0.33f);
    glVertex2f(-0.50f, 0.33f);
    glEnd();

    glBegin(GL_QUADS);//5th floor window
    glColor3ub(96, 96, 96);
    glVertex2f(-0.40f, 0.20f);
    glVertex2f(-0.30f, 0.20f);
    glVertex2f(-0.30f, 0.31f);
    glVertex2f(-0.40f, 0.31f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.50f, 0.33f);
    glVertex2f(-0.20f, 0.33f);
    glVertex2f(-0.20f, 0.35f);
    glVertex2f(-0.50f, 0.35f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-0.45f, 0.35f);
    glVertex2f(-0.40f, 0.35f);
    glVertex2f(-0.40f, 0.40f);
    glVertex2f(-0.45f, 0.40f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(-0.45f, 0.40f);
    glVertex2f(-0.40f, 0.40f);
    glVertex2f(-0.40f, 0.41f);
    glVertex2f(-0.45f, 0.41f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.40f, 0.41f);
    glVertex2f(-0.45f, 0.41f);
    glVertex2f(-0.425f, 0.43f);
    glEnd();




    //Right Building

    glBegin(GL_QUADS);//ground floor door
    glColor3ub(0, 0, 0);;
    glVertex2f(-0.465f, -0.4f);
    glVertex2f(-0.43f, -0.4f);
    glVertex2f(-0.43f, -0.50f);
    glVertex2f(-0.465f, -0.50f);
    glEnd();

    glBegin(GL_QUADS);//ground floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.265f, -0.4f);
    glVertex2f(-0.23f, -0.4f);
    glVertex2f(-0.23f, -0.50f);
    glVertex2f(-0.265f, -0.50f);
    glEnd();

    glBegin(GL_QUADS);//2nd floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.465f, -0.2f);
    glVertex2f(-0.43f, -0.2f);
    glVertex2f(-0.43f, -0.30f);
    glVertex2f(-0.465f, -0.30f);
    glEnd();

    glBegin(GL_QUADS);//2nd floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.265f, -0.2f);
    glVertex2f(-0.23f, -0.2f);
    glVertex2f(-0.23f, -0.30f);
    glVertex2f(-0.265f, -0.30f);
    glEnd();

    glBegin(GL_QUADS);//3rd floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.465f, -0.04f);
    glVertex2f(-0.43f, -0.04f);
    glVertex2f(-0.43f, -0.14f);
    glVertex2f(-0.465f, -0.14f);
    glEnd();

    glBegin(GL_QUADS);//3rd floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.265f, -0.04f);
    glVertex2f(-0.23f, -0.04f);
    glVertex2f(-0.23f, -0.14f);
    glVertex2f(-0.265f, -0.14f);
    glEnd();

    glBegin(GL_QUADS);//4th floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.465f, 0.12f);
    glVertex2f(-0.43f, 0.12f);
    glVertex2f(-0.43f, 0.03f);
    glVertex2f(-0.465f, 0.03f);
    glEnd();

    glBegin(GL_QUADS);//4th floor door
    glColor3ub(0, 0, 0);;
    glVertex2f(-0.265f, 0.12f);
    glVertex2f(-0.23f, 0.12f);
    glVertex2f(-0.23f, 0.03f);
    glVertex2f(-0.265f, 0.03f);
    glEnd();

    glBegin(GL_QUADS);//5th floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.465f, 0.295f);
    glVertex2f(-0.43f, 0.295f);
    glVertex2f(-0.43f, 0.205f);
    glVertex2f(-0.465f, 0.205f);
    glEnd();

    glBegin(GL_QUADS);//5th floor door
    glColor3ub(0, 0, 0);
    glVertex2f(-0.265f, 0.295f);
    glVertex2f(-0.23f, 0.295f);
    glVertex2f(-0.23f, 0.205f);
    glVertex2f(-0.265f, 0.205f);
    glEnd();

}


void fence()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-0.6f, -0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(-0.6f, -0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, 0.05f);
    glVertex2f(-0.6f, 0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-0.6f, 0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.95f, 0.13f);
    glVertex2f(-0.95f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.9f, 0.13f);
    glVertex2f(-0.9f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.85f, 0.13f);
    glVertex2f(-0.85f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.8f, 0.13f);
    glVertex2f(-0.8f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.75f, 0.13f);
    glVertex2f(-0.75f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, 0.13f);
    glVertex2f(-0.7f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.65f, 0.13f);
    glVertex2f(-0.65f, -0.12f);

    glEnd();
    //
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.3f, -0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, -0.05f);
    glVertex2f(-0.3f, -0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.3f, 0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, 0.05f);
    glVertex2f(-0.3f, 0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.3f, 0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.65f, 0.13f);
    glVertex2f(-0.65f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.6f, 0.13f);
    glVertex2f(-0.6f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.55f, 0.13f);
    glVertex2f(-0.55f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.5f, 0.13f);
    glVertex2f(-0.5f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.45f, 0.13f);
    glVertex2f(-0.45f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.4f, 0.13f);
    glVertex2f(-0.4f, -0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.35f, 0.13f);
    glVertex2f(-0.35f, -0.12f);

    glEnd();
}



GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void birdd(int value)
{
    if (position22 > 1.0)
        position22 = -1.0f;
    position22 += speed22;
    glutPostRedisplay();
    glutTimerFunc(100, birdd, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;

void cloud(int value)
{
    if (position2 > 1.0)
        position2 = -1.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, cloud, 0);
}

GLfloat position1 = 1.0f;
GLfloat speed1 = -0.023f;

void boat(int value)
{
    if (position1 < -1.0)
        position1 = 1.0f;

    position1 += speed1;

    glutPostRedisplay();



    glutTimerFunc(100, boat, 0);
}


GLfloat position3 = 1.0f;
GLfloat speed3 = -0.023f;

void boat2(int value)
{
    if (position3 < -1.7)
    {
        position3 = 1.0f;
    }
    position3 += speed3;

    glutPostRedisplay();



    glutTimerFunc(100, boat2, 0);
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glColor3ub(0, 102, 204);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void hills()
{
    glBegin(GL_POLYGON);
    glColor3ub(155, 118, 83);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(-0.98f, 0.4f);
    glVertex2f(-0.93f, 0.46);
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(-0.82f, 0.54);
    glVertex2f(-0.75f, 0.57);
    glVertex2f(-0.68f, 0.54);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.57f, 0.46);
    glVertex2f(-0.52f, 0.47f);
    glVertex2f(-0.4f, 0.45f);
    glVertex2f(-1.0f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(155, 118, 83);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(0.98f, 0.4f);
    glVertex2f(0.93f, 0.46);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.82f, 0.54);
    glVertex2f(0.75f, 0.57);
    glVertex2f(0.68f, 0.54);
    glVertex2f(0.6f, 0.5f);
    glVertex2f(0.57f, 0.46);
    glVertex2f(0.52f, 0.47f);
    glVertex2f(0.4f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(155, 118, 83);
    glVertex2f(-0.5f, 0.45f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.45f, 0.46);
    glVertex2f(-0.42f, 0.5f);
    glVertex2f(-0.37f, 0.52);
    glVertex2f(-0.32f, 0.5);
    glVertex2f(-0.29f, 0.50f);
    glVertex2f(-0.23f, 0.4f);
    glVertex2f(-0.25f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(155, 118, 83);
    glVertex2f(0.5f, 0.45f);
    glVertex2f(0.48f, 0.4f);
    glVertex2f(0.45f, 0.46);
    glVertex2f(0.42f, 0.5f);
    glVertex2f(0.37f, 0.52);
    glVertex2f(0.32f, 0.5);
    glVertex2f(0.29f, 0.50f);
    glVertex2f(0.23f, 0.4f);
    glVertex2f(0.25f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(155, 118, 83);
    glVertex2f(-.25f, 0.45f);
    glVertex2f(-0.23f, 0.4f);
    glVertex2f(-0.18f, 0.46);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(-0.07f, 0.54);
    glVertex2f(-0.00f, 0.57);
    glVertex2f(0.07f, 0.54);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.18f, 0.50);
    glVertex2f(0.35f, 0.4f);
    glVertex2f(.25f, 0.45f);
    glEnd();

}

void bird()
{
    int i;

    GLfloat mm = 0.182f;
    GLfloat nn = .801f;
    GLfloat radiusmm = .01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 0, 25);
    glVertex2f(mm, nn); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mm + (radiusmm * cos(i * twicePi / triangleAmount)),
            nn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(51, 0, 25);
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.11f, 0.79f);
    glVertex2f(0.12f, 0.78f);
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.19f, 0.79f);
    glVertex2f(0.201f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(51, 0, 25);
    glVertex2f(0.175f, 0.8f);
    glVertex2f(0.15f, 0.8f);
    glVertex2f(0.14f, 0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(52, 0, 25);
    glVertex2f(0.175f, 0.8f);
    glVertex2f(0.144f, 0.8f);
    glVertex2f(0.12f, 0.83f);
    glEnd();
    /////2nd bird////
    glBegin(GL_POLYGON);
    glColor3ub(197, 222, 72);
    glVertex2f(-0.02f, 0.8f);
    glVertex2f(-0.01f, 0.79f);
    glVertex2f(0.0f, 0.78f);
    glVertex2f(0.04f, 0.77f);
    glVertex2f(0.07f, 0.79f);
    glVertex2f(0.081f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(197, 222, 72);
    glVertex2f(0.055f, 0.8f);
    glVertex2f(0.03f, 0.8f);
    glVertex2f(0.02f, 0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(197, 222, 72);
    glVertex2f(0.055f, 0.8f);
    glVertex2f(0.024f, 0.8f);
    glVertex2f(0.0f, 0.83f);
    glEnd();

    GLfloat mmm = 0.062f;
    GLfloat nnn = .801f;
    GLfloat radiusmmm = .01f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(197, 222, 72);
    glVertex2f(mmm, nnn); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmm + (radiusmmm * cos(i * twicePi / triangleAmount)),
            nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();




}
void sun()
{
    int i;
    GLfloat x = .0f;
    GLfloat y = .9f;
    GLfloat radius = .06f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 204, 0);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void circleSolid(float x, float y, float radius)
{
    int triangleAmount = 100; //# of triangles used to draw circle

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
}


void vehicle()//This is the truck
{
    //1st truck

    //body
    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.16f);
    glVertex2f(0.024f, -0.16f);
    glVertex2f(0.024f, -0.05f);
    glVertex2f(-0.1f, -0.05f);
    glEnd();

    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.16f);
    glVertex2f(0.11f, -0.16f);
    glVertex2f(0.11f, -0.18f);
    glVertex2f(-0.1f, -0.18f);
    glEnd();

    //front
    glColor3ub(153, 255, 51);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.16f);
    glVertex2f(0.11f, -0.16f);
    glVertex2f(0.11f, -0.12f);
    glVertex2f(0.09f, -0.08);
    glVertex2f(0.03f, -0.08f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.19f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.19f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.19f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.19f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.135);
    glVertex2f(0.08, -0.135);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.127);
    glVertex2f(0.094, -0.127);
    glVertex2f(0.094, -0.111);
    glVertex2f(0.085, -0.089);
    glVertex2f(0.04, -0.089);
    glEnd();

    //2nd truck

        //body
    glColor3ub(0, 204, 204);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.29f);
    glVertex2f(0.024f, -0.29f);
    glVertex2f(0.024f, -0.18f);
    glVertex2f(-0.1f, -0.18f);
    glEnd();

    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.29f);
    glVertex2f(0.11f, -0.29f);
    glVertex2f(0.11f, -0.31f);
    glVertex2f(-0.1f, -0.31f);
    glEnd();

    //front
    glColor3ub(255, 5, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.29f);
    glVertex2f(0.11f, -0.29f);
    glVertex2f(0.11f, -0.25f);
    glVertex2f(0.09f, -0.21);
    glVertex2f(0.03f, -0.21f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.32f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.32f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.32f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.32f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.27);
    glVertex2f(0.08, -0.27);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.257);
    glVertex2f(0.094, -0.257);
    glVertex2f(0.094, -0.241);
    glVertex2f(0.085, -0.219);
    glVertex2f(0.04, -0.219);
    glEnd();

    //3rd truck

    //body
    glColor3ub(204, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(0.024f, -0.35f);
    glVertex2f(0.024f, -0.24f);
    glVertex2f(-0.1f, -0.24f);
    glEnd();

    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(0.11f, -0.35f);
    glVertex2f(0.11f, -0.37f);
    glVertex2f(-0.1f, -0.37f);
    glEnd();

    //front
    glColor3ub(0, 204, 204);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.35f);
    glVertex2f(0.11f, -0.35f);
    glVertex2f(0.11f, -0.31f);
    glVertex2f(0.09f, -0.27);
    glVertex2f(0.03f, -0.27f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.38f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.38f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.38f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.38f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.33);
    glVertex2f(0.08, -0.33);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.317);
    glVertex2f(0.094, -0.317);
    glVertex2f(0.094, -0.301);
    glVertex2f(0.085, -0.279);
    glVertex2f(0.04, -0.279);
    glEnd();

    //4th truck

    //body
    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.40f);
    glVertex2f(0.024f, -0.40f);
    glVertex2f(0.024f, -0.29f);
    glVertex2f(-0.1f, -0.29f);
    glEnd();

    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.40f);
    glVertex2f(0.11f, -0.40f);
    glVertex2f(0.11f, -0.42f);
    glVertex2f(-0.1f, -0.42f);
    glEnd();

    //front
    glColor3ub(0, 102, 204);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.40f);
    glVertex2f(0.11f, -0.40f);
    glVertex2f(0.11f, -0.36f);
    glVertex2f(0.09f, -0.32);
    glVertex2f(0.03f, -0.32f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.43f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.43f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.43f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.43f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.38);
    glVertex2f(0.08, -0.38);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.367);
    glVertex2f(0.094, -0.367);
    glVertex2f(0.094, -0.351);
    glVertex2f(0.085, -0.329);
    glVertex2f(0.04, -0.329);
    glEnd();

    //5th truck

        //body
    glColor3ub(224, 224, 224);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.45f);
    glVertex2f(0.024f, -0.45f);
    glVertex2f(0.024f, -0.34f);
    glVertex2f(-0.1f, -0.34f);
    glEnd();

    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.45f);
    glVertex2f(0.11f, -0.45f);
    glVertex2f(0.11f, -0.47f);
    glVertex2f(-0.1f, -0.47f);
    glEnd();

    //front
    glColor3ub(160, 160, 160);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.45f);
    glVertex2f(0.11f, -0.45f);
    glVertex2f(0.11f, -0.41f);
    glVertex2f(0.09f, -0.37);
    glVertex2f(0.03f, -0.37f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.48f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.48f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.48f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.48f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.43);
    glVertex2f(0.08, -0.43);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.417);
    glVertex2f(0.094, -0.417);
    glVertex2f(0.094, -0.401);
    glVertex2f(0.085, -0.379);
    glVertex2f(0.04, -0.379);
    glEnd();

    //6th truck

        //body
    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.53f);
    glVertex2f(0.024f, -0.53f);
    glVertex2f(0.024f, -0.42f);
    glVertex2f(-0.1f, -0.42f);
    glEnd();


    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.53f);
    glVertex2f(0.11f, -0.53f);
    glVertex2f(0.11f, -0.55f);
    glVertex2f(-0.1f, -0.55f);
    glEnd();

    //front
    glColor3ub(0, 76, 153);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.53f);
    glVertex2f(0.11f, -0.53f);
    glVertex2f(0.11f, -0.49f);
    glVertex2f(0.09f, -0.45);
    glVertex2f(0.03f, -0.45f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.56f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.56f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.56f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.56f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.51);
    glVertex2f(0.08, -0.51);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.497);
    glVertex2f(0.094, -0.497);
    glVertex2f(0.094, -0.481);
    glVertex2f(0.085, -0.459);
    glVertex2f(0.04, -0.459);
    glEnd();

    //7th truck

        //body
    glColor3ub(0, 204, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.61f);
    glVertex2f(0.024f, -0.61f);
    glVertex2f(0.024f, -0.50f);
    glVertex2f(-0.1f, -0.50f);
    glEnd();


    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.61f);
    glVertex2f(0.11f, -0.61f);
    glVertex2f(0.11f, -0.63f);
    glVertex2f(-0.1f, -0.63f);
    glEnd();

    //front
    glColor3ub(0, 153, 153);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.61f);
    glVertex2f(0.11f, -0.61f);
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.09f, -0.53);
    glVertex2f(0.03f, -0.53f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.64f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.64f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.64f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.64f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.59);
    glVertex2f(0.08, -0.59);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.577);
    glVertex2f(0.094, -0.577);
    glVertex2f(0.094, -0.561);
    glVertex2f(0.085, -0.539);
    glVertex2f(0.04, -0.539);
    glEnd();

    //8th truck

        //body
    glColor3ub(153, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.69f);
    glVertex2f(0.024f, -0.69f);
    glVertex2f(0.024f, -0.58f);
    glVertex2f(-0.1f, -0.58f);
    glEnd();


    //base of the truck
    glColor3ub(153, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.69f);
    glVertex2f(0.11f, -0.69f);
    glVertex2f(0.11f, -0.71f);
    glVertex2f(-0.1f, -0.71f);
    glEnd();

    //front
    glColor3ub(0, 204, 204);
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, -0.69f);
    glVertex2f(0.11f, -0.69f);
    glVertex2f(0.11f, -0.65f);
    glVertex2f(0.09f, -0.61);
    glVertex2f(0.03f, -0.61f);
    glEnd();

    //wheels
    glColor3ub(0, 0, 0);
    circleSolid(-0.05f, -0.72f, 0.022); // back wheels big circle
    circleSolid(0.06f, -0.72f, 0.022);//front wheels big circle
    glColor3ub(255, 255, 255);
    circleSolid(-0.05f, -0.72f, 0.007);//back wheels small circle
    circleSolid(0.06f, -0.72f, 0.007);//front wheels small circle

    //door
    glColor3ub(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2f(0.09381, -0.67);
    glVertex2f(0.08, -0.67);
    glEnd();

    //window
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.04, -0.657);
    glVertex2f(0.094, -0.657);
    glVertex2f(0.094, -0.641);
    glVertex2f(0.085, -0.619);
    glVertex2f(0.04, -0.619);
    glEnd();
}
void boat3()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.75f, -0.45f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 76, 0);
    glVertex2f(0.47f, -0.4f);
    glVertex2f(0.49f, -0.32f);
    glVertex2f(0.512f, -0.28f);
    glVertex2f(0.63f, -0.28f);
    glVertex2f(0.74f, -0.31f);
    glVertex2f(0.75f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 204);
    glVertex2f(0.562f, -0.23f);
    glVertex2f(0.562f, -0.07f);
    glVertex2f(0.565f, -0.05f);
    glVertex2f(0.664f, -0.07f);
    glVertex2f(0.665f, -0.09f);
    glVertex2f(0.665f, -0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 102);
    glVertex2f(0.6f, -0.28f);
    glVertex2f(0.6f, -0.01f);
    glVertex2f(0.61f, -0.01f);
    glVertex2f(0.61f, -0.28f);
    glEnd();
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.38f, -0.33f);
    glVertex2f(0.38f, -0.48f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.38f, -0.36f);
    glVertex2f(0.42f, -0.40f);
    glEnd();


}







void cloud2()
{
    int i;
    GLfloat x = -.5f;
    GLfloat y = .86f;
    GLfloat radius = .05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a = -.55f;
    GLfloat b = .83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i * twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c = -.45f;
    GLfloat d = .83f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i * twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e = -.52f;
    GLfloat f = .8f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i * twicePi / triangleAmount)),
            f + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = -.6f;
    GLfloat h = .82f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(208, 222, 236);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
            h + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    sky();
    sun();
    glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
    cloud2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22, 0.0f, 0.0f);
    bird();
    glPopMatrix();
    hills();
    river();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    boat();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position3, 0.0f, 0.0f);
    boat2();
    glPopMatrix();

    ground();
    boat3();


    way();
    vehicle();

    fence();
    building();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1240, 750);

    glutCreateWindow("Village Scenario");
    init();
    glutDisplayFunc(display);

    glutTimerFunc(100, birdd, 0);
    glutTimerFunc(100, boat, 0);
    glutTimerFunc(100, boat2, 0);
    glutTimerFunc(100, cloud, 0);


    glutMainLoop();
    return 0;
}


