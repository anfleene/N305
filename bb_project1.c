/*
*Andrew Fleener
*Black Belt Project 1
*1/12/10
*/
#include <stdio.h>

int get_pennies(ammount){
	int input = 0;
	scanf("%d", &input);
	return input*ammount;
}

int print_change(int change, int num_pennies){
	char *tender;
	switch(num_pennies){
		case 500: 
			tender = "Fives";
			break;
		case 100:
			tender = "Ones";
			break;
		case 25:
			tender = "Quarters";
			break;
		case 10:
			tender = "Dimes";
			break;
		case 5:
			tender = "Nickels";
			break;
	}
	int coins = change / num_pennies;
	if(coins != 0){
		printf("\t %d %s\n", coins, tender);
	}
	return change % num_pennies;
}

int main(){
	float price=0;
	int penny_cost=0;
	int cash = 0;
	int change = 0;
	int input=0;
	printf("Amount of sale (No Pennies allowed):");
	
	while(1){
		scanf("%f", &price);
		penny_cost = price*100;
		if(penny_cost % 5 != 0){
			printf("There are no pennies allowed for the purchase price\n");	
			price =0;
		}else{
			break;
		}
	};
	printf("Cash Tendered ($):\n");
	printf("How Many Fives? ");
	cash += get_pennies(500);
	printf("How Many Ones? ");
	cash += get_pennies(100);
	printf("How Many Quarters? ");
	cash += get_pennies(25);
	printf("How Many Dimes? ");
	cash += get_pennies(10);
	printf("How Many Nickels? ");
	cash += get_pennies(5);
	change = (cash-penny_cost);
	printf("Change:\n");
	change = print_change(change, 500);
	change = print_change(change, 100);
	change = print_change(change, 25);
	change = print_change(change, 10);
	change = print_change(change, 5);
	return 0;
}