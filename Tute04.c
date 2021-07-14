/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n,int m);
int maximum(int n,int m);
int multiply(int n,int m);

int main() {
   
   

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