#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


struct Products{
	int productcode;
	float discount,retailprice;
};

int main(){
	char membershipconfirmation;
	
	printf("                                                                ..              \n");
	printf("                                                      ..,+I$$$$$$I.             \n");
	printf("                                            ..,:.. :$$$$$$$$$$$$$$$.            \n");
	printf("                                         :$$$$$$$$$7$$$$$$$$$$$$$$1$:            \n");
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

	{
		int selection,productcode,quantity;
		
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
				printf("You have selected Option 1\n");
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

				printf("Enter the product code:");
				scanf_s("%d", &productcode);
				printf("Please enter preffered quantity:");
				scanf_s("%d", &quantity);

				printf("Enter any key to return to main menu:");
				
				_getch();
				system("cls");
					break;

			case 2:
				printf("You have selected Option 2");
				system("cls");
				break;

			case 3:
				printf("You have selected Option 3");
				system("cls");
				break;

			case 4:
				printf("You have selected Option 4");
					printf("Are you currently a member:Y/N\n");
				scanf_s("%c",&membershipconfirmation);
				system("cls");
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
					_getch();
					system("cls");
					break;

			}
		} while (selection = 5);

		_getch();
		return 0;
	}
}
 
