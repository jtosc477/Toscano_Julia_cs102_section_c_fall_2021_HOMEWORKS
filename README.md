# Mean, Median, and Mode
Algorithm:
  1. Receive 5 integers via STDIN and make into an array
  2. Find sum of all numbers in sequence and set total/5 equal to mean
  3. Reorder integers in ascending order
  4. Set midpoint equal to third number in array
  5. Count the appearance of each number and set number with maximum count equal to mode
  6. Print mean, median, and modes unless mode is found to be 0 in which case, "The mode DNE" will print
Pseodocode:
  FOR i=0 to 5 DO
  Scan 5 integer sequence
  total=sum of all integers
  mean=total/5
  FOR i=0 to 5 DO
    FOR j=0 to 5 DO
      IF number in sequence is greater than next number, switch
    END FOR
END FOR
    Midpoint=third number
  FOR i=0 to 5 DO
    FOR z=0 to 5
      IF first digit equals next digit, raise count by one
      END IF
      IF count exceeds max count, count=max count and mode=number with max count
      END IF
    END FOR
END FOR
      IF mode=0 DO
        print The mode DNE
       else DO
       print mode
       ENF IF
       print mean
       print mode
       
 The Code:
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
       
       
