#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("BBBBBBBBBBBBBBBBB   PPPPPPPPPPPPPPPPP   \n");
	printf("B::::::::::::::::B  P::::::::::::::::P  \n");
	printf("B::::::BBBBBB:::::B P::::::PPPPPP:::::P \n");
	printf("BB:::::B     B:::::BPP:::::P     P:::::P\n");
	printf("  B::::B     B:::::B  P::::P     P:::::P\n");
	printf("  B::::B     B:::::B  P::::P     P:::::P\n");
	printf("  B::::BBBBBB:::::B   P::::PPPPPP:::::P \n");
	printf("  B:::::::::::::BB    P:::::::::::::PP  \n");
	printf("  B::::BBBBBB:::::B   P::::PPPPPPPPP    \n");
	printf("  B::::B     B:::::B  P::::P            \n");
	printf("  B::::B     B:::::B  P::::P            \n");
	printf("  B::::B     B:::::B  P::::P            \n");
	printf("BB:::::BBBBBB::::::BPP::::::PP          \n");
	printf("B:::::::::::::::::B P::::::::P          \n");
	printf("B::::::::::::::::B  P::::::::P          \n");
	printf("BBBBBBBBBBBBBBBBB   PPPPPPPPPP          \n");
	printf("Welcome to Best Price \n");
	printf(" \n");
	printf(" \n");
	printf("Press any key to proceed \n");
	_getch();
	system("cls");
	{
		int selection;

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
			printf("You have selected Option 5");
			break;

		default:
			printf("Please enter one number only");
			break;

		}

		return 0;
		_getch();
	}
}
                                                                                                                                                 