#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.1416
static float q = -50.0;
static float p = -50.0;

static GLfloat spin = 0.0;

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}

void windmill()
{



     //center
    glBegin(GL_POLYGON);

        glColor3f(206/256.0f,40/256.0f, 42/256.0f);

        glVertex2f(-4,16);
        glVertex2f(4,16);
        glVertex2f(5.5,-12);
        glVertex2f(-5.5,-12);

    glEnd();



     //C_left
    glBegin(GL_POLYGON);

        glColor3f(227/256.0f, 60/256.0f,62/256.0f);

        glVertex2f(-4,16);
        glVertex2f(-5.5,-12);
        glVertex2f(-10,-12);
        glVertex2f(-7,16);

    glEnd();

    //c_right

    glBegin(GL_POLYGON);

        glColor3f(170/256.0f, 15/256.0f,14/256.0f);

        glVertex2f(4,16);
        glVertex2f(5.5,-12);
        glVertex2f(10,-12);
        glVertex2f(7,16);

    glEnd();


    //Top Center

    glBegin(GL_POLYGON);

        glColor3f(69/256.0f, 64/256.0f,60/256.0f);


        glVertex2f(-4,16);
        glVertex2f(4,16);
        glVertex2f(2.8,27);
        glVertex2f(-2.8,27);

    glEnd();



    //tri_left

    glBegin(GL_TRIANGLES);

       glColor3f(89/256.0f, 80/256.0f,75/256.0f);

        glVertex2f(-2.8,27);
        glVertex2f(-7,16);
        glVertex2f(-4,16);


    glEnd();

    //tri_right
    glBegin(GL_TRIANGLES);

       glColor3f(40/256.0f, 36/256.0f,33/256.0f);

        glVertex2f(2.8,27);
        glVertex2f(7,16);
        glVertex2f(4,16);


    glEnd();


    //bottom center
    glBegin(GL_POLYGON);
        glColor3f(206/256.0f,40/256.0f, 42/256.0f);
        glVertex2f(6.5,-12);
        glVertex2f(7.4,-29.5);
        glVertex2f(-7.4,-29.5);
        glVertex2f(-6.5,-12);

    glEnd();

    //bottom left

    glBegin(GL_POLYGON);
        glColor3f(227/256.0f, 60/256.0f,62/256.0f);
        glVertex2f(-11.5,-12);
        glVertex2f(-12.8,-28);
        glVertex2f(-7.4,-29.5);
        glVertex2f(-6.5,-12);

     glEnd();


      //bottom right
    glBegin(GL_POLYGON);
        glColor3f(170/256.0f, 15/256.0f,14/256.0f);
        glVertex2f(11.5,-12);
        glVertex2f(12.8,-28);
        glVertex2f(7.4,-29.5);
        glVertex2f(6.5,-12);

     glEnd();


//white bottom border center
    glBegin(GL_POLYGON);

        glColor3f(201/256.0f,201/256.0f,201/256.0f);

        glVertex2f(6.8,-11);
        glVertex2f(-6.8,-11);
        glVertex2f(-6.8,-12.2);
        glVertex2f(6.8,-12.2);

     glEnd();


//white bottom border  right
     glBegin(GL_POLYGON);
        glColor3f(145/256.0f, 145/256.0f,145/256.0f);

        glVertex2f(6.8,-11);
        glVertex2f(6.8,-12.2);
        glVertex2f(12,-12.2);
        glVertex2f(12,-11);

     glEnd();


     //white border left
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);

        glVertex2f(-6.8,-11);
        glVertex2f(-6.8,-12.2);
        glVertex2f(-12,-12.2);
        glVertex2f(-12,-11);

     glEnd();
//white border top
//center
    glBegin(GL_POLYGON);

		glColor3f(201/256.0f,201/256.0f,201/256.0f);

        glVertex2f(-4.5,15);
        glVertex2f(-4.5,17.5);
        glVertex2f(4.5,17.5);
        glVertex2f(4.5,15);

     glEnd();


//left
    glBegin(GL_POLYGON);

      glColor3f(1,1,1);

        glVertex2f(-4.5,15);
        glVertex2f(-4.5,17.5);
        glVertex2f(-8,17.5);
        glVertex2f(-8,15);

     glEnd();

//right
    glBegin(GL_POLYGON);

        glColor3f(145/256.0f, 145/256.0f,145/256.0f);

        glVertex2f(4.5,15);
        glVertex2f(4.5,17.5);
        glVertex2f(8,17.5);
        glVertex2f(8,15);

     glEnd();



}



