/*
*Andrew Fleener
*Project 1
*1/12/10
*/
#include <stdio.h>
int main(){
	float price;
	float cash;
	int change;
	printf("Amount of sale ($):");
	scanf("%f", &price);
	printf("Cash Tendered ($):");
	scanf("%f", &cash);
	change = (cash-price)* 100;
	printf("Change:\n");
	printf("\t %d twenties\n", change / 2000);
	change %= 2000;
	printf("\t %d tens\n", change / 1000);
	change %= 1000;
	printf("\t %d fives\n", change / 500);
	change %= 500;
	printf("\t %d ones\n", change / 100);
	change %= 100;
	printf("\t %d quarters\n", change / 25);
	change %= 25;
	printf("\t %d dimes\n", change / 10);
	change %= 10;
	printf("\t %d nickels\n", change / 5);
	change %= 5;
	printf("\t %d pennies\n", change);
	return 0;
}
