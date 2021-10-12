#include <stdio.h>  
//v.1
void main(){
	int score;
		printf("Enter your score : ");
		scanf("%d",&score);
		
	if (score >= 80 && score <= 100){
			printf("Grade : 4.0");
		}else if (score >= 75){
			printf("Grade : 3.5");
		}else if (score >= 70){
			printf("Grade : 3.0");
		}else if (score >= 65){
			printf("Grade : 2.5");
		}else if (score >= 60){
			printf("Grade : 2.0");
		}else if (score >= 55){
			printf("Grade : 1.5");
		}else if (score >= 50){
			printf("Grade : 1");
		}else if (score < 50 && score >= 0){
			printf("Grade : 0");
		}else {
			printf("Score should greater -1");
		}
}

