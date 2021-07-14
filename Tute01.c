/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
  double sub1,sub2,average;//declaring variables
	
	printf("Enter Subject 01 Marks : ");//Input Subject 01 Marks
	scanf("%lf",&sub1);//Read Subject 01 Marks
	
	printf("Enter Subject 02 Marks : ");//Input Subject 02 Marks
	scanf("%lf",&sub2);//Read Subject 02 Marks
	
	average=(sub1+sub2)/2.0;//Calculate Average
	
	printf("Average is %.2f\n",average);//Display Average

  return 0;
}

