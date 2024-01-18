//Write a program to enter the names of days in a week.
#include <stdio.h>

int main()
{
  int weekday;
  printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) : ");
  scanf("%d", &weekday);
  
  switch (weekday)
  {
  	case 1:
  		printf("Today is Monday");
		  break;
  	case 2:
  		printf("Today is Tuesday");
		  break;
  	case 3:
  		printf("Today is Wednesday"); 
		  break;
  	case 4:
  		printf("Today is Thursday"); 
		  break;
  	case 5:
  		printf("\n Today is Friday"); 
		  break;
  	case 6:
  		printf("Today is Saturday");
		  break;
  	case 7:
  		printf("Today is Sunday");
		  break;
	default:
		printf("Please enter Valid Number between 1 to 7");
  }

  return 0;
}