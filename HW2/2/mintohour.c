#include <stdio.h>

int main () {
int m;
int h = 60;
printf("Enter your time in minutes:\n");
scanf("%d",&m);
int ans = m/h;
int fans = m-(60*ans);
printf("Your time in hours and minutes is %d hours and %d minutes\n",ans,fans);
return 0;
}

