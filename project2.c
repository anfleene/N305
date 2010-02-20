/*
*Andrew Fleener
*Project 2
*2/07/10
*/
#include <stdio.h>

int valid_score(int score){
	return (score > 0 && score <= 850);
}

float premium_bank(int score){
	float apr;
	if(score >= 720){
		apr = 5.79;
	}else if(score >= 700 ){
		apr = 5.92;
	}else if(score >= 675){
		apr = 6.46;
	}else if(score >= 620){
		apr = 7.61;
	}else if(score >= 560){
		apr = 8.53;
	}else if(score >= 500){
		apr = 9.29;
	}else{
		apr = 5000;
	}
	return apr;
}

float workers_bank(int score){
	float apr;
	if(score >= 750){
		apr = 5.49;
	}else if(score >= 720 ){
		apr = 5.72;
	}else if(score >= 685){
		apr = 6.36;
	}else if(score >= 610){
		apr = 7.66;
	}else if(score >= 560){
		apr = 8.73;
	}else if(score >= 500){
		apr = 9.99;
	}else if(score >= 430){
		apr = 10.14;
	}else if(score >= 350){
		apr = 11.04;
	}else{
		apr = 5000;
	}
	return apr;
}

int main(){
	char name[50] = "";
	int score = 0;
	printf("Enter Your Name: ");
	gets(name);  
	printf("Enter Your Credit Score: ");
	scanf("%d", &score);
	if(!valid_score(score)){
		printf("That is not a valid credit score, please enter a number between 1-850\n");
		scanf("%d", &score);
	}
	float apr = (workers_bank(score) < premium_bank(score)) ? workers_bank(score) : premium_bank(score);
	
	if(apr > 100){
		printf("%s's credit score is too low, you have been Declined\n", name);
	}else{
		printf("The Best Rate For %s is %.2f\n", name, apr);
	}
	
	return 0;
}