#include<stdio.h>
#include<math.h>
int main(){    
float a,b,c,s,r;
printf("For the quadratic equation: ax^2 + bx + c = 0\n");
printf("If the value of\n");
printf("a= ");
scanf("%f", &a);
printf("\n");
printf("b= ");
scanf("%f", &b);
printf("\n");
printf("c= ");
scanf("%f", &c);
printf("\n");
s= b*b;
r= sqrt((s-(4*a*c)));
if(s<4*a*c){
printf("The given equation has no real roots.\n ");
}
else{
printf("Then the roots are: \n");    
printf("x1= %f\n",(-b+r)/(2*a));
printf("x2= %f\n",(-b-r)/(2*a));
return 0;
}}