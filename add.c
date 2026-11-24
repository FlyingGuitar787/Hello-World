#include <stdio.h>
//zum compilieren folgen Sie dem Befehl: gcc -o add.exe add.c
int main(void){
int x,y;//declare variables
int sum;//declare variable
int rem;// remainder 
float div;
printf("Geben Sie den ersten Wert ein: ");
scanf("%d", &x);
printf("Geben Sie den zweiten Wert ein: ");
scanf("%d", &y);
sum = x + y;//calculate sum of x and y
div = (float)x / (float)y;//calculate division of x and y
rem = x % y;//calculate remainder of x and y

printf("der wert von x+y:%d\n",sum);
printf("der wert von x/y:%.2f\n",div);
printf("der wert von x/y:%d\n",x/y);
printf("der wert von x%%y:%d\n",rem);
return 0;
}