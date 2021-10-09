
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "volume.h"

float cube()
{
    float a;
    float V;
    printf("Enter value of side\n");
    scanf("%f",&a);
    V=a*a*a;
    return V;
}
 float cuboid()
 {
    float l,b,h;
    float V;
    printf("Enter length,breadth & hight of cuboid\n");
    scanf("%f%f%f",&l,&b,&h);

    V=l*b*h;
    return V;
 }
 float cylinder()
 {
    float r,h;
    float V;
    printf("Enter radius & hight of cylinder\n");
    scanf("%f%f",&r,&h);
    V=3.14*r*r*h;
    return V;
 }
 float sphere()
 {
    float r;
    float V;
    printf("Enter radius of sphere\n");
    scanf("%f",&r);
    V=(4*3.14*r*r*r)/3;
    return V;
 }
 float cone()
 {
      float r,h;
      float V;
      printf("Enter radius & hight of cone\n");
      scanf("%f%f",&r,&h);
      V=(3.14*r*r*h)/3;
      return V;
 }
 float display(float V)
{
    printf("Volume is = %f\n",V);
    return V;
}

int volume(int ch)
{
 //int q;
 float res;

 while(1)
 {
  printf("Select the shape for calculate volume\n");
  printf("Press 1 for select CUBE\n");
  printf("Press 2 for select CUBOID\n");
  printf("Press 3 for select CYLINDER\n");
  printf("Press 4 for select SPHERE\n");
  printf("Press 5 for select CONE\n");
  scanf("%d",&ch);

   switch(ch)
     {
         case 1: res=cube();break;
         case 2: res=cuboid();break;
         case 3: res=cylinder();break;
         case 4: res=sphere();break;
         case 5: res=cone();break;
         default: printf("Wrong input");

     }
  if(ch>=1 && ch<=5)
   display(res);
  printf("\n\n press any key to continue... / press 0 to EXIT\n\n\n");
    exit(0);
  return 0;
  }

}

