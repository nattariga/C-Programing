#include <stdio.h>
#include <time.h>
//v.2
void main (){
	int currentYear,year,age;
	time_t seconds=time(NULL);
	
    struct tm* current_time=localtime(&seconds);
    currentYear = (current_time->tm_year + 1900);
    	printf("Current year = %d\n",currentYear);
    	
    	printf("Enter your age : ");
    	scanf("%d",&age);
    	
    year = currentYear - age;
    	printf("You was born in %d",year);
	}
