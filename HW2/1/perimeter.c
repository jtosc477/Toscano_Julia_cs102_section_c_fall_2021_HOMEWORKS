#include <stdio.h>

int main() {
int h, w;
float per;
printf("Enter the height of your rectangle:\n");
scanf("%d",&h);
printf("Enter the width of your rectangle:\n");
scanf("%d",&w);
per=w+w+h+h;
printf("The perimeter of your rectangle is %f\n",per);
return 0;
}
