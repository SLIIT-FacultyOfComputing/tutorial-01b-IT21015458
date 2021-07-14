/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n,int m);
int maximum(int n,int m);
int multiply(int n,int m);

int main() {

  int no1, no2;//Declare Variable
	
	printf("Enter a value for no 1 : ");//input number 01
	scanf("%d",&no1);//Read Number 01
	
	printf("Enter a value for no 2 : ");//input number 02
 	scanf("%d",&no2);//Read Number 02
 	
	printf("\nMinimum Number is : %d",minimum(no1,no2));
	printf("\nMaximum Number is : %d",maximum(no1,no2));
	printf("\nMultiply Number is : %d",multiply(no1,no2));

   return 0;
}
int minimum(int n,int m){
	if(n>m){
		return m;
	}
	else{
		return n;
	}
}
int maximum(int n,int m){
	if(n>m){
		return n;
	}
	else{
		return m;
	}
}
int multiply(int n,int m){
	return n*m;
}