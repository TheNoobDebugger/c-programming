/*Program to find 2nd largest number among three numbers using if statement*/
#include<stdio.h>
#include<conio.h>
int main()
   {
     double n1,n2,n3;
     printf("Enter three different numbers:");
     if(n1>=n2 && n1>=n3)
	printf("%.2lf is the largest number.",n1);
     if(n2>=n1 && n2>=n3)
	printf("%.2lf is the largest number.",n2);
     if(n3>=n1 && n3>=n2)
	printf("%.2lf is the largest number.",n3);
    return 0;
   }
