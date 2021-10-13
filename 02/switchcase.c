#include <stdio.h>
#include <time.h>

	void main (){
		int year;
			printf("Enter your old : ");
			scanf("%d",&year);
		
		switch (year)
		{
			case 13 :
				printf("Year of birth is 2008");
				break;
			case 14 :
				printf("Year of birth is 2007");
				break;
			case 15 :
				printf("Year of birth is 2006");
				break;
			case 16 :
				printf("Year of birth is 2005");
				break;
			case 17 :
				printf("Year of birth is 2004");
				break;
			case 18 :
				printf("Year of birth is 2003");
				break;
			case 19 :
				printf("Year of birth is 2002");
				break;
			case 20 :
				printf("Year of birth is 2001");
				break;
			case 21 :
				printf("Year of birth is 2000");
				break;
			default:
				printf("You were born before 2000.");
		}
		
	}
