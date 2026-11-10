#include <stdio.h>

int main(void){
int x,y;//declare variables
int sum;//declare variable 
x = 1000;//initialize variables
y = 2000;//initialize variables
// %d: placeholder for integer values coming from a variable
printf("der wert von x:%d\n",x);
sum = x + y;
printf("der wert von y:%d\n",y);
printf("der wert von x+y:%d\n",sum);
return 0;
}