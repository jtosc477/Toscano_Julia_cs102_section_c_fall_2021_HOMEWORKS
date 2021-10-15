#include <stdio.h>
/*q=quarters
d=dimes
n=nickels
p=pennies
caq=cents after removal of quarters
cad=cents after removal of dimes
c=cents
qval,dval,nval=value of quarters, dimes, and nickels */
int main () {
int qval=25, dval=10, nval=5;
int q, d, n, p, c, caq, cad;
printf("Enter value in cents:\n");
scanf("%d",&c);
q=c/qval;
caq=c-q*qval;
d=caq/dval;
cad=caq-d*dval;
n=cad/nval;
p=cad-n*nval;
printf("Your change is %d quarters, %d dimes, %d nickels, and %d pennies\n",q,d,n,p);
return 0;
}
