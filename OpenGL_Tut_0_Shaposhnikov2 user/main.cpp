#include <GL/glut.h>
#include <cmath>
#include"drawlib_shaposhnikov.h"

void drawSun1(float x ,float y,float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.04,0.04,1);
    glBegin(GL_TRIANGLE_FAN);

    //солнце1
    glVertex2f(0,0);
    for(float i=0;i<55;i++){
    float a=(float)i/50*M_PI*2;
    glVertex2f( cos(a)*5,sin(a)*5);
}
    glEnd();
    glPopMatrix();
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить

    glPushMatrix();
    drawGame(0.1,1.1,0);
    drawAirplane(0.3,0.5,0);
    drawTrain(0.8,0.8,0.7);
    drawAmongUs(0.04,0.2,0.5);
    drawSun(7.6,3,0);
    glPopMatrix();
    for(int i=0;i<360;i+=60)
        drawCat(0.5*sin(i*M_PI/180),0.25*cos(i*M_PI/180),0);
    for(int j=0;j<4;j++)
        drawForest(0.25*j,-0.25*j,0);
    drawSun1(-0.75,0.75,0);

    glutSwapBuffers();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}
