#include <stdio.h>

int main() {
float cel, far;
printf("enter the tempreture in celsius: \n");
scanf("%f", &cel);

far = (( cel * (9.0/5.0)) + 32 );
printf("the tempreture in farenheit is: %f\n" , far);
return(0);
}



