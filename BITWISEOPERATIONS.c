#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("===== BITWISE =====\N");
	printf("Entetr the first number:");
	scanf("%d",&a);
	printf("Entetr the second number:");
	scanf("%d",&b);
	printf("\n----- MENU -----\n");
	printf("1.Bitwise AND (&)\n");
	printf("2.Bitwise OR (|)\n");
	printf("3.Bitwise XOR (^)\n");
	printf("4. Bitwise NOT (~)\n");
	printf("5.lift shift (<<)\n");
	printf("6. righ shift (>>)\n");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("Bitwise AND result=%d",res);
			break;
		case 2:
			res=a|b;
			printf("Bitwise OR result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("Bitwise XOR result=%d",res);
			break;
		case 4:
			res=~a;
			printf("Bitwise NOT result=%d",res);
			break;
		case 5:
			res=a<<b;
			printf("lift shift result=%d",res);
			break;
		case 6:
			res=a>>b;
			printf("right shift result=%d",res);
			break;
		default:
			printf("invaliod choice.");
	}
	return 0;
}