void blades()
{
   glPushMatrix();

    //glColor3f(175/256.0f, 151/256.0f,147/256.0f);
    glColor3f(139/256.0f, 69/256.0f,19/256.0f);
   //glColor3f(121/256.0f, 90/256.0f,62/256.0f);
    glBegin(GL_POLYGON);

        glVertex2f(-1.4,7.6);
        glVertex2f(5.5,7.6);
        glVertex2f(5.5,8);
        glVertex2f(-1.4,8);

     glEnd();


    glPushMatrix();
        glTranslated(0,4.4,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();


    glPushMatrix();
        glTranslated(0,8.6,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(0,12.8,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();

    glPushMatrix();

        glTranslated(0,17,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(0,21.3,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(0,25.4,0);
        glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(5.5,7.6);
			glVertex2f(5.5,8);
			glVertex2f(-1.4,8);

        glEnd();

    glPopMatrix();

///vertical

		glBegin(GL_POLYGON);

			glVertex2f(-1.4,7.6);
			glVertex2f(-1.4,33);
			glVertex2f(-1.1,33);
			glVertex2f(-1.1,7.6);

        glEnd();


    glPushMatrix();

        glTranslated(2.4,0,0);
        glBegin(GL_POLYGON);

            glVertex2f(-1.4,7.6);
            glVertex2f(-1.4,33);
            glVertex2f(-1.1,33);
            glVertex2f(-1.1,7.6);


        glEnd();

    glPopMatrix();


    glPushMatrix();

        glTranslated(3.5,0,0);
        glBegin(GL_POLYGON);

            glVertex2f(-1.4,7.6);
            glVertex2f(-1.4,33);
            glVertex2f(-1.1,33);
            glVertex2f(-1.1,7.6);


        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(4.6,0,0);
        glBegin(GL_POLYGON);

            glVertex2f(-1.4,7.6);
            glVertex2f(-1.4,33);
            glVertex2f(-1.1,33);
            glVertex2f(-1.1,7.6);


        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(5.6,0,0);
        glBegin(GL_POLYGON);

            glVertex2f(-1.4,7.6);
            glVertex2f(-1.4,33);
            glVertex2f(-1.1,33);
            glVertex2f(-1.1,7.6);


        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(6.6,0,0);
        glBegin(GL_POLYGON);

            glVertex2f(-1.4,7.6);
            glVertex2f(-1.4,33);
            glVertex2f(-1.1,33);
            glVertex2f(-1.1,7.6);


        glEnd();

    glPopMatrix();


///horizontal.v

        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);

        glEnd();


    glPushMatrix();

        glTranslated(-3,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
			glVertex2f(23,-8);
			glVertex2f(22.71,-8);
			glVertex2f(22.71,2);

		glEnd();

    glPopMatrix();


    glPushMatrix();

        glTranslated(-6,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);


        glEnd();

    glPopMatrix();

    glPushMatrix();

        glTranslated(-9,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);

        glEnd();

    glPopMatrix();

    glPushMatrix();

        glTranslated(-12,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);

        glEnd();

    glPopMatrix();

    glPushMatrix();

        glTranslated(-15,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);

        glEnd();

    glPopMatrix();

    glPushMatrix();

        glTranslated(-18,0,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(23,-8);
            glVertex2f(22.71,-8);
            glVertex2f(22.71,2);

        glEnd();

    glPopMatrix();



///horizontal.v

    glBegin(GL_POLYGON);

        glVertex2f(23,2);
        glVertex2f(5,2);
        glVertex2f(5,1.5);
        glVertex2f(23,1.5);


    glEnd();

    glPushMatrix();
        glTranslated(0,-3.5,0);
        glBegin(GL_POLYGON);

            glVertex2f(23,2);
            glVertex2f(5,2);
            glVertex2f(5,1.5);
            glVertex2f(23,1.5);

        glEnd();

    glPopMatrix();


    glPushMatrix();
        glTranslated(0,-5,0);
        glBegin(GL_POLYGON);

            glVertex2f(23,2);
            glVertex2f(5,2);
            glVertex2f(5,1.5);
            glVertex2f(23,1.5);

        glEnd();

    glPopMatrix();


    glPushMatrix();
        glTranslated(0,-6.5,0);
        glBegin(GL_POLYGON);

			glVertex2f(23,2);
            glVertex2f(5,2);
            glVertex2f(5,1.5);
            glVertex2f(23,1.5);


        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-8,0);
        glBegin(GL_POLYGON);

            glVertex2f(23,2);
            glVertex2f(5,2);
            glVertex2f(5,1.5);
            glVertex2f(23,1.5);

        glEnd();

    glPopMatrix();


    glPushMatrix();
        glTranslated(0,-9.5,0);
        glBegin(GL_POLYGON);

            glVertex2f(23,2);
            glVertex2f(5,2);
            glVertex2f(5,1.5);
            glVertex2f(23,1.5);

        glEnd();

    glPopMatrix();
 glPopMatrix();


}

void fan()

{
glPushMatrix();


    glPushMatrix();
	blades();
	glPopMatrix();


	glPushMatrix();
		glRotated(-180,0,0,1);
		blades();
	glPopMatrix();

    glColor3f(43/256.0f, 14/256.0f,10/256.0f);
       glBegin(GL_POLYGON);


            glVertex2f(-23,0.5);
            glVertex2f(23,0.5);
            glVertex2f(23,-0.5);
            glVertex2f(-23,-0.5);

        glEnd();

        glBegin(GL_POLYGON);

            glVertex2f(-0.3,33);
            glVertex2f(0.3,33);
            glVertex2f(0.3,-33);
            glVertex2f(-0.3,-33);

        glEnd();
 glPopMatrix();


}
void window()
{

    //window
    glBegin(GL_POLYGON);

        glColor3f(83/256.0f, 44/256.0f,37/256.0f);


        glVertex2f(-1.75,-9);
        glVertex2f(1.75,-9);
        glVertex2f(1.75,-1);
        glVertex2f(-1.75,-1);

    glEnd();

    glBegin(GL_LINES);

        glColor3f(1, 1, 1);

        glVertex2f(-1.75,-3.6);
        glVertex2f(1.75,-3.6);
        glVertex2f(-1.75,-6.3);
        glVertex2f(1.75,-6.3);
        glVertex2f(0,-1);
        glVertex2f(0,-9);


    glEnd();

        ///door circle

    glPushMatrix();

        glColor3f(83/256.0f, 44/256.0f,37/256.0f);
        glTranslatef(0,-21.75,0);
        circle(2.291,3);

    glPopMatrix();
///door
    glBegin(GL_POLYGON);

        glColor3f(83/256.0f, 44/256.0f,37/256.0f);
        glVertex2f(-2.25,-29.5);
        glVertex2f(2.25,-29.5);
        glVertex2f(2.25,-21);
        glVertex2f(-2.25,-21);

    glEnd();

}

void fence()
{
    ///stick

 glPushMatrix();
 glTranslated(0,-2,0);
    glBegin(GL_POLYGON);

           glColor3f(255/256.0f, 155/256.0f,0/256.0f);
            glVertex2f(-37.3,-35);
            glColor3f(139/256.0f, 37/256.0f,0/256.0f);
            glVertex2f(-36.7,-35);
            glVertex2f(-36.7,20);
            //glColor3f(210/256.0f, 105/256.0f,30/256.0f);
            glVertex2f(-37.3,20);

        glEnd();

///boards
        glBegin(GL_POLYGON);
            glColor3f(0,0,0);

            glVertex2f(-32,12.5);
            glVertex2f(-32,18.5);
            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-42,18.5);

            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-45,15.5);
            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-42,12.5);

            //

        glEnd();

        glBegin(GL_POLYGON);
           //glColor3f(255/256.0f, 222/256.0f,173/256.0f);
           glColor3f(205/256.0f, 133/256.0f,63/256.0f);
             glVertex2f(-32.5,13.5);
            glVertex2f(-32.5,17.5);

           // glColor3f(255/256.0f, 165/256.0f,79/256.0f);
            glColor3f(255/256.0f, 210/256.0f,150/256.0f);
            glVertex2f(-41.5,17.5);
              glVertex2f(-44,15.5);
            glVertex2f(-41.5,13.5);

            //

        glEnd();


    glPushMatrix();
    glRotated(-180,0,0,1);
    glTranslated(75,-23,0) ;
        glBegin(GL_POLYGON);
            glColor3f(0,0,0);

            glVertex2f(-32,12.5);
            glVertex2f(-32,18.5);
            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-42,18.5);

            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-45,15.5);
            glColor3f(139/256.0f, 58/256.0f,58/256.0f);
            glVertex2f(-42,12.5);

            //

        glEnd();


        glBegin(GL_POLYGON);
             glColor3f(205/256.0f, 133/256.0f,63/256.0f);
             glVertex2f(-32.5,13.5);
            glVertex2f(-32.5,17.5);
             glColor3f(255/256.0f, 210/256.0f,150/256.0f);
            glVertex2f(-41.5,17.5);
              glVertex2f(-44,15.5);
            glVertex2f(-41.5,13.5);

            //

        glEnd();
    glPopMatrix()  ;

 glPopMatrix() ;




    ///vertical lines
        glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            glVertex2f(-50,-32);
            glVertex2f(50,-32);
            glVertex2f(50,-30.8);

            glVertex2f(-50,-30.8);

        glEnd();

         glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            glVertex2f(-50,-37);
            glVertex2f(50,-37);
            glVertex2f(50,-35.8);

            glVertex2f(-50,-35.8);

        glEnd();



    glBegin(GL_POLYGON);
            //glColor3f(229/256.0f,229/256.0f,229/256.0f);
            glColor3f(1,1,1);
            glVertex2f(-47.9,-41);
            glVertex2f(-47.9,-28);

            glVertex2f(-47,-26.5);
            //glColor3f(201/256.0f,201/256.0f,201/256.0f);
            glVertex2f(-46.1,-28);
            glColor3f(1,1,1);
            glVertex2f(-46.1,-41);

        glEnd();

        glBegin(GL_POLYGON);


            glColor3f(171/256.0f,171/256.0f,171/256.0f);
            glVertex2f(-46.1,-28);
            glVertex2f(-46.1,-41);

            glVertex2f(-46.4,-41);
            glVertex2f(-46.4,-28);
            glVertex2f(-47,-26.5);

        glEnd();



    for(int i=5;i<=100;i=i+5){
        glPushMatrix();
        glTranslated(i,0,0);
        glBegin(GL_POLYGON);
             glColor3f(1,1,1);
            glVertex2f(-47.9,-41);
            glVertex2f(-47.9,-28);
            //glColor3f(190/256.0f,190/256.0f,190/256.0f);
            glVertex2f(-47,-26.5);
            glVertex2f(-46.1,-28);
            glVertex2f(-46.1,-41);

        glEnd();


        glBegin(GL_POLYGON);


            glColor3f(171/256.0f,171/256.0f,171/256.0f);
            glVertex2f(-46.1,-28);
            glVertex2f(-46.1,-41);

            glVertex2f(-46.4,-41);
            glVertex2f(-46.4,-28);
            glVertex2f(-47,-26.5);

        glEnd();
    glPopMatrix();

    }



}


