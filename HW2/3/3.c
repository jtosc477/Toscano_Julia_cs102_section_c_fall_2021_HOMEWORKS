#include <stdio.h>

int main() {
float f;
int i;
char c;
printf("Enter float:\n");
scanf("%f",&f);
printf("Enter integer:\n");
scanf("%d",&i);
printf("Enter character:\n");
scanf(" %c",&c);

printf("The float, %d\n",f);
printf("The integer, %f\n",i);
printf("The character, %d\n",c);
return 0;
}
