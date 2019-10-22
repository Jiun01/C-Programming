#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void pricelist() {
	printf(" ============== ===================== =================== ================== \n");
	printf("  Product Code   Product Description   Retail Price (RM)   Special Discount  \n");
	printf(" ============== ===================== =================== ================== \n");
	puts("           101   Wall Scrapper                    100.00   -                 \n");
	puts("           202   Tiles Waxes                      350.00   -                 \n");
	puts("           303   Mud/Tar Remover                  500.00   20% Discount      \n");
	puts("           404   Dry Blower                       850.00   25% Discount      \n");
	printf(" ============== ===================== =================== ================== \n");
}

float ws,tw,mtr,db,total;
int selection, productcode, quantity;
char membershipconfirmation;

int main() {
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
				pricelist();
				printf("Proceed to Option 2 to purchase items \n");
				printf("Enter any key to return to main menu");
				_getch();
				system("cls");
				break;

			case 2:
				char quitkey;
				printf("You have selected Option 2");
				printf(" \n");
				do {
					pricelist();
					printf(" \n");
					printf("Enter the product code:");
					scanf_s("%d", &productcode);
					switch (productcode)
					{
					case 101:
						printf("You have selected Wall Scrapper.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &quantity);

						ws += quantity * 100;
						break;

					case 202:
						printf("You have selected Tiles Waxes.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &quantity);

						tw += quantity * 350;
						break;

					case 303:
						printf("You have selected Mud/Tar Remover.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &quantity);

						mtr += quantity * 500;
						break;

					case 404:
						printf("You have selected Dry Blower.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &quantity);

						db += quantity * 850;
						break;
					default:
						printf("Please enter the product key according to the table\n");
						printf("Enter Y to continue buying\n");
							break;
					}
					printf("Do you want to buy more:Y/N \n");
					scanf_s(" %c", &quitkey);
					system("cls");
				} while (quitkey == 'y');
				printf("Press any key to return to main menu");
				_getch();
				system("cls");
				break;
			
			case 3:
				printf("You have selected Option 3\n");
				system("cls");
				break;

			case 4:
				printf("You have selected Option 4\n");
				printf("Are you currently a member:Y/N\n");
				scanf_s(" %c", &membershipconfirmation);
				system("cls");
				total = (ws + tw + mtr + db);
				printf(Total without Tax and Delivery fees="%.2f", total);

				_getch();
				system("cls");
				break;

			case 5:
				printf("Thank you for shopping with BestPrice");
				return 0;
				break;

			default:
				printf("Please enter numbers which are displayed on the screen\n");
				printf("You will now return the the selection screen\n");
				printf(" \n");
				printf("Press on any key to return to home screen\n");
				_getch();
				system("cls");
				break;

			}
		} while (selection = 5);

		_getch();
		return 0;
	}
}
