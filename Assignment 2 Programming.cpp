#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//int membercheck(char memberconfirmation)
//{
//	if(memberconfirmation == 'Y')
//	{
//		printf("OK");
//	}
//	else
//	{
//		printf("notok");
//	}
//	return 0;
//}
struct user
{
	int productcode;
	int quantity;
	float discount;
	char memberconfirmation;
};

int main()
{
	//char memberconfirmation;
	
	printf("                                                                ..              \n");
	printf("                                                      ..,+I$$$$$$I.             \n");
	printf("                                            ..,:.. :$$$$$$$$$$$$$$$.            \n");
	printf("                                         :$$$$$$$$$7$$$$$$$$$$$$$$$:            \n");
	printf("                            .:+I$$$I  .,$$$$$$$$$$$:$$$$$$$$$$$$$$$I            \n");
	printf("                      $Z$$$$$$$$$$$$  ?$$$$$$$$$$$$.7$$$$$$$$$$$..              \n");
	printf("          ..,:+++~..  7$$$$$$$$$$$$$..$$$$$$$:...:I.:...=$$$$$$$.               \n");
	printf("    :I$$$$$$$$$$$$$$,.~$$$$$$$$$$$$$..$$$$$$$?=~:,..   ..$$$$$$$.               \n");
	printf("    ,$$$$$$$$$$$$$$$$:.$$$$$$$,. . ...$$$$$$$$$$$$$$+. ..7$$$$$$=               \n");
	printf("    .$$$$$$$$77$$$$$$I.7$$$$$$7$$$$$..I$$$$$$$$$$$$$$7.. ~$$$$$$7               \n");
	printf("    .?$$$$$$  .$$$$$$+.~$$$$$$$$$$$$=...$$$$$$$$$$$$$$.. .$$$$$$$..             \n");
	printf("    .,$$$$$$=I$$$$$$=. .$$$$$$$$$$$$7.  .......$$$$$$$:. .$$$$$$$=.             \n");
	printf("    ..$$$$$$$$$$$$$$$I..$$$$$$$7~,...  .$$?:,,$$$$$$$$.. .$$$$$$$7. ..?7$$$$,   \n");
	printf("    ..$$$$$$$$$$$$$$$$$:7$$$$$$$.,=I$$..$$$$$$$$$$$$$+   .+$$$$$$7.7$$$$$$$$7.  \n");
	printf("      I$$$$$$:...$$$$$$$=$$$$$$$$$$$$$:~$$$$$$$$$$$$..,~~~,......I$$$$$$$$$$$,  \n");
	printf("      :$$$$$$I .,$$$$$$$.$$$$$$$$$$$$$I?$$$$$$$$I,I$$$$$$$$.   .$$$$$$$$$$7?~,  \n");
	printf("      .$$$$$$$$$$$$$$$$7.7$$$$$$$$$$$$$I$$?. ...$$$$$$$$$$$+  .+$$$$$$$?..=?7.  \n");
	printf("      .I$$$$$$$$$$$$$$:. =$$I=,....,$$$$$$$.  ,$$$$$$$$$$$$$  .$$$$$$$$$$$$$I.  \n");
	printf("      .:$$$$$$$$$$$I?$$$$$$$$$$$=...$$$$$$$,..$$$$$$$$$?=+$$.$$$$$$$$$$$I=,...  \n");
	printf("      ..$$I=.... ?$$$$$$$$$$$$$$$$..$$$$$$$I.~$$$$$$$,..   .,$$$$$$$$$7$$$$$$+  \n");
	printf("..:=I$$$$$$$$$I..~$$$$$$$$$$$$$$$$?.$$$$$$$$.?$$$$$$=.      ..+$$$$$$$$$$$$$$~  \n");
	printf("$$$$$$$$$$$$$$$$=.$$$$$$$I+7$$$$$$$.=$$$$$$$.7$$$$$$~.      .:$$$$$$$$$$?,..:?$.\n");
	printf("$$$$$$$$$$$$$$$$$?$$$$$$$:..$$$$$$$:.$$$$$$$.?$$$$$$$, .   .$:..7$$$$$$$$$$$$$$,\n");
	printf("7$$$$$$7:,I$$$$$$$7$$$$$$I,?$$$$$$$..7$$$$$$~.$$$$$$$$$+:=$$$~ ..,$$$$$$$$$$$$$?\n");
	printf("=$$$$$$$. .$$$$$$$=$$$$$$$$$$$$$$7. .=$$$$$$7.?$$$$$$$$$$$$$$I     :$$$$$$$$$$I.\n");
	printf(".$$$$$$$,=$$$$$$$$.$$$$$$$$$$$$$$.. ..$$$$$$$..:$$$$$$$$$$$$$$      ....,,.     \n");
	printf(".7$$$$$$$$$$$$$$$:.7$$$$$$$$$$$$$$+...$$$$$$$= ..+$$$$$$$$$$$$..     .      .   \n");
	printf(" =$$$$$$$$$$$$$$.  =$$$$$$+~$$$$$$$$..$$$$$$$7     .~I$$7?,.  .                 \n");
	printf(" .$$$$$$$$?=,..    .$$$$$$$.:$$$$$$$$$+$$$$$$$.                                 \n");
	printf(" .$$$$$$$.         .$$$$$$$,..$$$$$$7=,..                                       \n");
	printf(" .$$$$$$$~.        .$$$$$$7+  ...                                               \n");
	printf(" .?$$$$$$7.         ....                                                        \n");
	printf("  ,$$$$$I+.                                                                     \n");


	printf("Welcome to Best Price \n");
	printf(" \n");
	printf(" \n");
	printf("Press any key to proceed \n");
	_getch();
	system("cls");
	//printf("Are you a member of BestPrice currently? Y/N\n");
	//scanf_s("%c", memberconfirmation);
	//("You are ");
	//_getch();
	//		system("cls");
	{
		int selection;
		do {
			printf("Please key in the number of your selection\n");
			printf("Option 1 : Product and Price details\n");
			printf("Option 2 : Calculate price of purchased items\n");
			printf("Option 3 : Calculate the delivery charges\n");
			printf("Option 4 : Calculate total pay amount\n");
			printf("Option 5 : Exit\n");
			printf("\n");
			printf("Your Selection:");

			scanf_s("%d", &selection);
			system("cls");

			switch (selection)
			{
			case 1:
				printf("You have selected Option 1");
				printf(" \n");
				printf(" ============== ===================== =================== ================== \n");
				printf("  Product Code   Product Description   Retail Price (RM)   Special Discount  \n");
				printf(" ============== ===================== =================== ================== \n");
				printf("           101   Wall Scrapper                    100.00   -                 \n");
				printf("           202   Tiles Waxes                      350.00   -                 \n");
				printf("           303   Mud/Tar Remover                  500.00   20% Discount      \n");
				printf("           404   Dry Blower                       850.00   25% Discount      \n");
				printf(" ============== ===================== =================== ================== \n");
				printf(" \n");
					//(" \n");
					//("Enter the product code:");
					//("%d",productcode);
					//("Please enter preffered quantity");
					//("%d", quantity);
					
					break;

			case 2:
				printf("You have selected Option 2");
				break;

			case 3:
				printf("You have selected Option 3");
				break;

			case 4:
				printf("You have selected Option 4");
				break;

			case 5:
				printf("Thank you for shopping with BestPrice");
				return 0;
				break;

			default:
				printf("Please enter numbers which are displayed on the screen");
				printf("You will now return the the selection screen");
					printf(" \n");
					printf("Press on any key to return to home screen");
					break;

			}
		} while (selection = 5);

		_getch();
		return 0;
	}
}
                                                                     





                                                                                                                                                                            
                                                                                                                                                                            
                                                                                                                                                                            
                                                                                                                                                                            