void tree()
{
///small_right
     glPushMatrix();
    glTranslated(40,7,0);
    glScaled(0.5,0.5,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
         glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
         glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();




    ///single tree right

 glPushMatrix();
    glTranslated(46,10,0);
    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
         glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
       glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();
 ///single tree end



 ///middle tree

 glPushMatrix();
    glTranslated(22.5,10,0);
    glScaled(1,1,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
         glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
       glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///

glPushMatrix();
    glTranslated(14.5,8,0);
    glScaled(0.8,0.8,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
         glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

 /// small

 glPushMatrix();
    glTranslated(18,4,0);
    glScaled(0.6,0.6,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///middle tree end

///middle left

glPushMatrix();
    glTranslated(-1,4,0);
    glScaled(0.7,0.7,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///

glPushMatrix();
    glTranslated(-6,2,0);
    glScaled(0.6,0.6,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///bush
glPushMatrix();
    glTranslated(-23.5,-6.5,0);
    glScaled(0.5,0.5,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4,5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-0.9,0);
         glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.5,4);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,-1.9,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2.5,3);
    glPopMatrix();

 glPopMatrix();
///up
glPushMatrix();
    glTranslated(-21.5,-5,0);
    glScaled(0.5,0.5,0);

    glPushMatrix();
         glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4,5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-0.9,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.5,4);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,-1.9,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2.5,3);
    glPopMatrix();

 glPopMatrix();
///
glPushMatrix();
    glTranslated(-20,-7,0);
    glScaled(0.5,0.5,0);

    glPushMatrix();
       glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4,5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-0.9,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.5,4);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,-1.9,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2.5,3);
    glPopMatrix();

 glPopMatrix();

 ///3 middle 2nd

 glPushMatrix();
    glTranslated(-42.5,-7,0);
    glScaled(0.6,0.6,0);


    glPushMatrix();
    glTranslated(22.5,10,0);
    glScaled(1,1,0);

    glPushMatrix();
       glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
         glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///

glPushMatrix();
    glTranslated(14.5,8,0);
    glScaled(0.8,0.8,0);

    glPushMatrix();
         glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

 /// small

 glPushMatrix();
    glTranslated(18,4,0);
    glScaled(0.6,0.6,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

  glPopMatrix();
glPopMatrix();
///2nd middle tree end

///left most
glPushMatrix();
    glTranslated(-53,-9.5,0);
    glScaled(0.5,0.5,0);


    glPushMatrix();
    glTranslated(22.5,10,0);
    glScaled(1,1,0);

    glPushMatrix();
       glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

///

glPushMatrix();
    glTranslated(14.5,8,0);
    glScaled(0.8,0.8,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

 glPopMatrix();

 /// small

 glPushMatrix();
    glTranslated(18,4,0);
    glScaled(0.6,0.6,0);

    glPushMatrix();
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        circle(4.5,6.2);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.75,0,0);
        glColor3f(182/256.0f,209/256.0f,52/256.0f);
        circle(3.7,5.7);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(213/256.0f,232/256.0f,78/256.0f);
        circle(2,3.5);
    glPopMatrix();


    glBegin(GL_POLYGON);
        glColor3f(139/256.0f,26/256.0f,26/256.0f);
        glVertex2f(-0.2,-6);
        glVertex2f(0.2,-6);
        glVertex2f(0.2,-12);
        glVertex2f(-0.2,-12);
    glEnd();

  glPopMatrix();
glPopMatrix();
///2nd middle tree end



}


void cloud()
{

if(q<=85.0)
     q=q+0.03;

    else
        q=-70;
    glutPostRedisplay();


glPushMatrix();
 glTranslated(q,0,0);
 glPushMatrix();
    glColor3f(254/256.0f,253/256.0f,225/256.0f);
    glTranslated(15,40,0);
    glPushMatrix();


        glBegin(GL_POLYGON);
        glVertex2f(-3.6,-6);
        glVertex2f(8,-6);
        glVertex2f(8,-3.5);
        glVertex2f(-3.6,-3.5);
        glEnd();
    glPopMatrix();


    glPushMatrix();

        circle(3.4,5.2);
    glPopMatrix();


    glPushMatrix();
        glTranslated(4.5,-1.7,0);

        circle(2.5,4);
    glPopMatrix();



    glPushMatrix();
        glTranslated(7.6,-3.56,0);

        circle(1.6,2.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-4,-2.8,0);

        circle(2.2,3.2);
    glPopMatrix();
 glPopMatrix();



 /// cloud left


 glPushMatrix();


    glTranslated(-27,33,0);
    glScaled(0.9,0.9,0);
    glColor3f(254/256.0f,253/256.0f,225/256.0f);
    glPushMatrix();

       // glColor3f(1.0f,1.0f,1.0f);
        glBegin(GL_POLYGON);
        glVertex2f(-3.6,-6);
        glVertex2f(8,-6);
        glVertex2f(8,-3.5);
        glVertex2f(-3.6,-3.5);
        glEnd();
    glPopMatrix();


    glPushMatrix();
       // glColor3f(1.0f,1.0f,1.0f);
        circle(3.4,5.2);
    glPopMatrix();


    glPushMatrix();
        glTranslated(4.5,-1.7,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(2.5,4);
    glPopMatrix();



    glPushMatrix();
        glTranslated(7.6,-3.56,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(1.6,2.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-4,-2.8,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(2.2,3.2);
    glPopMatrix();
 glPopMatrix();




  /// cloud left 2


 glPushMatrix();

    glTranslated(-6,26,0);
    glScaled(0.6,0.5,0);
    glColor3f(254/256.0f,253/256.0f,225/256.0f);
    glPushMatrix();

       // glColor3f(1.0f,1.0f,1.0f);
        glBegin(GL_POLYGON);
        glVertex2f(-3.6,-6);
        glVertex2f(8,-6);
        glVertex2f(8,-3.5);
        glVertex2f(-3.6,-3.5);
        glEnd();
    glPopMatrix();


    glPushMatrix();
       // glColor3f(1.0f,1.0f,1.0f);
        circle(3.4,5.2);
    glPopMatrix();


    glPushMatrix();
        glTranslated(4.5,-1.7,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(2.5,4);
    glPopMatrix();



    glPushMatrix();
        glTranslated(7.6,-3.56,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(1.6,2.5);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-4,-2.8,0);
       // glColor3f(1.0f,1.0f,1.0f);
        circle(2.2,3.2);
    glPopMatrix();
  glPopMatrix();

glPopMatrix();

}



void grass()
{

for(int j=-50;j<=100;j=j+4){
 glPushMatrix();
 glTranslated(j,-24,0);
    glPushMatrix();
    //center
       glColor3f(213/256.0f,232/256.0f,78/256.0f);

        glBegin(GL_POLYGON);
        glVertex2f(0,-20);
        glVertex2f(2,-20);
        glVertex2f(2,-4);

        glEnd();

//left
        glBegin(GL_POLYGON);
        glColor3f(16/256.0f,89/256.0f,46/256.0f);

        glVertex2f(2,-20);
        glVertex2f(0,-20);
        glVertex2f(-1,-4);

        glEnd();

//right
        glBegin(GL_POLYGON);
        glColor3f(126/256.0f,170/256.0f,11/256.0f);
        glVertex2f(0,-20);
        glVertex2f(2,-20);
        glVertex2f(5,-7);

        glEnd();

    glPopMatrix();
 glPopMatrix();

}

///flower


    for(int k=-49;k<=100;k=k+20){
    glPushMatrix();
    glTranslated(k,0,0);
    glPushMatrix();
        glColor3f(148/256.0f,0/256.0f,211/256.0f);
        glPushMatrix();
            glTranslated(0,-32,0);
            glRotated(8,0,0,1);
            //glColor3f(184/256.0f,78/256.0f,234/256.0f);
            circle(0.5,1.2);

        glPopMatrix();


        glPushMatrix();
            glTranslated(0.7,-32,0);
            glRotated(-8,0,0,1);
            //glColor3f(184/256.0f,78/256.0f,234/256.0f);
            circle(0.5,1.2);

        glPopMatrix();

     glPopMatrix();


     glPopMatrix();
    }

///flower 2

        for(int k=-40;k<=100;k=k+20){
        glPushMatrix();
        glTranslated(k,0,0);
        glPushMatrix();
            glColor3f(254/256.0f,50/256.0f,173/256.0f);
            glPushMatrix();
                glTranslated(0,-29.5,0);
                glRotated(8,0,0,1);
                //glColor3f(184/256.0f,78/256.0f,234/256.0f);
                circle(0.5,1.2);

            glPopMatrix();


            glPushMatrix();
                glTranslated(0.7,-29.5,0);
                glRotated(-8,0,0,1);
                //glColor3f(184/256.0f,78/256.0f,234/256.0f);
                circle(0.5,1.2);

            glPopMatrix();

         glPopMatrix();


         glPopMatrix();
    }

///flower 3


    for(int k=-45;k<=100;k=k+10){
        glPushMatrix();
        glTranslated(k,0,0);
        glPushMatrix();
            //glColor3f(255/256.0f,127/256.0f,0/256.0f);
            glColor3f(255/256.0f,112/256.0f,0/256.0f);
            glPushMatrix();
                glTranslated(0,-33.5,0);
                glRotated(8,0,0,1);
                //glColor3f(184/256.0f,78/256.0f,234/256.0f);
                circle(0.5,1.2);

            glPopMatrix();


            glPushMatrix();
                glTranslated(0.7,-33.5,0);
                glRotated(-8,0,0,1);
                //glColor3f(184/256.0f,78/256.0f,234/256.0f);
                circle(0.5,1.2);

            glPopMatrix();

         glPopMatrix();


         glPopMatrix();
    }







}
void bird()
{


    if(p<=90.0)
     p=p+0.05;

    else
        p=-80;
    glutPostRedisplay();
glPushMatrix();
glTranslated(p,0,0);
  ///bird right
glPushMatrix();
      glPushMatrix();
        glTranslated(15,40,0);
           glRotated(10,0,0,1);
        glPushMatrix();

            glBegin(GL_POLYGON);
               glColor3f(0.0f,0.0f,0.0f);
                glVertex2f(0,0);
                glVertex2f(-1.5,4.2);
                glVertex2f(0.5,0);

            glEnd();

            glBegin(GL_POLYGON);
               glColor3f(0.0f,0.0f,0.0f);
                glVertex2f(0,0);
                glVertex2f(1.5,3.5);
                glVertex2f(0.5,0);

            glEnd();


            glBegin(GL_POLYGON);
               glColor3f(0.0f,0.0f,0.0f);
                glVertex2f(-0.7,0);
                glVertex2f(1.3,0);
                glVertex2f(1.3,0.2);
                glVertex2f(-0.7,0.2);

            glEnd();
        glPopMatrix();
      glPopMatrix();

///bird left
        glPushMatrix();
            glTranslated(-5,30,0);
            glRotated(10,0,0,1);
            glPushMatrix();

                glBegin(GL_POLYGON);
                    glColor3f(0.0f,0.0f,0.0f);
                    glVertex2f(0,0);
                    glVertex2f(-1.5,4.2);
                    glVertex2f(0.5,0);

                glEnd();

                glBegin(GL_POLYGON);
                    glColor3f(0.0f,0.0f,0.0f);
                    glVertex2f(0,0);
                    glVertex2f(1.5,3.5);
                    glVertex2f(0.5,0);

                glEnd();


                glBegin(GL_POLYGON);
                    glColor3f(0.0f,0.0f,0.0f);
                    glVertex2f(-0.7,0);
                    glVertex2f(1.3,0);
                    glVertex2f(1.3,0.2);
                    glVertex2f(-0.7,0.2);

                glEnd();
            glPopMatrix();
          glPopMatrix();
        glPopMatrix();
 glPopMatrix();


}

void background()
{

    ///sky

    glPushMatrix();
        glBegin(GL_POLYGON);
           glColor3f(255/256.0f,215/256.0f,0/256.0f);
            glVertex2f(-50,25);
            glColor3f(247/256.0f,241/256.0f,233/256.0f);
            glVertex2f(-50,70);
            glVertex2f(50,70);
            glColor3f(255/256.0f,215/256.0f,0/256.0f);
            glVertex2f(50,20);
        glEnd();
///sky_circle
glColor3f(249/256.0f,190/256.0f,12/256.0f);
        glPushMatrix();

            glTranslated(-48,27,0);
            circle(7,12);
        glPopMatrix();

        glPushMatrix();

            glRotated(-5,0,0,1);
            glTranslated(-37,14,0);
            circle(8,14);
        glPopMatrix();


        glPushMatrix();

            glRotated(3,0,0,1);
            glTranslated(-26,33,0);
            circle(5,9);
        glPopMatrix();

        glPushMatrix();

            glRotated(-3,0,0,1);
            glTranslated(-22,30,0);
            circle(4,7);
        glPopMatrix();

        glPushMatrix();

            glRotated(-2,0,0,1);
            glTranslated(-6,23,0);
            circle(13,20);
        glPopMatrix();

        glPushMatrix();

            glTranslated(13,16,0);
            circle(8,13);
        glPopMatrix();

        glPushMatrix();

            glRotated(7,0,0,1);
            glTranslated(28,20,0);
            circle(8,15);
        glPopMatrix();

        glPushMatrix();

            glTranslated(40,12,0);
            circle(8.5,14);
        glPopMatrix();

        glPushMatrix();

            glRotated(-3,0,0,1);
            glTranslated(48,24,0);
            circle(5,9);
        glPopMatrix();
///sky_rect
        glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(255/256.0f,140/256.0f,0/256.0f);
            glVertex2f(-50,-7);
            glVertex2f(50,5);
            glColor3f(249/256.0f,190/256.0f,12/256.0f);
            glVertex2f(50,20);
            glVertex2f(-35,28);
            glVertex2f(-50,20);

        glEnd();
        glPopMatrix();


 ///sun

         glPushMatrix();
           glColor4f(250/256.0f,126/256.0f,2/256.0f,0.5f);
            //glRotated(-3,0,0,1);
            glTranslated(-13,28,0);
            circle(9,13.5);
        glPopMatrix();


    glPopMatrix();






    ///green
	glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3f(222/256.0f,233/256.0f,129/256.0f);
            glVertex2f(-50,-5);
            glVertex2f(-25,-4);

            glVertex2f(35,8);
            glVertex2f(50,8);
            glVertex2f(50,-14);
            glVertex2f(-50,-11);

        glEnd();


        glBegin(GL_POLYGON);
        glColor4f(31/256.0f,141/256.0f,130/256.0f,0.2f);


            glVertex2f(-50,-11);
            glVertex2f(50,-14);
            glVertex2f(50,8);

            glVertex2f(-50,-5);
        glEnd();


        glBegin(GL_POLYGON);
        glColor4f(45/256.0f,161/256.0f,150/256.0f,0.2f);


            glVertex2f(-50,-11);
            glVertex2f(50,-14);
            glVertex2f(50,-1.5);
             glVertex2f(-10,0);

             glVertex2f(-50,-5);
        glEnd();



        glBegin(GL_POLYGON);
        glColor4f(132/256.0f,190/256.0f,69/256.0f,0.3f);


            glVertex2f(-50,-11);
            glVertex2f(50,-14);
            glVertex2f(50,3);
             glVertex2f(-50,-5);
        glEnd();




        glBegin(GL_POLYGON);
        //glColor4f(253/256.0f,239/256.0f,90/256.0f,0.5f);
           //glColor4f(180/256.0f,210/256.0f,110/256.0f,0.4f);
            glColor4f(129/256.0f,189/256.0f,67/256.0f,0.5f);

            glVertex2f(-50,-11);
            glVertex2f(50,-14);
            glVertex2f(50,-4);
            glVertex2f(-50,-5);
        glEnd();



        glBegin(GL_POLYGON);
        glColor4f(212/256.0f,217/256.0f,55/256.0f,0.5f);

            glVertex2f(-50,-11);
            glVertex2f(50,-14);
            glVertex2f(50,-9);
            glVertex2f(-50,-7);
        glEnd();


	glPopMatrix();


	///cloud
    glPushMatrix();

     cloud();
     bird();
    glPopMatrix();




///border
    glPushMatrix();
        glBegin(GL_POLYGON);

             glColor3f(207/256.0f,175/256.0f,76/256.0f);

            glVertex2f(-50,-11);
             glColor3f(207/256.0f,175/256.0f,76/256.0f);
            //glColor3f(210/256.0f,105/256.0f,30/256.0f);
            glVertex2f(50,-14);
            glColor3f(134/256.0f,91/256.0f,23/256.0f);
            glVertex2f(50,-17);
             glColor3f(134/256.0f,91/256.0f,23/256.0f);
            glVertex2f(-50,-13);

    glEnd();


	glPopMatrix();
///river
	glPushMatrix();
        glBegin(GL_POLYGON);
        glColor4f(126/256.0f,213/256.0f,207/256.0f,0.5f);

            glVertex2f(-50,-13);
            glVertex2f(50,-17);
            glVertex2f(50,-35);
            glVertex2f(-50,-35);

        glEnd();


        glBegin(GL_POLYGON);
         glColor4f(133/256.0f,224/256.0f,217/256.0f,0.5f);

            glVertex2f(50,-35);
            glVertex2f(-50,-35);
            glVertex2f(-50,-15);
            glVertex2f(50,-21.6);

        glEnd();
///

        glBegin(GL_POLYGON);
        glColor4f(104/256.0f,193/256.0f,201/256.0f,0.4f);

            glVertex2f(50,-35);
            glVertex2f(-50,-35);
            glVertex2f(-50,-19.8);
            glVertex2f(50,-19.8);

        glEnd();
///

        glBegin(GL_POLYGON);
       glColor4f(124/256.0f,175/256.0f,230/256.0f,0.5f);

            glVertex2f(50,-35);
            glVertex2f(-50,-35);
            glVertex2f(-50,-23.5);
            glVertex2f(50,-23.5);

        glEnd();

///
        glBegin(GL_POLYGON);
       glColor4f(101/256.0f,137/256.0f,213/256.0f,0.5f);

            glVertex2f(50,-35);
            glVertex2f(-50,-35);
            glVertex2f(-50,-26);
            glVertex2f(50,-26);

        glEnd();
///
        glBegin(GL_POLYGON);
        glColor4f(55/256.0f,107/256.0f,193/256.0f,0.5f);

            glVertex2f(50,-35);
            glVertex2f(-50,-35);
            glVertex2f(-50,-30);
            glVertex2f(50,-30);

        glEnd();


	glPopMatrix();

///second_green
	glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3f(222/256.0f,233/256.0f,129/256.0f);

            glVertex2f(-50,-35);
            glVertex2f(50,-35);

         glColor3f(45/256.0f,161/256.0f,150/256.0f);
          //glColor3f(39/256.0f,139/256.0f,129/256.0f);
            glVertex2f(50,-50);
            glVertex2f(-50,-50);

        glEnd();

    glPopMatrix();





}



void spinDisplay_left(void)
{
   spin = spin + 0.5;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 0.5;
   if (spin < 0.0)
      spin = spin +360.0;
   glutPostRedisplay();
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			//spinDisplay_left();
			glutIdleFunc(spinDisplay_left);
			break;

		case 'r':
			//spinDisplay_right();
			glutIdleFunc(spinDisplay_right);
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
///background
    glPushMatrix();
       glTranslated(0,-5,0);
       background();
    glPopMatrix();


    tree();

    grass();



///fence
    glPushMatrix();
       glTranslated(0,-5,0);
      fence();
    glPopMatrix();



 ///windmill 1
    glPushMatrix();

       glTranslated(32,17,0);
        glScaled(0.6,0.6,0);

            glPushMatrix();
                glTranslated(0,-15,0);

                windmill();
                window();
            glPopMatrix();

            glPushMatrix();

                glTranslated(0,5,0);

            glRotatef(spin,0.0f,0.0f,1.0f);
                fan();
            glPopMatrix();

    glPopMatrix();

 ///windmill 2

 glPushMatrix();

         glTranslated(7,12,0);
        glScaled(0.47,0.47,0);

        glPushMatrix();
    // glRotatef(90,0,0,1);
            glTranslated(0,-15,0);
            windmill();
            window();
        glPopMatrix();

        glPushMatrix();

            glTranslated(0,5,0);
             glRotatef(spin,0.0f,0.0f,1.0f);
            fan();
        glPopMatrix();
     glPopMatrix();


 ///windmill 3

 glPushMatrix();

        glTranslated(-13,5.5,0);
        glScaled(0.37,0.37,0);

        glPushMatrix();
    // glRotatef(90,0,0,1);
            glTranslated(0,-15,0);
            windmill();
            window();
        glPopMatrix();

        glPushMatrix();

            glTranslated(0,5,0);
             glRotatef(spin,0.0f,0.0f,1.0f);
            fan();
        glPopMatrix();
     glPopMatrix();


	glFlush();
}





void init(void)
{
	glClearColor (1.0, 1.0, 1.0, 1.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}





int main()
{
    PlaySound("Peder B. Helland - Always (Official Audio).wav", NULL, SND_FILENAME| SND_ASYNC);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1200, 800);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Use of Mouse and Keyboard");
	init();

	/// Enable Transparency
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);

	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

