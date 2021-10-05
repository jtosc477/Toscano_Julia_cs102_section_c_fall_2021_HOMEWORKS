#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char str[25][25],tmp[25];
    puts("Please enter 3 words one at a time: ");
    for(i=0;i<3;i++) {
        scanf("%s",str[i]);
    }
    printf("Order of words before alphabetized:\n");
    for(i=0;i<3;i++) {
        printf("%s\n",str[i]);
    }
    for(i=0;i<3;i++) {
        for(j=i+1;j<3;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(tmp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],tmp);
            }
        }
    }
    printf("Order of words after alphabetized:\n");
    for(i=0;i<3;i++) {
        printf("%s\n",str[i]);
    }
    return 0;
}
