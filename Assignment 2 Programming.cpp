#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void pricelist() {
	printf(" ============== ===================== =================== ================== \n");
	printf("  Product Code   Product Description   Retail Price (RM)   Special Discount  \n");
	printf(" ============== ===================== =================== ================== \n");
	printf("           101   Wall Scrapper                    100.00   -                 \n");
	printf("           202   Tiles Waxes                      350.00   -                 \n");
	printf("           303   Mud/Tar Remover                  500.00   20%% Discount      \n");
	printf("           404   Dry Blower                       850.00   25%% Discount      \n");
	printf(" ============== ===================== =================== ================== \n");
}

float ws, tw, mtr, db, deliveryfee, gtotal;
int selection, productcode, wsquantity = 0, twquantity = 0, mtrquantity = 0, dbquantity = 0, distance;
char membershipconfirmation;

int main() {
	printf("                                                                ..              \n");
	printf("                                                      ..,+I$$$$$$I.             \n");
	printf("                                            ..,:.. :$$$$$$$$$$$$$$$.            \n");
	printf("                                         :$$$$$$$$$7$$$$$$$$$$$$$$1$:           \n");
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
			printf("Your Selection:\n");

			scanf_s("%d", &selection);
			system("cls");

			switch (selection){
			case 1:
				printf("You have selected Option 1\n");
				printf(" \n");
				pricelist();
				printf("Proceed to Option 2 to purchase items \n");
				printf("Enter any key to return to main menu\n");

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
						scanf_s("%d", &wsquantity);

						ws += wsquantity * 100;
						break;

					case 202:
						printf("You have selected Tiles Waxes.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &twquantity);

						tw += twquantity * 350;
						break;

					case 303:
						printf("You have selected Mud/Tar Remover.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &mtrquantity);

						mtr += (500 * mtrquantity)*0.08;
						break;

					case 404:
						printf("You have selected Dry Blower.\n");
						printf("Please Enter your Quantity:");
						scanf_s("%d", &dbquantity);

						db += (850 * dbquantity)*0.75;
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

				printf("You Have Purchased a total of\n");			
				printf("\n+----------------------------------+------------+---------------+------------+");
				printf("\n|           Product Name           | Unit Price |   Quantity    |  Total     |");
				printf("\n+----------------------------------+------------+---------------+------------+");
				printf("\n| Wall Scrapper                    |   RM100    | %d		|  %.2f      |",wsquantity,ws);
				printf("\n| Tile Waxes                       |   RM350    | %d             |  %.2f      |",twquantity,tw);
				printf("\n| Mud/Tar Remover (20%% Discount)   |   RM500    | %d             |  %.2f      |",mtrquantity,mtr);
				printf("\n| Dry Blower (25%% Discount)        |   RM850    | %d             |  %.2f      |",dbquantity,db);
				printf("\n+----------------------------------+------------+---------------+------------+");
				printf("Press any key to return to main menu\n");
				_getch();
				system("cls");
				break;

			case 3:
				char quitkeyd;
				printf("You have selected Option 3\n");
				printf("Please enter the aprroximate distance:\n");
				scanf_s("%d", &distance);
				do {
					if (distance >= 100) {
						printf("I am sorry but we do not deliver to places 100km further or more\n");
					}
					else if (distance > 30 and distance < 100) {
						deliveryfee = 50 + ((distance - 30) * 3);
						printf("The distance is between 30km to 100km\n");
						printf("Delivery fees:"); 
						printf("%.2f", deliveryfee);
					}
					else {
						printf("The distance is less than 30 km\n");
						printf("Delivery Fees:RM50.00\n");
					}
				printf("Do you want to try a different distance? Y/N\n");
				scanf_s(" %c", &quitkeyd);
				system("cls");
				} while (quitkeyd == 'y');
				break;

			case 4://nested if(membership discount)
				printf("You have selected Option 4\n");
				printf("Are you currently a member:Y/N\n");
				scanf_s(" %c", &membershipconfirmation);
				system("cls");
				gtotal = (ws + tw + mtr + db); //delivery not added
				printf("Gross Total=" "%.2f", gtotal);

				_getch();
				system("cls");
				break;

			case 5:
				printf("Thank you for shopping with BestPrice\n");
				printf("Press any key to end this session");
				_getch();
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
