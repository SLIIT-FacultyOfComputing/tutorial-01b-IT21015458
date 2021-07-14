/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int m=1,n,sum=0;//Declaring variables
	
	printf("Input Number : ");//input Number
	scanf("%d",&n);//Read Number
	
	while(m<=n){//Check m smaller than and equal to n
		sum+=m;//Calculate Sum
		m+=1;
	}
	printf("Sum is %d",sum);//Display Sum

  return 0;
}

