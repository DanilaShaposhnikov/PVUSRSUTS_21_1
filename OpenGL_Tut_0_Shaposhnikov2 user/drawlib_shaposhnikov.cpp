#include"drawlib_shaposhnikov.h"
void drawGame(float r,float g,float b){
    glBegin(GL_QUADS);
    //трава
    glColor3f(r,g,b);
    glVertex2f(1,-0.3);
    glColor3f(0.1,0.4,0);
    glVertex2f(-1,-0.3);
    glColor3f(0.1,1.1,0);
    glVertex2f(-1,-1);
    glColor3f(0.1,0.4,0);
    glVertex2f(1,-1);

    //пляж
    glColor3f(7.6,3,0);
    glVertex2f(1,0);
    glColor3f(7,3,0);
    glVertex2f(-1,0);
    glColor3f(7,4,0);
    glVertex2f(-1,-0.3);
    glColor3f(7.6,3,1);
    glVertex2f(1,-0.3);

    //небо
    glColor3f(0,0.15,1);
    glVertex2f(1,0);
    glColor3f(0,0.5,0.75);
    glVertex2f(-1,0);
    glColor3f(0.1,0.3,0.75);
    glVertex2f(-1,1);
    glColor3f(0.01,0.1,0.75);
    glVertex2f(1,1);
    glEnd();

    glBegin(GL_TRIANGLES);

    //горы
    glColor3f(0.2,0.3,0.4);
    glVertex2f(1,0);
    glVertex2f(0.75,0.7);
    glVertex2f(0.4,0);

    glColor3f(0.4,0.4,0.35);
    glVertex2f(0.7,0);
    glVertex2f(0.45,0.6);
    glVertex2f(0.2,0);

    //верхушки гор
    glColor3f(1,1,1);
    glVertex2f(0.75,0.7);
    glVertex2f(0.6,0.4);
    glVertex2f(0.82,0.5);

    glColor3f(1,1,1);
    glVertex2f(0.45,0.6);
    glVertex2f(0.4,0.5);
    glVertex2f(0.53,0.4);
    glEnd();
}

void drawCat(float x, float y,float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glScalef(0.5,0.5,1);
    glBegin(GL_TRIANGLES);

    //тело
    glColor3f(4,0,0);
    glVertex2f(0,0.4);
    glColor3f(1,0.4,0.1);
    glVertex2f(0.2,-0.2);
    glColor3f(1,0.4,0.1);
    glVertex2f(-0.2,-0.2);

    //голова
    glVertex2f(0.2,0.6);
    glVertex2f(-0.2,0.6);
    glVertex2f(0,0.4);

    //уши
    glVertex2f(0.2,0.6);
    glVertex2f(0.15,0.7);
    glVertex2f(0.1,0.6);
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.15,0.7);
    glVertex2f(-0.1,0.6);

    //глаза
    glColor3f(0.8,0.8,0.7);
    glVertex2f(0.4,0.2);
    glVertex2f(0.5,0.1);
    glVertex2f(0.2,-0.2);
    glColor3f(1,1,1);
    glVertex2f(0.05,0.55);
    glVertex2f(0.15,0.55);
    glVertex2f(0.1,0.5);

    //хвост
    glVertex2f(-0.05,0.55);
    glVertex2f(-0.15,0.55);
    glVertex2f(-0.1,0.5);

    //лапы
    glColor3f(7.6,3,0.5);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.12,-0.2);
    glVertex2f(0.06,-0.2);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.12,-0.2);
    glVertex2f(-0.06,-0.2);
    glEnd();
    glPopMatrix();
}

void drawAirplane(float r, float g, float b){
    glBegin(GL_TRIANGLES);

    //руль
    glColor3f(0.5,0.03,0);
    glVertex2f(0.25,0.75);
    glVertex2f(0.3,0.8);
    glVertex2f(0.3,0.7);

    //фонарь
    glColor3f(0,0.15,15);
    glVertex2f(0.9,0.6);
    glVertex2f(0.8,0.7);
    glVertex2f(0.8,0.6);

    //хвост
    glColor3f(r,g,b);
    glVertex2f(0.3,0.8);
    glVertex2f(0.3,0.7);
    glVertex2f(0.4,0.7);
    glEnd();

    glBegin(GL_QUADS);

    //фюзеляж
    glColor3f(r,g,b);
    glVertex2f(0.3,0.7);
    glVertex2f(0.4,0.6);
    glVertex2f(0.8,0.6);
    glVertex2f(0.8,0.7);

    //крыло1
    glColor3f(r,g,b);
    glVertex2f(0.4,0.5);
    glVertex2f(0.5,0.6);
    glVertex2f(0.6,0.6);
    glVertex2f(0.5,0.5);

    //крыло2
    glColor3f(r,g,b);
    glVertex2f(0.8,0.8);
    glVertex2f(0.7,0.8);
    glVertex2f(0.6,0.7);
    glVertex2f(0.7,0.7);
    glEnd();
}

