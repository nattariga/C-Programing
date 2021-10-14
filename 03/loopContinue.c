#include <stdio.h>

void main(){
	char numbers[]={1,2,3,4,5,6,7,8,9,10,11};
	int i,sum,count = sizeof(numbers);
int count1 = 0;
int index = 0;

//Check size size of numbers
while(0 == 0){
	if(numbers[index] == NULL){
		break;
	}
	count1++;
	index++;
}

printf("Size of Index : %d\n\n",count1);

	for(i = 0 ;i < count;i++){
		printf("Number : %d\n",numbers[i]);
		if(numbers[i] == 5){
			continue;
		}
		// sum += numbers[i];  short
		sum = sum + numbers[i];
	}
	printf("Sum : %d\n",sum);
}
