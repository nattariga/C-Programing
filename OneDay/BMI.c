#include <stdio.h>
#include <math.h>

void main(){
	float bmi;
	float weight;
	float height;
	
	system("color 1");
	printf("Enter your weight : ");
	scanf("%f",&weight);
	printf("Enter your height : ");
	scanf("%f",&height);
	
	bmi = weight/pow(height,2);
	printf("BMI is %.2f",bmi);
	getch();
}