void drawSun(float r, float g , float b ){
    glPushMatrix();
    glTranslatef(-0.2,0.1,-0.6);

    glBegin(GL_QUADS);

    //облако
    glColor3f(1,1,1);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.3,0.8);
    glVertex2f(0.1,0.8);
    glVertex2f(0.1,0.6);

    glVertex2f(-0.35,0.65);
    glVertex2f(-0.35,0.75);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.3,0.65);

    glVertex2f(0.1,0.63);
    glVertex2f(0.1,0.73);
    glVertex2f(0.15,0.73);
    glVertex2f(0.15,0.63);
    glEnd();
    glPopMatrix();
}

void drawTrain(float r,float g,float b){
    glPushMatrix();
    glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);

    //кабина поезда
    glColor3f(r,g,b);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.9,-0.7);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.7,-0.4);

    //бак с водой
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.7,-0.5);

    //окно
    glColor3f(0,1,1);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.8,-0.5);
    glVertex2f(-0.8,-0.4);

    //труба
    glColor3f(0.8,0.8,0.7);
    glVertex2f(-0.5,-0.4);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.45,-0.4);

    //колесо левое
    glColor3f(1,0.4,0.1);
    glVertex2f(-0.8,-0.6);
    glVertex2f(-0.8,-0.7);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.7,-0.6);

    //колесо правое
    glColor3f(1,0.5,0.3);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.6,-0.7);
    glVertex2f(-0.5,-0.7);
    glVertex2f(-0.5,-0.6);
    glEnd();

    glBegin(GL_TRIANGLES);

    //резак
    glColor3f(1,0,0);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.2,-0.7);

    //крыша
    glColor3f(1,0,0);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.7,-0.4);

    //подставка
    glColor3f(0.8,0.8,0.7);
    glVertex2f(-1,-0.6);
    glVertex2f(-0.9,-0.6);
    glVertex2f(-0.9,-0.7);
    glEnd();
    glPopMatrix();
}

void drawAmongUs(float r,float g,float b){
     glBegin(GL_QUADS);

    //тело
    glColor3f(r+0.96,g-0.40,b-0.40);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.5,-0.8);
    glVertex2f(0.5,-0.5);

    //очки
    glColor3f(0,1,1);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.4,-0.5);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.5,-0.6);

    //левая нога
    glColor3f(r+0.96,g-0.2,b-0.5);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.2,-0.9);
    glVertex2f(0.3,-0.9);
    glVertex2f(0.3,-0.8);

    //правая нога
    glVertex2f(0.4,-0.8);
    glVertex2f(0.4,-0.9);
    glVertex2f(0.5,-0.9);
    glVertex2f(0.5,-0.8);

    //рюкзак
    glVertex2f(0.1,-0.6);
    glVertex2f(0.1,-0.8);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.2,-0.6);

    //часть головы1
    glColor3f(r,g,b);
    glVertex2f(0.3,-0.4);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.5);
    glVertex2f(0.4,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);

    //часть головы2

    glVertex2f(0.3,-0.4);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.4);
    glVertex2f(0.4,-0.5);
    glVertex2f(0.5,-0.5);

    // рог для imposter
    glColor3f(0.6,0,0.2);
    glVertex2f(0.7,-0.3);
    glColor3f(0.7,0.4,0.5);
    glVertex2f(0.4,-0.4);
    glColor3f(0.4,0.2,0.6);
    glVertex2f(0.5,-0.5);
    glEnd();
}

void drawForest(float x ,float y,float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glBegin(GL_QUADS);

    //пень
    glColor3f(0.2,0.6,0.3);
    glVertex2f(0.2,-0.3);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.3,-0.2);
    glVertex2f(0.3,-0.3);

    //листва
    glColor3f(0,0.9,0);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.1);

    glVertex2f(0.2,-0.2);
    glVertex2f(0.3,-0.2);
    glVertex2f(0.3,0);
    glVertex2f(0.2,0);

    glVertex2f(0.3,-0.1);
    glVertex2f(0.4,-0.1);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.3,-0.2);
    glEnd();
    glPopMatrix();
}
