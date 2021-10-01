#include <stdio.h>

int main() {
    int num[5], tmp, j, i, z, mid;
    int tally=0;
    int max=0;
    int mode=0;
    float mean;
    float total=0;
    printf("Enter a 5 number sequence:");
    for(int i=0;i<5;i++) {
        scanf("%d",&num[i]);
        total += num[i];
        mean=total/5;
        }
    for(int i=0;i<5;i++) {
        for (j = 0; j < 5; ++j) {
                if (num[i] > num[j]) {
                    tmp =  num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                 }
            }
        }
    mid = num[2];
    for(int i=0;i<5;i++) {
        for(z=i+1;z<5;z++) {
            if(num[i]==num[z]) {
                ++tally;
            }
            if(tally>max) {
                max = tally;
                mode=num[i];
                }
            }
        }
if(mode==0) {
    printf("The mode DNE\n");
}
else {
printf("Mode is %d\n",mode);
}
printf("Mean is %f\n",mean);
printf("Median is %d\n",mid);
    return 0;
}
