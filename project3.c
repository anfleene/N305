/*
*Andrew Fleener
*Project 2
*2/07/10
*/
#include <stdio.h>
#include <stdlib.h>

int add(int i, int j){return i + j;}

void add_input(){
	int i, j;
	printf("Input two integers to be added together:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	printf("%d + %d = %d\n", i, j, add(i,j));
}

int sub(int i, int j){return i - j;}

void sub_input(){
	int i, j;
	printf("Input two integers to be subtracted:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	printf("%d - %d = %d\n", i, j, sub(i,j));
}

int mult(int i, int j){return i * j;}

void mult_input(){
	int i, j;
	printf("Input two integers to be multiplied together:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	printf("%d * %d = %d\n", i, j, mult(i,j));	
}

int divide(int i, int j){
	if(j == 0)
		return 9999;
	return i/j;
}

void divide_input(){
	int i, j;
	printf("Input two integers to be divided:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	int quo = divide(i,j);
	if (quo == 9999){
		//error
		printf("Cannot Divide by 0\n");
	}else{
		printf("%d + %d = %d\n", i, j, quo);		
	}
}

int expo(int i, int j){
	int return_val = 1;
	int k;
	for(k=0; k < j; k++)
		return_val *= i;
	return return_val;
}

void expo_input(){
	int i, j;
	printf("Input two integers first the base and then the exponent:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	printf("%d^%d = %d\n", i, j, expo(i,j));
}

int gcd(int i, int j){
	int temp;
	if (i < j){
		i = temp;
		i = j; 
		j = temp;
	}
	while(j != 0){
		temp = i % j;
		i = j;
		j = temp;
	}
	return i;
}

void gcd_input(){
	int i, j;
	printf("Input two integers to find the greatest common denominator:(seperated with a comma ex: 1,2)\n");
	scanf("%d, %d", &i, &j);
	printf("The GCD of %d and %d is %d\n", i, j, gcd(i,j));
}


int fact(int i){
	int fact = i;
	int j;
	for(j=i-1; j > 0; j--)
		fact *= j;
	return fact;
}

void fact_input(){
	int i;
	printf("Input an integer to find its factoral\n");
	scanf("%d", &i);
	printf("%d! = %d\n", i, fact(i));
}

char choice(){
	char input;
	scanf("%c", &input);
	return input;
}

void print_menu(){
	printf("1.Add two integers\n");
	printf("2. Subtract two integer\n");
	printf("3. Multiply two integers\n");
	printf("4. Divide two integers\n");
	printf("5. Calculate an integer raised to a positive integer power\n");
	printf("6. Compute the GCD (Greatest Common Divisor) of two integers\n");
	printf("7. Compute the factorial of an integer\n");
	printf("q. Quit\n");
}

void main_loop(){
	char menu_choice;
	while(1){
		print_menu();
		menu_choice = choice();
		switch(menu_choice){
			case '\n':
				menu_choice = choice();
				break;				
			case '1':
				add_input();
				break;
			case '2':
				sub_input();
				break;
			case '3':
				mult_input();
				break;
			case '4':
				divide_input();
				break;
			case '5':
				expo_input();
				break;
			case '6':
				gcd_input();
				break;
			case '7':
				fact_input();
				break;
			case 'q':
			case 'Q':
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("\n\n\n");
				printf("==========================================\n");
				printf("%c is an invalid Choice Please Try again\n", menu_choice);
				printf("==========================================\n");
				break;
		}
	}
}

int main(){
	main_loop();
}