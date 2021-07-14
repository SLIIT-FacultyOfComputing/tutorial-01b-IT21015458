/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
int main() {
  double m=50.00,n=40.00,amount=0,distance=0;//declaring variables
	
	printf("Enter Distance(km) : ");//Input distance
	scanf("%lf",&distance);//Read distance
	
	if(distance<=0){//Check distance smaller than and equal to 0
		printf("\nEnter Valid Number");//Display massege
		return -1;
	}
	else if(distance<=30){//Check Distance smaller than and equal to 30km
		amount=distance*m;//Callcule Amount
		printf("Net Amount is : Rs %.2f",amount);//Display amount
	}
	else{//Check distance greater than 30km
		amount=(30.00*m)+(distance-30)*n;//Calculate Amount
		printf("Net Amount is : Rs %.2f",amount);//Display Amount
  }
  return 0;
}
