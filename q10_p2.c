#include<stdio.h>
struct complex_numbers
        {double real[3];
        double img[3];

        }c;
int main(){
        int i;

        for(i=0;i<=1;i++){
        printf("Enter real and imaginary parts of complex number");
        scanf("%lf",&c.real[i]);
        scanf("%lf",&c.img[i]);}


        c.real[2]=(c.real[0]*c.real[1]-c.img[0]*c.img[1]);
         c.img[2]=(c.real[0]*c.img[1]+c.img[0]*c.real[1]);
printf("The product of the complex numbers is %lf + i(%lf)",c.real[2],c.img[2]);


return 0;








}
