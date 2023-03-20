#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <Windows.h>
#pragma warning(disable:4996)
#define MAX_SIZE 100

void mainMenuVisitor();
void menuVisitor();
void addVisitor();
void displayVisitor();
void searchVisitor();
void modifyVisitor();
void backupVisitor();
void deleteVisitor();
void mainMenuVenue();
void menuVenue();
void displayVenue();
void addVenue();
void searchVenue();
void modifyVenue();
void deleteVenue();
void backUpVenue();
void mainMenuStaff();
void menuStaff();
void addStaff();
void displayStaff();
void searchStaff();
void modifyStaff();
void backupStaff();
void deleteStaff();
void menuVE();
void menuVisit();
void menuExit();
void mainMenuVE();
void addVisit();
void displayvisit();
void modifyVisit();
void deleteVisit();
void addExit();
void displayexit();
void modifyExit();
void deleteExit();
void backupVisit();
void backupExit();
void searchVisit();
void searchExit();


struct Venue {
	char venueID[10];
	char category[15];
	char description[20];
	int maxVisitors;
	int currVisitors;
	int lastSanDay, lastSanMth, lastSanYrs;
	int nextSanDay, nextSanMth, nextSanYrs;
	char sanName[20];
	char staffInCharge[20];
};

void main() {
	printf("MMMMMMMMMMMMNXXXXXXXXXXXXXXXXXXXXXXXXXXNWMMMMMMMMMMMWX0kxxxkO0KNWMMMMMMMMNXXXXXXXXXXXXXXXXXXXXXXXXXXNWMMMMMMMWNX0OOOOOO0KXWMMMMMMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMWd..........................cXMMMMMWWN0dc;;;;;.    .':dONMMMMWo..........................lNMMMMNOo:,,,,,'.  ...,:okXWMMWMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMl                          ;KMMMMMXd;':dOKNWWl        .,dXMWWc                          :XWWNx,.,lx0KXNO'         .;kNMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMo                          ;XMMMNx,,dKWMMMWNKc           ,kNNc                          ;XMXc.,ONWMWKkdl.          ,OWMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMWo                          ;KMMXc.lXMMMMXd:'..           .ckKl                          :NWo ;KMMWNd..;:;,'.     .lXMMMWMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMWKOkOOOkkd' 'dxxxc..lkkkkkOk0WWNc.oNMMMNk'.,oxOOko,    .;d0NMWKOkkkOkOd. ,dxxx: .oOOOOOOOKWX; dMMMMX; :0XNWNKOd:',kNMMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMWx.:XMMMWd..oXMMWMMMNd;cxKWMWWMMMMMMMMMMK, lWMMMx.'0MMMMMMMMMNc cNMMMW0c,'',;cldk00XWMMMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cWMMMk..kMMMMMMMMMWc dMMMMK; cNMMMWMMMWWWWMMMMMMMMMMMMMMMMK, lWMMMx.'0MMMMMMMMMMO'.c0WMMMWNKd.     ..;oOWMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMN:.xMMMMK, oMWWMMMMMWWMMWMMMMMMMMMMMMMMMK, lWMMMx.'OMMMMMMMMMMWKl'.;lx0XNWK,          .:0WMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMWl lWMMMN: :XMWMMMMMMNKXWMMMMMMMMMMMMMMMK, lWMMMx.'OMMMMMMMMMMMMWXkl:,',,;;.           .kMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMMk.'0MMWW0,.cKWWMMMWKl..:d0NWMMMMMMMMMMMK, lWMMMx.'OMMMMMMMMMMMMXxd0XXX0kdoc;'.         cWMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cWMMMk..kMMMMMMMMMMWo.;KMWWWKo'.:oddl:.     .,lk0XMMMMMMMMK, lWMMMx.'OMMMMMMMMMMNk,..',cdk0KXNXO;         lWMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMMMNo.'xNMMMWXkol'            ,o0MMMMMMMMK, lWMMMx.'OMMMMMMMMW0:.,kX0dc;,',,'..         .kWMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; cNMMMk..kMMMMMMMMMMMMWO;.,dKWWMMMWo          .c0WMMMWMMMMMK, lWMMMx.'0MMMMMMMMXc .cOXWMMWNK0x.          .xWMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMX; ;kOOOl..kMMMMMMMMMMMMMWNkc'.;cdxOO:        'l0WMMMMMWMMMMMK, ;OOOOl.'OMMMMMMMMWXkl,'';codkOOd.        'oKWWMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMNd;;::::;;c0MMMMMMMMMMMMMMMMWXko:,''.....',coONMMMMMMMMMMMMMMXo;;::::;;lKMMMMMMMMMMMMWKOdl:;,,,'...',;cdOXMMMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	printf("MMMMMMMMMMMMMMMMMMMMMMMWWWMMWMMMMMMMMMMMMMMMMMMMMMMMMWNXKKKKXNWMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXXXXXNWMMMMMMMMMMMMMMMMMMMMMMMMM\n");
	Sleep(500);
	int choose,choice;
	printf("=========================================\n");
	printf("|TarucSejahtera Contact Tracking System |\n");
	printf("=========================================\n");
	printf("1.Visitor Information Module\n");
	printf("2.Venue Information Module\n");
	printf("3.Administrative Staff Module\n");
	printf("4.Visits and Exits Module\n");
	printf("5.Main Menu\n");
	printf("6.Exit\n");
	printf("=========================================\n");
	printf("Enter your choice >>> ");
	scanf("%d", &choose);
	printf("\n");

	do {
		switch (choose) {
		case 1:
			mainMenuVisitor();
			break;

		case 2:
			mainMenuVenue();
			break;

		case 3:
			mainMenuStaff();
			break;

		case 4:
			do {
				menuVE();
				scanf("%d", &choice);

				switch (choice) {
				case 1:
					menuVisit();
					break;
				case 2:
					menuExit();
					break;

				case 3:
					main();
				default:
					printf("Wrong Choice. Enter again\n");
					break;
				}
			} while (choice != 3);
			break;

		case 5:
			main();
			break;

		case 6:
			printf("---------------------------------------------------------------------------------------------\n");
			printf("|System exited, thank you for using TarucSejahtera Contact Tracking System. Have a nice day |\n");
			printf("---------------------------------------------------------------------------------------------\n"); 
			break;

		default:
			printf("=========================================\n");
			printf("|TarucSejahtera Contact Tracking System |\n");
			printf("=========================================\n");
			printf("1.Visitor Information Module\n");
			printf("2.Venue Information Module\n");
			printf("3.Administrative Staff Module\n");
			printf("4.Visits and Exits Module\n");
			printf("5.Main Menu\n");
			printf("6.Exit\n");
			printf("=========================================\n");
			printf("Enter your choice >>> ");
			scanf("%d", &choose);
			printf("\n");
		}
	} while (choose != 6);

	system("pause");
	exit(-1);
}

//Visitor Module Information  -> TEO LI YIN
void mainMenuVisitor()
{
	int choice;

	printf("****************************\n");
	printf("*       Visitor Data        *\n");
	printf("****************************\n");
	printf("1.Visitor Information Module\n");
	printf("2.Main Menu\n");
	printf("3.Exit\n");
	printf("****************************\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);

	do {
		switch (choice) {
		case 1:
			menuVisitor();
			break;

		case 2:
			main();
			break;

		case 3:
			exit(-1);
			break;

		default:
			printf("Invalid Number. Please enter again\n");
			printf("****************************\n");
			printf("*       Visitor Data        *\n");
			printf("****************************\n");
			printf("1.Visitor Information Module\n");
			printf("2.Main Menu\n");
			printf("3.Exit\n");
			printf("****************************\n");
			printf("Enter your choice : ");
			scanf("%d", &choice);
			break;
		}
	} while (choice != 3);
}

void menuVisitor() {
	int choice2;
	printf("**********************\n");
	printf("*   Visitor Record   *\n");
	printf("**********************\n");
	printf("1.Add Visit Record\n");
	printf("2.Display Visit Record\n");
	printf("3.Modify Visit Record\n");
	printf("4.Delete Visit Record\n");
	printf("5.BackUp Visit Record\n");
	printf("6.Search Visit Record\n");
	printf("7.Main Menu\n");
	printf("Enter your choice:");
	scanf("%d", &choice2);

	switch (choice2) {
	case 1:
		addVisitor();
		break;

	case 2:
		displayVisitor();
		break;

	case 3:
		modifyVisitor();
		break;

	case 4:

		deleteVisitor();
		break;

	case 5:
		backupVisitor();
		break;

	case 6:
		searchVisitor();
		break;

	case 7:
		mainMenuVisitor();
		break;

	default:
		printf("Invalid Number. Please Enter Again\n");
	}
}


void addVisitor()
{
	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[13];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor visitor;
	FILE* fptr;
	char choose;

	fptr = fopen("visitors.txt", "a");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	do {
		printf("**************************\n");
		printf("*   Add Visitor Record   *\n");
		printf("**************************\n");
		printf("Enter Current Date(eg:01-01-2021):");
		scanf("%s", &visitor.date);
		rewind(stdin);
		printf("Enter Current Time(eg:6:27pm):");
		scanf("%s", &visitor.time);
		rewind(stdin);
		printf("Enter IC Number(eg:010203-01-1350):");
		scanf("%s", &visitor.icNo);
		rewind(stdin);
		printf("Enter Your Full Name(eg:Tan Wei Min):");
		scanf("%[^\n]", &visitor.fullName);
		rewind(stdin);
		printf("Enter Your Category(eg:Student):");
		scanf("%s", &visitor.category);
		rewind(stdin);
		printf("Enter Your Contact Number(eg:0123456789):");
		scanf("%s", &visitor.contactNum);
		rewind(stdin);
		printf("Enter Your Latest Venue Visit(eg:Library):");
		scanf("%[^\n]", &visitor.latestVenueVisit);
		rewind(stdin);
		printf("Enter Your Temperature(eg:36.4):");
		scanf("%lf", &visitor.temperature);

		fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%.01f\n", visitor.date, visitor.time, visitor.icNo, visitor.fullName, visitor.category, visitor.contactNum, visitor.latestVenueVisit, visitor.temperature);

		printf("Add more visitor details? (Y/N) : ");
		rewind(stdin);
		scanf("%c", &choose);

	} while (choose == 'Y' || choose == 'y');

	fclose(fptr);
	return menuVisitor();

}

void displayVisitor()
{
	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[13];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor visitor;
	FILE* fptr;
	fptr = fopen("visitors.txt", "r");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	int count = 0;

	printf("***********************************************************************************************************************************\n");
	printf("*\t\t\t\t\t\t\tVisitor details\t\t\t\t\t\t\t\t  *\n");
	printf("***********************************************************************************************************************************\n");
	printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
	printf("***********************************************************************************************************************************\n");

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &visitor.date, &visitor.time, &visitor.icNo, &visitor.fullName, &visitor.category, &visitor.contactNum, &visitor.latestVenueVisit, &visitor.temperature) != EOF)
	{
		printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", visitor.date, visitor.time, visitor.icNo, visitor.fullName, visitor.category, visitor.contactNum, visitor.latestVenueVisit, "", visitor.temperature, "");

		count++;
	}
	printf("\n\t\t\t\t\t\t\t<Total %d visitor records listed>\n", count);

	fclose(fptr);
	return menuVisitor();

}

void searchVisitor()
{
	FILE* fptr;
	fptr = fopen("visitors.txt", "r");

	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[13];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor v[100];

	char date[15];
	char time[8];
	char icNo[15];
	char fullName[20];
	char category[15];
	char contactNum[13];
	char latestVenueVisit[20];
	double temperature;

	int i = 0, found = 0, vCount = 0;
	char searchMore;
	int option;


	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &v[vCount].date, &v[vCount].time, &v[vCount].icNo, &v[vCount].fullName, &v[vCount].category, &v[vCount].contactNum, &v[vCount].latestVenueVisit, &v[vCount].temperature) != EOF)
	{
		vCount++;
	}
	fclose(fptr);

	do
	{
		printf("*******\n");
		printf("* Search based on *\n");
		printf("*******\n");
		printf("1.Date\n");
		printf("2.Time\n");
		printf("3.IC Number\n");
		printf("4.Full Name\n");
		printf("5.Category\n");
		printf("6.Contact Number\n");
		printf("7.Latest Venue Visit\n");
		printf("8.Temperature\n");
		printf("Please enter your choice > ");
		scanf("%d", &option);

		switch (option)
		{
		case 1:
		{
			printf("Date: ");
			scanf("%s", &date);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(date, v[i].date) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 2:
		{
			printf("Time: ");
			rewind(stdin);
			scanf("%s", &time);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(time, v[i].time) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 3:
		{
			printf("IC Number: ");
			rewind(stdin);
			scanf("%s", &icNo);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(icNo, v[i].icNo) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 4:
		{
			printf("Full Name: ");
			rewind(stdin);
			scanf("%[^\n]", &fullName);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(fullName, v[i].fullName) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 5:
		{
			printf("Category: ");
			rewind(stdin);
			scanf("%s", &category);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(category, v[i].category) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 6:
		{
			printf("Contact Number: ");
			rewind(stdin);
			scanf("%s", &contactNum);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(contactNum, v[i].contactNum) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 7:
		{
			printf("Latest Venue Visit: ");
			rewind(stdin);
			scanf("%[^\n]", &latestVenueVisit);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(latestVenueVisit, v[i].latestVenueVisit) == 0)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		case 8:
		{
			printf("Temperature: ");
			rewind(stdin);
			scanf("%lf", &temperature);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (temperature == v[i].temperature)
				{
					printf("***********************************************************************************************************************************\n");
					printf("\t\t\t\t\t\t\tVisitor details\n");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				}
			}
			break;
		}

		default:
		{
			printf("Invalid Number. Please enter again \n");
			printf("*******************\n");
			printf("* Search based on *\n");
			printf("*******************\n");
			printf("1.Date\n");
			printf("2.Time\n");
			printf("3.IC Number\n");
			printf("4.Full Name\n");
			printf("5.Category\n");
			printf("6.Contact Number\n");
			printf("7.Latest Venue Visit\n");
			printf("8.Temperature\n");
			printf("Please enter your choice > ");
			scanf("%d", &option);
		}
		}
		printf("\nAny more to search (Y/N) ? :");
		rewind(stdin);
		scanf("%c", &searchMore);

	} while (searchMore == 'Y' || searchMore == 'y');
	fclose(fptr);
	return menuVisitor();
}

void modifyVisitor()
{
	FILE* fptr;
	fptr = fopen("visitors.txt", "r");

	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[15];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor v[100];

	char fullName[20];
	int i = 0, found = 0;
	int choiceToModify, modifyCount = 0, vCount = 0;
	char modifyMore, sureToModify;


	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &v[vCount].date, &v[vCount].time, &v[vCount].icNo, &v[vCount].fullName, &v[vCount].category, &v[vCount].contactNum, &v[vCount].latestVenueVisit, &v[vCount].temperature) != EOF)
	{
		vCount++;
	}
	fclose(fptr);

	do
	{
		printf("\n***********************\n");
		printf("Enter full name modify : ");
		rewind(stdin);
		scanf("%[^\n]", &fullName);

		for (i = 0; i < vCount; i++)
		{
			if (strcmp(fullName, v[i].fullName) == 0)
			{
				found = 1;
				printf("\n\t\t\t\t\t\t Visitor details that want to be modified\n");
				printf("***********************************************************************************************************************************\n");
				printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-5s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
				printf("***********************************************************************************************************************************\n");
				printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
				printf("\nWhich record you want to modify ?\n");
				printf("1.Date\n");
				printf("2.Time\n");
				printf("3.IC Number\n");
				printf("4.Full Name\n");
				printf("5.Category\n");
				printf("6.Contact Number\n");
				printf("7.Latest Venue Visit\n");
				printf("8.Temperature\n");
				printf("Enter your choice : ");
				scanf("%d", &choiceToModify);

				switch (choiceToModify)
				{
				case 1:
				{
					printf("Date: ");
					scanf("%s", &v[i].date);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 2:
				{
					printf("Time: ");
					scanf("%s", &v[i].time);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 3:
				{
					printf("IC Number: ");
					scanf("%s", &v[i].icNo);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 4:
				{
					printf("Full Name: ");
					rewind(stdin);
					scanf("%[^\n]", &v[i].fullName);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 5:
				{
					printf("Category: ");
					scanf("%s", &v[i].category);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-5s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 6:
				{
					printf("Contact Number: ");
					scanf("%s", &v[i].contactNum);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 7:
				{
					printf("Latest Venue Visit: ");
					rewind(stdin);
					scanf("%[^\n]", &v[i].latestVenueVisit);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				case 8:
				{
					printf("Temperature: ");
					scanf("%lf", &v[i].temperature);
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-20s\t%-10s\n", "Date", "Time", "IC Number", "Full Name", "Category", "Contact Number", "Latest Venue Visit", "Temperature");
					printf("***********************************************************************************************************************************\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s%.01f%-5s\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, "", v[i].temperature, "");
					break;
				}
				default:
				{
					printf("Incorrect Number. Please enter again \n");
					printf("Which record you want to modify ?\n");
					printf("1.Date\n");
					printf("2.Time\n");
					printf("3.IC Number\n");
					printf("4.Full Name\n");
					printf("5.Category\n");
					printf("6.Contact Number\n");
					printf("7.Latest Venue Visit\n");
					printf("8.Temperarure\n");
					printf("Enter your choice : ");
					scanf("%d", &choiceToModify);
					break;
				}
				}
				modifyCount++;

			}
		}
		printf("Any more to modify (Y/N) ? :");
		rewind(stdin);
		scanf("%c", &modifyMore);

	} while (modifyMore == 'Y' || modifyMore == 'y');

	printf("Sure to modify (Y/N) ? : ");
	rewind(stdin);
	scanf("%c", &sureToModify);

	if (sureToModify == 'Y' || sureToModify == 'y')
	{
		fptr = fopen("visitors.txt", "w");
		for (i = 0; i < vCount; i++)
		{
			fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%.01f\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, v[i].temperature);
		}
		printf("     <%d records are sucessful modified>    \n", modifyCount);
		fclose(fptr);

		return menuVisitor();
	}
	if (sureToModify == 'N' || sureToModify == 'n')
	{
		printf("Modify have been cancel.....\n");
		fclose(fptr);
		return menuVisitor();
	}
}

void backupVisitor()
{
	FILE* fptr;
	FILE* fptr2;

	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[15];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor v[100];

	int vCount = 0;
	fptr = fopen("visitors.txt", "r");
	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &v[vCount].date, &v[vCount].time, &v[vCount].icNo, &v[vCount].fullName, &v[vCount].category, &v[vCount].contactNum, &v[vCount].latestVenueVisit, &v[vCount].temperature) != EOF)
	{
		vCount++;
	}

	fptr2 = fopen("visitorsBackup.txt", "w");
	if (!fptr2)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	char confirm;

	printf("Are you sure want to back up records (Y/N) ? : ");
	rewind(stdin);
	scanf("%c", &confirm);

	while (confirm == 'Y' || confirm == 'y')
	{
		for (int i = 0; i < vCount; i++)
		{
			fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &v[vCount].date, &v[vCount].time, &v[vCount].icNo, &v[vCount].fullName, &v[vCount].category, &v[vCount].contactNum, &v[vCount].latestVenueVisit, &v[vCount].temperature);
			fprintf(fptr2, "%s|%s|%s|%s|%s|%s|%s|%.01f\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, v[i].temperature);
		}

		printf("Back up sucessful.....\n\n");
		fclose(fptr);
		fclose(fptr2);
		return menuVisitor();
	}

	while (confirm == 'N' || confirm == 'n')
	{
		printf("Back up cancel.....\n");
		return menuVisitor();
	}
}

void deleteVisitor()
{
	FILE* fptr;
	fptr = fopen("visitors.txt", "r");

	struct Visitor
	{
		char date[15];
		char time[8];
		char icNo[15];
		char fullName[20];
		char category[15];
		char contactNum[15];
		char latestVenueVisit[20];
		double temperature;
	};

	struct Visitor v[100];

	int vCount = 0, found = 0, i = 0;
	char fullName[20], delete;

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%lf\n", &v[vCount].date, &v[vCount].time, &v[vCount].icNo, &v[vCount].fullName, &v[vCount].category, &v[vCount].contactNum, &v[vCount].latestVenueVisit, &v[vCount].temperature) != EOF)
	{
		vCount++;
	}
	fclose(fptr);

	do
	{
		printf("Enter full name to delete record: ");
		rewind(stdin);
		scanf("%[^\n]", &fullName);

		for (i = 0; i < vCount; i++)
		{
			if (strcmp(v[i].fullName, fullName) == 0)
			{
				found = i;
				for (i = found; i < vCount - 1; i++)
				{
					v[i] = v[i + 1];
				}
			}
		}
		vCount--;

		printf("Any more to delete? (Y=yes) : ");
		rewind(stdin);
		scanf("%c", &delete);

	} while (delete == 'Y' || delete == 'y');

	fptr = fopen("visitors.txt", "w");

	for (int i = 0; i < vCount; i++)
	{
		fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%.01f\n", v[i].date, v[i].time, v[i].icNo, v[i].fullName, v[i].category, v[i].contactNum, v[i].latestVenueVisit, v[i].temperature);
	}

	fclose(fptr);
	printf("Delete record sucessful...\n");
	return menuVisitor();
}

//Venue Information Module -> PAULINE TNIO WEI EN
void mainMenuVenue()
{
	int opt;
	printf("================================\n");
	printf("\tVenue Information \n");
	printf("================================\n");
	printf("1.Venue Information Module\n");
	printf("2.Main Menu\n");
	printf("3.Exit\n");
	printf("================================\n");
	printf("Enter your choice:");
	scanf("%d", &opt);
	printf("\n");

	do {
		switch (opt) {
		case 1:
			menuVenue();
			break;
		case 2:
			main();
			break;

		case 3:
			printf("=================================================================\n");
			printf("System exited, thank you for using this system. Have a nice day.\n");
			printf("=================================================================\n");
			break;

		default:
			printf("Wrong Choice. Please Enter again (1-3)\n"); //If users enter number except 1-3
			printf("================================\n");
			printf("\tVenue Information\n");
			printf("================================\n");
			printf("1.Venue Information Module\n");
			printf("2.Main Menu\n");
			printf("3.Exit\n");
			printf("================================\n");
			printf("Enter your choice:");
			scanf("%d", &opt);
			printf("\n");
		}
	} while (opt != 3);

	system("pause");
	exit(-1);
}

void menuVenue()
{
	int menuChoice;
	printf("=======================\n");
	printf("Venue Information Menu\n");
	printf("=======================\n");
	printf("1.Add record\n");
	printf("2.Search record\n");
	printf("3.Modify record\n");
	printf("4.Display record\n");
	printf("5.Delete record\n");
	printf("6.Back up record\n");
	printf("7.Main Menu\n");
	printf("Enter choice : ");
	scanf("%d", &menuChoice);

	switch (menuChoice) {
	case 1:
		addVenue();
		break;

	case 2:
		searchVenue();
		break;

	case 3:
		modifyVenue();
		break;

	case 4:
		displayVenue();
		break;

	case 5:
		deleteVenue();
		break;

	case 6:
		backUpVenue();
		break;

	case 7:
		mainMenuVenue();
		break;

	default:
		printf("Invalid choice. Please choose again (1-7)\n");
	}
}

void addVenue()
{
	FILE* fptr;
	fptr = fopen("venue.dat", "ab");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	struct Venue venueIm;
	char choose;

	do {
		printf("Enter Venue Information\n");
		printf("Venue ID (e.g:Lab301) : ");              //Enter venue ID
		rewind(stdin);
		scanf("%s", venueIm.venueID);
		printf("Category (e.g:Laboratory) : ");          //Enter laboratry
		rewind(stdin);
		scanf("%[^\n]", venueIm.category);
		printf("Description (e.g:Computer Lab) : ");     //Enter description 
		rewind(stdin);
		scanf("%[^\n]", venueIm.description);
		printf("Maximum No.of Visitors (e.g:20) : ");    //Enter maximum no. of visitors
		rewind(stdin);
		scanf("%d", &venueIm.maxVisitors);
		printf("Current visitors (e.g:15) : ");          //Enter current no. of visitors
		rewind(stdin);
		scanf("%d", &venueIm.currVisitors);
		if (venueIm.currVisitors > venueIm.maxVisitors)    //do validation if the current no.of visitors more than maximum no. of visitors
		{
			printf("Wrong input. Maximum number of visitors is %d\n", venueIm.maxVisitors);
			printf("Current visitors (e.g:15) : ");
			rewind(stdin);
			scanf("%d", &venueIm.currVisitors);
		}
		printf("Last sanitization date (e.g:20/3/2021) : ");    //Enter last sanitization date
		rewind(stdin);
		scanf("%d/%d/%d", &venueIm.lastSanDay, &venueIm.lastSanMth, &venueIm.lastSanYrs);
		printf("Next sanitizaition date (e.g:20/3/2021) : ");   //Enter next sanitization date 
		rewind(stdin);
		scanf("%d/%d/%d", &venueIm.nextSanDay, &venueIm.nextSanMth, &venueIm.nextSanYrs);    //do validation if the next sanitization date is before last sanitization date
		if (venueIm.nextSanDay < venueIm.lastSanDay || venueIm.nextSanMth < venueIm.lastSanMth || venueIm.nextSanYrs < venueIm.lastSanYrs)
		{
			printf("Wrong input. Last sanitization date is %d/%d/%d\n", venueIm.lastSanDay, venueIm.lastSanMth, venueIm.lastSanYrs);
			printf("Next sanitizaition date (e.g:20/3/2021) : ");
			rewind(stdin);
			scanf("%d/%d/%d", &venueIm.nextSanDay, &venueIm.nextSanMth, &venueIm.nextSanYrs);
		}
		printf("Name of worker do the sanitization (e.g:Ali) : ");      //Enter name of worker do the sanitization
		rewind(stdin);
		scanf("%[^\n]", venueIm.sanName);
		printf("Staff In Charge (e.g:Ms.Tan) : ");                      //Enter staff in charge
		rewind(stdin);
		scanf("%[^\n]", venueIm.staffInCharge);

		fwrite(&venueIm, sizeof(struct Venue), 1, fptr);               //Write into venue.date file

		printf("Add next venue information? (Y/N) : ");
		rewind(stdin);
		scanf("%c", &choose);
	} while (toupper(choose) != 'N');

	fclose(fptr);
}

void displayVenue()
{
	struct Venue venueIm;
	FILE* fptr;
	fptr = fopen("venue.dat", "rb");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	int count = 0;

	printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
	printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	while (fread(&venueIm, sizeof(struct Venue), 1, fptr) != 0) {
		printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", venueIm.venueID, venueIm.category, venueIm.description, "", venueIm.maxVisitors, "", "", venueIm.currVisitors, "", "", venueIm.lastSanDay, "/", venueIm.lastSanMth, "/", venueIm.lastSanYrs, "", "", venueIm.nextSanDay, "/", venueIm.nextSanMth, "/", venueIm.nextSanYrs, "", venueIm.sanName, "", venueIm.staffInCharge);
		count++;
	}
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t\t\t\t<%d records listed>\n", count);
	printf("\n");

	fclose(fptr);
}

void searchVenue()
{
	struct Venue v[MAX_SIZE];
	char venueID[10], category[15], description[20], sanName[15], staffInCharge[20];
	int choice2;
	char moreSearch;
	int found = 0;
	int i = 0;
	int vCount = 0;

	FILE* fptr;
	fptr = fopen("venue.dat", "rb");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fread(&v[vCount], sizeof(struct Venue), 1, fptr))      //read the information from the file
	{
		vCount++;
	}

	fclose(fptr);

	do {
		printf("\n================================\n");
		printf("\t   Search  \n");
		printf("================================\n");
		printf("1.Venue ID\n");
		printf("2.Category\n");
		printf("3.Description\n");
		printf("4.Name of worker do sanitization\n");
		printf("5.Name of staff in charge\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice2);

		switch (choice2)
		{
		case 1:
		{
			printf("Enter venue ID that you want to search : ");          //Search venue ID
			rewind(stdin);
			scanf("%s", &venueID);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(v[i].venueID, venueID) == 0)
				{
					printf("\n");
					printf("Record is found as follow : \n");
					printf("============================\n");
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}


			break;
		}

		case 2:
		{
			printf("Category : ");          //Search category
			rewind(stdin);
			scanf("%[^\n]", category);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(category, v[i].category) == 0)
				{
					printf("\n");
					printf("Record is found as follow : \n");
					printf("============================\n");
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}

			break;
		}
		case 3:
		{
			printf("Enter description that you want to search : ");          //search description
			rewind(stdin);
			scanf("%[^\n]", description);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(description, v[i].description) == 0)
				{
					printf("\n");
					printf("Record is found as follow : \n");
					printf("============================\n");
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}
			break;
		}

		case 4:
			printf("Enter name of worker do sanitization that you want to search : ");          //search name of worker do sanitization
			rewind(stdin);
			scanf("%[^\n]", sanName);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(sanName, v[i].sanName) == 0)
				{
					printf("\n");
					printf("Record is found as follow : \n");
					printf("============================\n");
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}
			break;

		case 5:
			printf("Enter name of staff in charge that you want to search : ");          //search staff in charge
			rewind(stdin);
			scanf("%[^\n]", staffInCharge);

			for (i = 0; i < vCount && found == 0; i++)
			{
				if (strcmp(v[i].staffInCharge, staffInCharge) == 0)
				{
					printf("\n");
					printf("Record is found as follow : \n");
					printf("============================\n");
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}

			break;

		default:
		{
			printf("Invalid number.Please choose again\n");      //validation for invalid number entered
			printf("\n================================\n");
			printf("\t   Search  \n");
			printf("================================\n");
			printf("1.Venue ID\n");
			printf("2.Category\n");
			printf("3.Description\n");
			printf("4.Name of worker do sanitization\n");
			printf("5.Name of staff in charge\n");
			printf("Please enter your choice: ");
			scanf("%d", &choice2);
		}
		}
		printf("\nAny more to search (Y/N) ? : ");
		rewind(stdin);
		scanf("%c", &moreSearch);

	} while (toupper(moreSearch == 'Y'));

	fclose(fptr);
}

void modifyVenue()
{
	struct Venue v[MAX_SIZE];

	char venueID[10], category[15], description[20], sanName[20], staffInCharge[20];
	int i = 0, found, modifyCount = 0;
	int lastSanDay, lastSanMth, lastSanYrs;
	int nextSanDay, nextSanMth, nextSanYrs;
	int maxVisitors, currVisitors;
	char mModify;
	char modify;
	int vCount = 0;
	int mChoice = 0;
	FILE* fptr;
	fptr = fopen("venue.dat", "rb");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fread(&v[vCount], sizeof(struct Venue), 1, fptr))    //read the information from the file
	{
		vCount++;
	}

	fclose(fptr);

	do {
		printf("Enter venue ID to be modified : ");
		scanf("%s", venueID);

		for (i = 0; i < vCount; i++)
		{
			if (strcmp(venueID, v[i].venueID) == 0)
			{
				found = 1;
				printf("\t\t\t\t\t\t\t   Record that you want to modify\n");
				printf("\t\t\t\t\t\t\t   ==============================\n");
				printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
				printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
				printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
				printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
				printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("\nWhich record that you want to modify ?\n");
				printf("1.Venue ID\n");
				printf("2.Category\n");
				printf("3.Description\n");
				printf("4.Maximum no.of visitors\n");
				printf("5.Current no.of visitors\n");
				printf("6.Last sanitization date\n");
				printf("7.Next sanitization date\n");
				printf("8.Name of worker do sanitization\n");
				printf("9.Name of staff in charge\n");
				printf("Your choice : ");
				rewind(stdin);
				scanf("%d", &mChoice);

				switch (mChoice)
				{
				case 1:
				{
					printf("Venue ID: ");     //Modify venue ID
					scanf("%s", venueID);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						strcpy(v[i].venueID, venueID);
					break;
				}
				case 2:
				{
					printf("Category : ");     //Modify category
					rewind(stdin);
					scanf("%[^\n]", category);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						strcpy(v[i].category, category);
					break;
				}
				case 3:
				{
					printf("Description : ");     //Modify description
					rewind(stdin);
					scanf("%[^\n]", description);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						strcpy(v[i].description, description);
					break;
				}
				case 4:
				{
					printf("Maximum No.of Visitors : ");     //Modify max no. of visitors
					scanf("%d", &maxVisitors);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						v[i].maxVisitors = maxVisitors;
					break;
				}
				case 5:
				{
					printf("Current No.of Visitors : ");     //Modify current no. of vistors
					scanf("%d", &currVisitors);

					if (currVisitors > v[i].maxVisitors)
					{
						printf("Wrong input. Maximum number of visitors is %d\n", v[i].maxVisitors);
						printf("Current visitors (e.g:15) : ");
						rewind(stdin);
						scanf("%d", &currVisitors);
					}
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						v[i].currVisitors = currVisitors;
					break;
				}
				case 6:
				{
					printf("Last sanitization date : ");     //Modify last sanitization date
					scanf("%d/%d/%d", &lastSanDay, &lastSanMth, &lastSanYrs);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", lastSanDay, "/", lastSanMth, "/", lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
					{
						v[i].lastSanDay = lastSanDay;
						v[i].lastSanMth = lastSanMth;
						v[i].lastSanYrs = lastSanYrs;
					}

					break;
				}
				case 7:
				{
					printf("Next sanitization date : ");     //Modify next sanitization date
					scanf("%d/%d/%d", &nextSanDay, &nextSanMth, &nextSanYrs);

					if (nextSanDay < v[i].lastSanDay || nextSanMth < v[i].lastSanMth || nextSanYrs < v[i].lastSanYrs)
					{
						printf("Wrong input. Last sanitization date is %d/%d/%d\n", v[i].lastSanDay, v[i].lastSanMth, v[i].lastSanYrs);
						printf("Next sanitizaition date (e.g:20/3/2021) : ");
						rewind(stdin);
						scanf("%d/%d/%d", &nextSanDay, &nextSanMth, &nextSanYrs);
					}
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", nextSanDay, "/", nextSanMth, "/", nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
					{
						v[i].nextSanDay = nextSanDay;
						v[i].nextSanMth = nextSanMth;
						v[i].nextSanYrs = nextSanYrs;
					}
					break;
				}

				case 8:
				{
					printf("Name of worker do the sanitization : ");     //Modify name of worker do the sanitization
					rewind(stdin);
					scanf("%[^\n]", sanName);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", sanName, "", v[i].staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						strcpy(v[i].sanName, sanName);
					break;
				}

				case 9:
				{
					printf("Name of staff in charge : ");     //Modify name of staff in charge
					rewind(stdin);
					scanf("%[^\n]", staffInCharge);
					printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
					printf("%8s%18s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%10s%18s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", staffInCharge);
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\nSure to modify (Y/N) ? : ");
					rewind(stdin);
					scanf("%c", &modify);

					if (toupper(modify) == 'Y')
						strcpy(v[i].staffInCharge, staffInCharge);

					break;
				}

				default:
				{
					printf("Invalid input. Please enter again \n");    //Validation of the invalid number entered
					printf("\nWhich record that you want to modify ?\n");
					printf("1.Venue ID\n");
					printf("2.Category\n");
					printf("3.Description\n");
					printf("4.Maximum no.of visitors\n");
					printf("5.Current no.of visitors\n");
					printf("6.Last sanitization date\n");
					printf("7.Next sanitization date\n");
					printf("8.Name of worker do sanitization\n");
					printf("9.Name of staff in charge\n");
					printf("Your choice : ");
					rewind(stdin);
					scanf("%d", &mChoice);
				}
				}
				modifyCount++;
			}
		}
		printf("\nAny more to modify (Y/N) ? : ");
		rewind(stdin);
		scanf("%c", &mModify);

	} while (toupper(mModify) == 'Y');

	fptr = fopen("venue.dat", "wb");

	for (i = 0; i < vCount; i++) {
		fwrite(&v[i], sizeof(struct Venue), 1, fptr);
	}
	printf("     <%d record(s) are sucessfully modified>    \n", modifyCount);

	fclose(fptr);
}

void deleteVenue()
{
	struct Venue v[MAX_SIZE];

	FILE* fptr;
	fptr = fopen("venue.dat", "rb");

	if (!fptr)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	int i, vCount = 0, found = 0;
	char venueID[10];
	char dSure, dMore;

	while (fread(&v[vCount], sizeof(struct Venue), 1, fptr))
	{
		vCount++;
	}

	fclose(fptr);

	do
	{
		printf("Enter venue ID that you want to delete : ");
		scanf("%s", venueID);

		for (i = 0; i < vCount; i++)
		{
			if (strcmp(v[i].venueID, venueID) == 0)
			{
				found = i;

				printf("\t\t\t\t\t\t\t\t[Venue Information]\n");
				printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%10s%14s%25s%15s%15s%20s%20s%20s%10s\n", "Venue", "Category", "Description", "Max no.of", "Current no.of", "Last sanitization", "Next sanitization", "Name of worker", "  Staff");
				printf("%8s%14s%25s%16s%13s%5s%10s%5s%5s%10s%5s%8s%14s%3s%10s%3s\n", "ID", "", "", "visitors", "visitors", "", "date", "", "", "date", "", "", "do sanitization", "", "In Charge", "");
				printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%10s%14s%25s%7s%3d%5s%6s%3d%6s%5s%3d%s%d%s%3d%5s%5s%3d%s%d%s%3d%5s%14s%8s%10s\n", v[i].venueID, v[i].category, v[i].description, "", v[i].maxVisitors, "", "", v[i].currVisitors, "", "", v[i].lastSanDay, "/", v[i].lastSanMth, "/", v[i].lastSanYrs, "", "", v[i].nextSanDay, "/", v[i].nextSanMth, "/", v[i].nextSanYrs, "", v[i].sanName, "", v[i].staffInCharge);
				printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");

				printf("Are you sure to delete? (Y=yes) : ");
				rewind(stdin);
				scanf("%c", &dSure);

				if (toupper(dSure) == 'Y')
				{
					for (i = found; i < vCount - 1; i++) {
						v[i] = v[i + 1];
					}
					vCount--;
					printf("Record deleted successfully...\n");

				}

				else if (toupper(dSure) == 'N')
				{
					for (i = found; i < vCount; i++) {
						v[i] = v[i];
					}
					printf("Delete process cancelled\n");
				}

			}
		}

		if (found == 0)
		{
			printf("No record was found with the venue ID enter : %s\n", venueID);
			printf("Enter venue ID that you want to delete : ");
			scanf("%s", venueID);

			for (i = 0; i < vCount; i++)
			{
				if (strcmp(v[i].venueID, venueID) == 0)
				{
					found = i;

					printf("Are you sure to delete? (Y=yes) : ");
					rewind(stdin);
					scanf("%c", &dSure);

					if (toupper(dSure) == 'Y')
					{
						for (i = found; i < vCount - 1; i++) {
							v[i] = v[i + 1];
						}
						vCount--;
						printf("Record deleted successfully...\n");
					}

					else if (toupper(dSure) == 'N')
					{
						for (i = found; i < vCount; i++) {
							v[i] = v[i];
						}
						printf("Delete process cancelled\n");
					}

				}
			}
		}

		printf("Any more to delete? (Y=yes) : ");
		rewind(stdin);
		scanf("%c", &dMore);
	} while (toupper(dMore) == 'Y');

	fptr = fopen("venue.dat", "wb");

	for (int i = 0; i < vCount; i++) {
		fwrite(&v[i], sizeof(struct Venue), 1, fptr);
	}

	fclose(fptr);
}

void backUpVenue()
{
	FILE* fptr;
	FILE* fptr1;

	fptr = fopen("venue.dat", "rb");
	fptr1 = fopen("venueBackUp.dat", "wb");

	struct Venue venueIm;
	char sureBackUp;

	displayVenue();
	printf("\n");
	printf("Are you sure to back up all the records ? (Y=Yes) : ");
	rewind(stdin);
	scanf("%c", &sureBackUp);

	if (toupper(sureBackUp) == 'Y')
	{
		while (fread(&venueIm, sizeof(struct Venue), 1, fptr) != 0)
		{
			fwrite(&venueIm, sizeof(struct Venue), 1, fptr1);
		}
		printf("Successfully back up to the 'venueBackUp' file...\n");
	}

	else
		printf("Back up process cancelled...\n");

	fclose(fptr);
	fclose(fptr1);
}

//Administrative Staff Module -> LEE HAO JUN
void mainMenuStaff()
{
	int choice;

	printf("======================\n");
	printf("|     Staff Data     |\n");
	printf("======================\n");
	printf("1.Administrative Staff\n");
	printf("2.Exit\n");
	printf("======================\n");
	printf("Enter your choice > ");
	scanf("%d", &choice);


	switch (choice) {
	case 1:
		menuStaff();
		break;

	case 2:
		main();
		break;

	default:
		printf("Invalid Number. Please enter again\n");
		break;
	}
}

void menuStaff()
{
	int choice;

	printf("======================\n");
	printf("|Administrative Staff|\n");
	printf("======================\n");
	printf("1.Add Staff Record\n");
	printf("2.Display Staff Record\n");
	printf("3.Search Staff Record\n");
	printf("4.Modify Staff Record\n");
	printf("5.Back up Staff Record\n");
	printf("6.Delete Staff Record\n");
	printf("7.Main Menu\n");
	printf("Enter your choice > ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		addStaff();
		break;

	case 2:
		displayStaff();
		break;

	case 3:
		searchStaff();
		break;

	case 4:
		modifyStaff();
		break;

	case 5:
		backupStaff();
		break;

	case 6:
		deleteStaff();
		break;

	case 7:
		mainMenuStaff();
		break;

	default: 
		printf("Invalid Number. Please enter again\n");
		printf("======================\n");
		printf("|Administrative Staff|\n");
		printf("======================\n");
		printf("1.Add Staff Record\n");
		printf("2.Display Staff Record\n");
		printf("3.Search Staff Record\n");
		printf("4.Modify Staff Record\n");
		printf("5.Back up Staff Record\n");
		printf("6.Delete Staff Record\n");
		printf("7.Main Menu\n");
		printf("Enter your choice > ");
		scanf("%d", &choice);
		break;
	}
}


void addStaff()
{
	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff a;
	FILE* fptr;
	char choice2;

	fptr = fopen("Staff.txt", "a");

	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	do {
		printf("Enter Staff ID: ");
		scanf("%s", &a.staffID);
		printf("Enter Staff Name: ");
		rewind(stdin);
		scanf("%[^\n]", &a.name);
		printf("Enter Staff Password: ");
		rewind(stdin);
		scanf("%s", &a.password);
		printf("Enter Staff Position: ");
		rewind(stdin);
		scanf("%s", &a.position);
		printf("Enter Staff Faculty: ");
		rewind(stdin);
		scanf("%s", &a.faculty);
		printf("Enter venue ID: ");
		rewind(stdin);
		scanf("%s", &a.venueID);
		printf("Enter date: ");
		rewind(stdin);
		scanf("%s", &a.date);
		printf("Enter Staff Contact Number: ");
		rewind(stdin);
		scanf("%s", &a.contactNbr);

		fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%s\n", a.staffID, a.name, a.password, a.position, a.faculty, a.venueID, a.date, a.contactNbr);

		printf("Add next staff details? (Y/N) : ");
		rewind(stdin);
		scanf("%ch", &choice2);

	} while (choice2 == 'Y' || choice2 == 'y');

	fclose(fptr);
	return menuStaff();

}

void displayStaff()
{
	int stfCount = 0;

	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff a;
	FILE* fptr;
	fptr = fopen("Staff.txt", "r");

	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
	time_t t;
	time(&t);
	printf("                                    Staff Records as at %s", ctime(&t));
	printf("==============================================================================================================================\n");
	printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
	printf("==============================================================================================================================\n");

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &a.staffID, &a.name, &a.password, &a.position, &a.faculty, &a.venueID, &a.date, &a.contactNbr) != EOF)
	{
		printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", a.staffID, a.name, a.password, a.position, a.faculty, a.venueID, a.date, a.contactNbr);

		stfCount++;
	}
	printf("\n\t\t\t\t\t<Total %d staff records listed>\n", stfCount);
	printf("==============================================================================================================================\n");

	fclose(fptr);
	return menuStaff();

}

void searchStaff()
{
	FILE* fptr;
	char stfID[10];
	char name[20];
	char position[10];
	char faculty[5];
	char password[10];
	char venueID[10];
	char date[10];
	char contactNbr[15];

	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff s[100];

	int i = 0, foundStaff = 0, scount = 0;
	char researchStf;
	int searchType;

	fptr = fopen("Staff.txt", "r");

	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &s[scount].staffID, &s[scount].name, &s[scount].password, &s[scount].position, &s[scount].faculty, &s[scount].venueID, &s[scount].date, &s[scount].contactNbr) != EOF)
	{
		scount++;
	}
	fclose(fptr);

	do
	{
		printf("===================\n");
		printf("| Search based on | \n");
		printf("===================\n");
		printf("1.Staff ID\n");
		printf("2.Name\n");
		printf("3.Password\n");
		printf("4.Position\n");
		printf("5.Faculty\n");
		printf("6.Venue ID\n");
		printf("7.Date\n");
		printf("8.Contact Number\n");
		printf("Please enter your choice > ");
		scanf("%d", &searchType);

		switch (searchType)
		{
		case 1:
		{
			printf("Staff ID: ");
			scanf("%s", &stfID);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");

			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(stfID, s[i].staffID) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 2:
		{
			printf("Name: ");
			rewind(stdin);
			scanf("%[^\n]", &name);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(name, s[i].name) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 3:
		{
			printf("Password: ");
			rewind(stdin);
			scanf("%s", &password);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(password, s[i].password) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 4:
		{
			printf("Position: ");
			rewind(stdin);
			scanf("%s", &position);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(position, s[i].position) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 5:
		{
			printf("Faculty: ");
			rewind(stdin);
			scanf("%s", &faculty);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(faculty, s[i].faculty) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 6:
		{
			printf("Venue ID: ");
			rewind(stdin);
			scanf("%s", &venueID);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(venueID, s[i].venueID) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 7:
		{
			printf("Date: ");
			rewind(stdin);
			scanf("%s", &date);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(date, s[i].date) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		case 8:
		{
			printf("Contact Number: ");
			rewind(stdin);
			scanf("%s", &contactNbr);

			printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
			printf("==============================================================================================================================\n");
			for (i = 0; i < scount && foundStaff == 0; i++)
			{
				if (strcmp(contactNbr, s[i].contactNbr) == 0)
				{
					printf("%-10s\t", s[i].staffID);
					printf("%-10s\t", s[i].name);
					printf("%-10s\t", s[i].password);
					printf("%-15s", s[i].position);
					printf("%-15s", s[i].faculty);
					printf("%-15s\t", s[i].venueID);
					printf("%-10s\t", s[i].date);
					printf("%-15s\n", s[i].contactNbr);
				}
			}
			break;
		}

		default:
		{
			printf("Invalid Number. Please enter again \n");
			printf("===================\n");
			printf("| Search based on | \n");
			printf("===================\n");
			printf("1.Staff ID\n");
			printf("2.Name\n");
			printf("3.Position\n");
			printf("4.Faculty\n");
			printf("5.Password\n");
			printf("6.Venue ID\n");
			printf("7.Date\n");
			printf("8.Contact Number\n");
			printf("Please enter your choice > ");
			scanf("%d", searchType);
			break;
		}
		}
		printf("==============================================================================================================================");
		printf("\nAny more to search (Y/N) ? -> ");
		rewind(stdin);
		scanf("%c", &researchStf);

	} while (researchStf == 'Y' || researchStf == 'y');
	fclose(fptr);
	return menuStaff();
}

void modifyStaff()
{
	FILE* fptr;
	char stfID[10];
	char stfPass[10];
	char sureModify, moreStfRecord;
	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff s[100];

	int i = 0, foundStaff = 0;
	int choiceModify, modifyStfcount = 0, scount = 0;

	fptr = fopen("Staff.txt", "r");

	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &s[scount].staffID, &s[scount].name, &s[scount].password, &s[scount].position, &s[scount].faculty, &s[scount].venueID, &s[scount].date, &s[scount].contactNbr) != EOF)
	{
		scount++;
	}
	fclose(fptr);

	do
	{
		printf("\n==================================\n");
		printf("Enter Staff ID to be modified > ");
		scanf("%s", &stfID);

		for (i = 0; i < scount; i++)
		{
			if (strcmp(stfID, s[i].staffID) == 0)
			{
				foundStaff = 1;
				printf("\n Staff details that want to be modified\n");
				printf("\n------------------------------------------------[Staff details]---------------------------------------------------------------\n");
				printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
				printf("==============================================================================================================================\n");
				printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
				printf("\nWhich record you want to modify ?\n");
				printf("1.Staff ID\n");
				printf("2.Name\n");
				printf("3.Password\n");
				printf("4.Position\n");
				printf("5.Faculty\n");
				printf("6.Venue ID\n");
				printf("7.Date\n");
				printf("8.Contact Number\n");
				printf("Please enter your choice > ");
				scanf("%d", &choiceModify);

				switch (choiceModify)
				{
				case 1:
				{
					printf("Staff ID: ");
					scanf("%s", &s[i].staffID);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 2:
				{
					printf("Name: ");
					rewind(stdin);
					scanf("%[^\n]", &s[i].name);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 3:
				{
					printf("Password: ");
					scanf("%s", &s[i].password);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 4:
				{
					printf("Position: ");
					scanf("%s", &s[i].position);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 5:
				{
					printf("Faculty: ");
					scanf("%s", &s[i].faculty);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 6:
				{
					printf("Venue ID: ");
					scanf("%s", &s[i].venueID);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 7:
				{
					printf("Date: ");
					scanf("%s", &s[i].date);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				case 8:
				{
					printf("Contact Number: ");
					scanf("%s", &s[i].contactNbr);
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-10s\n", "Staff ID", "Name", "Password", "Position", "Faculty", "Venue ID", "Date", "Contact Number");
					printf("==============================================================================================================================\n");
					printf("%-10s\t%-10s\t%-10s\t%-15s%-15s%-15s\t%-10s\t%-15s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
					break;
				}
				default:
				{
					printf("Incorrect Number. Enter again \n");
					printf("\nWhich record you want to modify ?\n");
					printf("1.Staff ID\n");
					printf("2.Name\n");
					printf("3.Password\n");
					printf("4.Position\n");
					printf("5.Faculty\n");
					printf("6.Venue ID\n");
					printf("7.Date\n");
					printf("8.Contact Number\n");
					printf("Please enter your choice > ");
					scanf("%d", &choiceModify);
					break;
				}
				}
				modifyStfcount++;

			}
		}
		printf("\n\n=============================\n");
		printf("Any more to modify (Y/N) ? ->>>");
		rewind(stdin);
		scanf("%c", &moreStfRecord);

	} while (moreStfRecord == 'Y' || moreStfRecord == 'y');
	// Write all the records from array back to file

	printf("\n=============================\n");
	printf("Sure to modify (Y/N) ? ->>> ");
	rewind(stdin);
	scanf("%c", &sureModify);

	while (sureModify == 'Y' || sureModify == 'y')
	{
		fptr = fopen("Staff.txt", "w");
		for (i = 0; i < scount; i++)
		{
			fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
		}
		printf("     <%d records are sucessful modified>    \n", modifyStfcount);
		printf("=========================================================================================================================\n");
		fclose(fptr);
		return menuStaff();
	}
	while (sureModify == 'Y' || sureModify == 'y')
	{
		printf("Modify have been cancel.....\n");
		fclose(fptr);
		return menuStaff();
	}
}

void backupStaff()
{
	FILE* fptr;
	FILE* fptr2;

	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff s[100];

	int scount = 0;
	fptr = fopen("Staff.txt", "r");
	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &s[scount].staffID, &s[scount].name, &s[scount].password, &s[scount].position, &s[scount].faculty, &s[scount].venueID, &s[scount].date, &s[scount].contactNbr) != EOF)
	{
		scount++;
	}

	fptr2 = fopen("Staffbackup.txt", "w");
	if (fptr2 == NULL)
	{
		printf("Unable to open the Staffbackup.txt file\n");
		exit(-1);
	}
	char confirmBackUp;

	printf("\n====================================================\n");
	printf("Are you sure want to back up staff records (Y/N) ? ->>> ");
	rewind(stdin);
	scanf("%c", &confirmBackUp);

	while (confirmBackUp == 'Y' || confirmBackUp == 'y')
	{
		for (int i = 0; i < scount; i++)
		{
			fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &s[i].staffID, &s[i].name, &s[i].password, &s[i].position, &s[i].faculty, &s[i].venueID, &s[i].date, &s[i].contactNbr);
			fprintf(fptr2, "%s|%s|%s|%s|%s|%s|%s|%s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
		}

		printf("Back up sucessful.....\n\n");
		fclose(fptr);
		fclose(fptr2);
		return menuStaff();
	}

	while (confirmBackUp == 'N' || confirmBackUp == 'n')
	{
		printf("Back up cancel.....\n");
		return menuStaff();
	}
}

void deleteStaff()
{
	FILE* fptr;
	fptr = fopen("Staff.txt", "r");

	struct Staff
	{
		char staffID[10];
		char name[20];
		char position[10];
		char faculty[5];
		char password[10];
		char venueID[10];
		char date[10];
		char contactNbr[15];
	};

	struct Staff s[100];

	int scount = 0, foundStaff = 0;
	char staffID[10], moreDlt, sureDlt;

	if (fptr == NULL)
	{
		printf("Unable to open the Staff.txt file\n");
		exit(-1);
	}

	while (fscanf(fptr, "%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\|]|%[^\n]\n", &s[scount].staffID, &s[scount].name, &s[scount].password, &s[scount].position, &s[scount].faculty, &s[scount].venueID, &s[scount].date, &s[scount].contactNbr) != EOF)
	{
		scount++;
	}
	fclose(fptr);

	do
	{
		printf("Enter Staff ID to delete record: ");
		rewind(stdin);
		scanf("%s", &staffID);

		if (foundStaff == 0)
		{

			for (int i = 0; i < scount; i++)
			{
				if (strcmp(s[i].staffID, staffID) == 0)
				{
					foundStaff = i;

					printf("Are you sure to delete? (Y=yes) : ");
					rewind(stdin);
					scanf("%c", &sureDlt);

					if (toupper(sureDlt) == 'Y')
					{
						for (i = foundStaff; i < scount - 1; i++) {
							s[i] = s[i + 1];
						}
						scount--;
						printf("Record deleted successful...\n");
					}

					else if (toupper(sureDlt) == 'N')
					{
						for (i = foundStaff; i < scount; i++) {
							s[i] = s[i];
						}
						printf("Delete process cancelled\n");
					}

				}
			}
		}

		printf("Any more to delete? (Y=yes) : ");
		rewind(stdin);
		scanf("%c", &moreDlt);

	} while (toupper(moreDlt) == 'Y');

	fptr = fopen("Staff.txt", "w");

	for (int i = 0; i < scount; i++)
	{
		fprintf(fptr, "%s|%s|%s|%s|%s|%s|%s|%s\n", s[i].staffID, s[i].name, s[i].password, s[i].position, s[i].faculty, s[i].venueID, s[i].date, s[i].contactNbr);
	}

	fclose(fptr);
	printf("Delete record sucessful...\n");
	return menuStaff();
}

//Visits and Visits Module -> LAI KAH LOK
void mainMenuVE()
{
	int choice;
	do {
		menuVE();
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			menuVisit();
			break;
		case 2:
			menuExit();
			break;

		case 3:
			main();
			break;

		default:
			printf("Wrong Choice. Enter again\n");
			break;
		}
	} while (choice != 3);
}

void menuVE() {
	printf("+==================+\n");
	printf("|  Visit and Exit  |\n");
	printf("+==================+\n");
	printf("|1.Visit Records   |\n");
	printf("|2.Exit Records    |\n");
	printf("|3.Home menu       |\n");
	printf("+==================+\n");
	printf("Enter your choice->>>");
}

void menuVisit() {
	int choice;
	printf("+========================+\n");
	printf("|        Visit           |\n");
	printf("+========================+\n");
	printf("|1.Add Visit Records     |\n");
	printf("|2.Display Visit Record  |\n");
	printf("|3.Modify Visit Record   |\n");
	printf("|4.Delete Visit Records  |\n");
	printf("|5.Back up Visit Records |\n");
	printf("|6.Search Visit Records  |\n");
	printf("|7.Return                |\n");
	printf("+========================+\n");
	printf("Enter your choice->>>");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		addVisit();
		break;
	case 2:
		displayvisit();
		break;
	case 3:
		modifyVisit();
		break;

	case 4:
		deleteVisit();
		break;
	case 5:
		backupVisit();
		break;
	case 6:
		searchVisit();
		break;
	case 7:
		mainMenuVE();
		break;
	default:
		printf("Wrong Choice. Enter again\n");
		menuVisit();
		break;
	}
}

void menuExit() {
	int choice;
	printf("+=======================+\n");
	printf("|        Exit           |\n");
	printf("+=======================+\n");
	printf("|1.Add Exit Records     |\n");
	printf("|2.Display Exit Record  |\n");
	printf("|3.Modify Exit Records  |\n");
	printf("|4.Delete Exit Records  |\n");
	printf("|5.Back up Exit Records |\n");
	printf("|6.Search Exit Records  |\n");
	printf("|7.Return               |\n");
	printf("+=======================+\n");
	printf("Enter your choice->>>");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		addExit();
		break;
	case 2:
		displayexit();
		break;
	case 3:
		modifyExit();
		break;

	case 4:
		deleteExit();
		break;
	case 5:
		backupExit();
		break;
	case 6:
		searchExit();
		break;
	case 7:
		mainMenuVE();
		break;
	default:
		printf("Wrong Choice. Enter again\n");
		menuExit();
		break;
	}
}

void addVisit() {

	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit vs;
	FILE* fptr;
	char choice2;

	fptr = fopen("visitrecord.dat", "ab");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	do {
		printf("\n=======================\n");
		printf("| Enter Visit details |\n");
		printf("=======================\n\n");
		printf("Visit Code (eg :V001) :");
		scanf("%s", &vs.visitCode);
		printf("Date of visit (eg:1/1/2021): ");
		rewind(stdin);
		scanf("%s", &vs.date);
		printf("Visit time (eg:9:30pm) : ");
		rewind(stdin);
		scanf("%s", &vs.time);
		printf("Visitor IC no (eg:0123456-78-9012) : ");
		rewind(stdin);
		scanf("%s", &vs.visitIcno);
		printf("Venue ID (eg:Lab301) :");
		rewind(stdin);
		scanf("%s", &vs.venueId);
		printf("Visitor temperature (eg :36.5) :");
		rewind(stdin);
		scanf("%s", &vs.visitemperature);
		printf("Purpose of visit:");
		rewind(stdin);
		scanf("%[^\n]", &vs.purposeVisit);


		// write into file
		fwrite(&vs, sizeof(struct Visit), 1, fptr);


		printf("Add next visit details? (Y/N) : ");
		rewind(stdin);
		scanf("%ch", &choice2);

	} while (choice2 == 'Y' || choice2 == 'y');
	fclose(fptr);
	return menuVisit();
}

void displayvisit() {
	int count = 0;

	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit vs;
	FILE* fptr;
	fptr = fopen("visitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	printf("\n------------------------------------------------[Visit details]---------------------------------------------------------\n");
	time_t t;   // not a primitive datatype
	time(&t);
	printf("                                    Visit Records as at %s", ctime(&t));
	printf("=========================================================================================================================");
	printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
	printf("=========================================================================================================================\n");
	while (fread(&vs, sizeof(vs), 1, fptr) != 0) {
		printf("%-10s\t", vs.visitCode);

		printf("%-10s\t", vs.date);

		printf("%-15s", vs.time);

		printf("%-20s", vs.visitIcno);

		printf("%-14s", vs.venueId);

		printf("%-15s\t", vs.visitemperature);

		printf("%-20s\n", vs.purposeVisit);

		count++;
	}
	printf("\n\t\t\t\t\t<Total %d visit records listed>\n", count);
	printf("=========================================================================================================================\n");
	fclose(fptr);
	return menuVisit();
}

void modifyVisit() {
	FILE* fptr;
	char vcode[10];
	char sureModify, moreRecord;
	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit v[100];

	int i = 0, found = 0;
	int choiceModify, modifyCount = 0, pCount = 0;

	fptr = fopen("visitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fread(&v[pCount], sizeof(struct Visit), 1, fptr)) {
		pCount++;
	}
	fclose(fptr);


	do {

		printf("\n==================================\n");
		printf("Enter Visit code to be modified->>>");
		scanf("%s", &vcode);



		for (i = 0; i < pCount; i++)
		{
			if (strcmp(vcode, v[i].visitCode) == 0)
			{
				found = 1;
				printf("\n Visit details that want to be modified\n");
				printf("\n------------------------------------------------[Visit details]---------------------------------------------------------");
				printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
				printf("=========================================================================================================================\n");
				printf("%-10s\t", v[i].visitCode);
				printf("%s\t", v[i].date);
				printf("%-15s", v[i].time);
				printf("%-20s", v[i].visitIcno);
				printf("%-14s", v[i].venueId);
				printf("%-15s\t", v[i].visitemperature);
				printf("%-20s\n", v[i].purposeVisit);
				printf("\nWhich record you want to modify ?\n");
				printf("1.Visit Code\n");
				printf("2.Date\n");
				printf("3.Time\n");
				printf("4.Visitor IC No\n");
				printf("5.Venue ID\n");
				printf("6.Visitor Temperature\n");
				printf("7.Purpose of Visit\n");
				printf("Please enter your choice->");
				scanf("%d", &choiceModify);

				switch (choiceModify)
				{
				case 1:
				{
					printf("Code : ");
					scanf("%s", &v[i].visitCode);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 2:
				{
					printf("Date: ");
					scanf("%s", &v[i].date);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 3:
				{
					printf("Time:");
					scanf("%s", &v[i].time);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 4:
				{
					printf("Visitor IC No:");
					scanf("%s", &v[i].visitIcno);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 5:
				{
					printf("Venue ID:");
					scanf("%s", &v[i].venueId);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 6:
				{
					printf("Visitor temperature:");
					scanf("%s", &v[i].visitemperature);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				case 7:
				{
					printf("Purpose of visit:");
					rewind(stdin);
					scanf("%[^\n]", &v[i].purposeVisit);
					printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
					printf("=========================================================================================================================\n");
					printf("%-10s\t", v[i].visitCode);
					printf("%s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
					break;
				}
				default:
				{
					printf("Incorrect Number. Enter again \n");
					printf("Which record you want to modify ?\n");
					printf("1.Product Code\n");
					printf("2.Expire Year\n");
					printf("3.Country\n");
					scanf("%d", &choiceModify);
					break;
				}
				}
				modifyCount++;
			}
		}
		printf("\n\n=============================\n");
		printf("Any more to modify (Y/N) ? ->>>");
		rewind(stdin);
		scanf("%c", &moreRecord);

	} while (moreRecord == 'Y' || moreRecord == 'y');
	// Write all the records from array back to file

	printf("\n=============================\n");
	printf("Sure to modify (Y/N) ? ->>> ");
	rewind(stdin);
	scanf("%c", &sureModify);


	while (sureModify == 'Y' || sureModify == 'y') {
		fptr = fopen("visitrecord.dat", "wb");
		if (fptr == NULL)
		{
			printf("Unable to open the file\n");
			exit(-1);
		}
		for (i = 0; i < pCount; i++) {
			fwrite(&v[i], sizeof(struct Visit), 1, fptr);
		}
		printf("     <%d records are sucessful modified>    \n", modifyCount);
		printf("=========================================================================================================================\n");
		fclose(fptr);
		return menuVisit();
	}

	while (sureModify == 'N' || sureModify == 'n') {
		printf("Modify have been cancel.....\n");
		fclose(fptr);
		return menuVisit();
	}
}

void deleteVisit() {
	FILE* fptr;
	fptr = fopen("visitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit v[100];

	int  pCount = 0, found = 0;
	char visitCode[10], more;


	while (fread(&v[pCount], sizeof(struct Visit), 1, fptr) != 0) {
		pCount++;
	}
	fclose(fptr);

	do {
		printf("Enter Visit code to delete record ->>>");
		rewind(stdin);
		scanf("%s", &visitCode);

		for (int i = 0; i < pCount; i++)
		{
			if (strcmp(v[i].visitCode, visitCode) == 0)
			{
				found = i;


				for (int i = found; i < pCount - 1; i++) {
					v[i] = v[i + 1];
				}


			}
		}
		pCount--;
		printf("Any more to delete? (Y=yes) : ");
		rewind(stdin);
		scanf("%c", &more);
	} while (more == 'Y' || more == 'y');
	fptr = fopen("visitrecord.dat", "wb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	for (int i = 0; i < pCount; i++) {
		fwrite(&v[i], sizeof(struct Visit), 1, fptr);
	}
	printf("Delete record sucessful...\n");
	fclose(fptr);
	return menuVisit();
}

void addExit() {

	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit es;
	FILE* fptr2;
	char choice2;

	fptr2 = fopen("exitrecord.dat", "ab");
	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	do {
		printf("======================\n");
		printf("| Enter Exit details |\n");
		printf("======================\n");
		printf("\nExit Code (eg:E001):");
		rewind(stdin);
		scanf("%s", &es.exitCode);
		printf("Date of exit (eg:1/1/2021): ");
		rewind(stdin);
		scanf("%s", &es.date);
		printf("Exit time (eg:9:30pm) : ");
		rewind(stdin);
		scanf("%s", &es.time);
		printf("Visitor IC no (eg:0123456-78-9012) : ");
		rewind(stdin);
		scanf("%s", &es.exitIcno);
		printf("Venue ID (eg:Lab301) :");
		rewind(stdin);
		scanf("%s", &es.venueId);
		printf("Contact number (eg:012-3456789 ):");
		rewind(stdin);
		scanf("%s", &es.phoneNumber);

		// write into file
		fwrite(&es, sizeof(struct Exit), 1, fptr2);


		printf("Add next visit details? (Y/N) ->>> ");
		rewind(stdin);
		scanf("%ch", &choice2);

	} while (choice2 == 'Y' || choice2 == 'y');
	fclose(fptr2);
	return menuExit();
}

void displayexit() {

	int count = 0;

	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit es;
	FILE* fptr2;
	fptr2 = fopen("exitrecord.dat", "rb");
	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
	time_t t;   // not a primitive datatype
	time(&t);
	printf("                                    Exit Records as at %s", ctime(&t));
	printf("======================================================================================================================\n");
	printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
	printf("======================================================================================================================\n");



	while (fread(&es, sizeof(es), 1, fptr2) != 0) {

		printf("%-10s\t", es.exitCode);

		printf("%-10s\t", es.date);

		printf("%-15s", es.time);

		printf("%-22s", es.exitIcno);

		printf("%-14s", es.venueId);

		printf("%-20s\n", es.phoneNumber);
		count++;
	}
	printf("\n\t\t\t\t\t<Total %d exit details listed>\n\n", count);
	printf("======================================================================================================================\n");
	fclose(fptr2);
	return menuExit();
}

void modifyExit() {
	FILE* fptr2;
	char eCode[10];
	char sureModify, moreRecord;

	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit e[100];
	int choiceModify, modifyCount = 0, pCount = 0;
	int i = 0, found = 0;

	fptr2 = fopen("exitrecord.dat", "rb");

	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	while (fread(&e[pCount], sizeof(struct Exit), 1, fptr2)) {
		pCount++;
	}
	fclose(fptr2);

	do {
		printf("\n==================================\n");
		printf("Enter Exit code to be modified->>> ");
		scanf("%s", &eCode);


		for (i = 0; i < pCount; i++)
		{
			if (strcmp(eCode, e[i].exitCode) == 0)
			{
				found = 1;
				printf("\n Exit details that want to be modified\n");
				printf("======================================================================================================================\n");
				printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
				printf("======================================================================================================================\n");
				printf("%-10s\t", e[i].exitCode);
				printf("%-10s\t", e[i].date);
				printf("%-15s", e[i].time);
				printf("%-22s", e[i].exitIcno);
				printf("%-14s", e[i].venueId);
				printf("%-20s\n", e[i].phoneNumber);
				printf("\nWhich record you want to modify ?\n");
				printf("1.Exit Code\n");
				printf("2.Date\n");
				printf("3.Time\n");
				printf("4.Visitor IC No\n");
				printf("5.Venue ID\n");
				printf("6.Phone Number\n");
				scanf("%d", &choiceModify);

				switch (choiceModify)
				{
				case 1:
				{
					printf("Exit Code : ");
					scanf("%s", &e[i].exitCode);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				case 2:
				{
					printf("Date : ");
					scanf("%s", &e[i].date);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				case 3:
				{
					printf("Time : ");
					scanf("%s", &e[i].time);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				case 4:
				{
					printf("Visitor Ic No : ");
					scanf("%s", &e[i].exitIcno);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				case 5:
				{
					printf("Venue ID : ");
					scanf("%s", &e[i].venueId);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				case 6:
				{
					printf("Phone Number : ");
					scanf("%s", &e[i].phoneNumber);
					printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
					printf("======================================================================================================================\n");
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
					break;
				}
				default:
				{
					printf("Incorrect Number. Enter again \n");
					printf("\nWhich record you want to modify ?\n");
					printf("1.Exit Code\n");
					printf("2.Date\n");
					printf("3.Time\n");
					printf("4.Visitor IC No\n");
					printf("5.Venue ID\n");
					printf("6.Phone Number\n");
					scanf("%d", &choiceModify);
					break;
				}
				}
				modifyCount++;
			}
		}
		printf("\n\n=============================\n");
		printf("\nAny more to modify (Y/N) ? ->>> ");
		rewind(stdin);
		scanf("%c", &moreRecord);

	} while (moreRecord == 'Y' || moreRecord == 'y');

	printf("\n=============================\n");
	printf("Sure to modify (Y/N) ? ->>> ");
	rewind(stdin);
	scanf("%c", &sureModify);


	// Write all the records from array back to file
	while (sureModify == 'Y' || sureModify == 'y') {
		fptr2 = fopen("exitrecord.dat", "wb");
		if (fptr2 == NULL)
		{
			printf("Unable to open the file\n");
			exit(-1);
		}
		for (i = 0; i < pCount; i++) {
			fwrite(&e[i], sizeof(struct Exit), 1, fptr2);
		}
		printf("     <%d records are sucessful modified>    \n", modifyCount);
		printf("=========================================================================================================================\n");
		fclose(fptr2);
		return menuExit();
	}

	while (sureModify == 'N' || sureModify == 'n') {
		printf("Modify have been cancel.....\n");
		fclose(fptr2);
		return menuExit();
	}
}

void deleteExit() {
	FILE* fptr2;
	fptr2 = fopen("exitrecord.dat", "rb");


	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit e[100];

	int  pCount = 0, found = 0;
	char exitCode[10], sure, more;


	while (fread(&e[pCount], sizeof(struct Exit), 1, fptr2) != 0) {
		pCount++;
	}
	fclose(fptr2);

	do {
		printf("Enter exit code to delete record ->>>");
		rewind(stdin);
		scanf("%s", &exitCode);

		for (int i = 0; i < pCount; i++)
		{
			if (strcmp(e[i].exitCode, exitCode) == 0)
			{
				found = i;


				for (int i = found; i < pCount - 1; i++) {
					e[i] = e[i + 1];
				}


			}
		}
		pCount--;
		printf("Any more to delete? (Y=yes) : ");
		rewind(stdin);
		scanf("%c", &more);
	} while (more == 'Y' || more == 'y');

	fptr2 = fopen("exitrecord.dat", "wb");

	for (int i = 0; i < pCount; i++) {
		fwrite(&e[i], sizeof(struct Exit), 1, fptr2);
	}
	fclose(fptr2);
	return menuExit();
}

void backupVisit() {
	FILE* fptr;
	FILE* fptr2;
	int count = 0;
	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit v[100];

	int pCount = 0;
	fptr = fopen("visitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	printf("\n------------------------------------------------[Visit details]---------------------------------------------------------\n");
	time_t t;   // not a primitive datatype
	time(&t);
	printf("                                    Visit Records as at %s", ctime(&t));
	printf("=========================================================================================================================");
	printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
	printf("=========================================================================================================================\n");
	while (fread(&v[pCount], sizeof(struct Visit), 1, fptr) != 0) {

		printf("%-10s\t", v[pCount].visitCode);

		printf("%-10s\t", v[pCount].date);

		printf("%-15s", v[pCount].time);

		printf("%-20s", v[pCount].visitIcno);

		printf("%-14s", v[pCount].venueId);

		printf("%-15s\t", v[pCount].visitemperature);

		printf("%-20s\n", v[pCount].purposeVisit);
		count++;
		pCount++;
	}
	printf("\n\t\t\t\t\t<Total %d visit records listed>\n", count);
	printf("=========================================================================================================================\n");
	fptr2 = fopen("visitrecordbackup.dat", "wb");
	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	char sureBackup;




	printf("\n====================================================\n");
	printf("Are you sure want to back up visit records (Y/N) ? ->>> ");
	rewind(stdin);
	scanf("%c", &sureBackup);

	while (sureBackup == 'Y' || sureBackup == 'y') {
		for (int i = 0; i < pCount; i++) {
			fread(&v[i], sizeof(struct Visit), 1, fptr);
			fwrite(&v[i], sizeof(struct Visit), 1, fptr2);
		}
		printf("Back up sucessful.....\n\n");
		fclose(fptr);
		fclose(fptr2);
		return menuVisit();
	}


	while (sureBackup == 'N' || sureBackup == 'n') {
		printf("Back up cancel.....\n");
		return menuVisit();
	}


}

void backupExit() {
	FILE* fptr;
	FILE* fptr2;
	char sureBackup;
	int count = 0;
	int pCount = 0;
	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit es[100];

	fptr = fopen("exitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
	time_t t;   // not a primitive datatype
	time(&t);
	printf("                                    Exit Records as at %s", ctime(&t));
	printf("======================================================================================================================\n");
	printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
	printf("======================================================================================================================\n");

	while (fread(&es[pCount], sizeof(struct Exit), 1, fptr) != 0) {
		printf("%-10s\t", es[pCount].exitCode);

		printf("%-10s\t", es[pCount].date);

		printf("%-15s", es[pCount].time);

		printf("%-22s", es[pCount].exitIcno);

		printf("%-14s", es[pCount].venueId);

		printf("%-20s\n", es[pCount].phoneNumber);
		pCount++;
		count++;
	}
	printf("\n\t\t\t\t\t<Total %d exit details listed>\n\n", count);
	printf("======================================================================================================================\n");
	fptr2 = fopen("exitrecordbackup.dat", "wb");
	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}



	printf("\n=================================================\n");
	printf("Are you sure want to back up exit records (Y/N) ->>> ");
	rewind(stdin);
	scanf("%c", &sureBackup);

	while (sureBackup == 'Y' || sureBackup == 'y') {
		for (int i = 0; i < pCount; i++) {
			fread(&es[i], sizeof(struct Exit), 1, fptr);
			fwrite(&es[i], sizeof(struct Exit), 1, fptr2);
		}

		printf("Back up sucessful.....\n");
		fclose(fptr);
		fclose(fptr2);
		return menuExit();
	}

	while (sureBackup == 'N' || sureBackup == 'n') {
		printf("Back up cancel.....\n");
		return menuExit();
	}
}

void searchVisit() {
	FILE* fptr;
	char vcode[10];
	char date[10];
	char time[8];
	char visitIcno[20];
	char venueId[7];


	struct Visit {
		char visitCode[10];
		char date[10];
		char time[8];
		char visitIcno[20];
		char venueId[7];
		char visitemperature[5];
		char purposeVisit[30];
	};

	struct Visit v[100];

	int i = 0, found = 0, count = 0, pCount = 0;
	char research;
	int  typeSearch;

	fptr = fopen("visitrecord.dat", "rb");
	if (fptr == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}
	while (fread(&v[pCount], sizeof(struct Visit), 1, fptr) != 0) {
		pCount++;
	}
	fclose(fptr);

	do {
		printf("===================\n");
		printf("| Search based on | \n");
		printf("===================\n\n");
		printf("1.Visit Code\n");
		printf("2.Date\n");
		printf("3.Time\n");
		printf("4.Visitor IC No\n");
		printf("5.Venue ID\n");
		printf("Please enter your choice ->>>");
		scanf("%d", &typeSearch);


		switch (typeSearch)
		{
		case 1:
		{
			printf("Visit Code:");
			scanf("%s", &vcode);

			printf("\n------------------------------------------------[Visit details Search]------------------------------------------------------\n");
			printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
			printf("=========================================================================================================================\n");


			for (i = 0; i < pCount && found == 0; i++)
			{
				if (strcmp(vcode, v[i].visitCode) == 0)
				{
					printf("%-10s\t", v[i].visitCode);
					printf("%-10s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
				}
			}
			break;
		}

		case 2:
		{
			printf("Date of visit (eg:1/1/2021): ");
			rewind(stdin);
			scanf("%s", &date);

			printf("\n------------------------------------------------[Visit details Search]------------------------------------------------------\n");
			printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
			printf("=========================================================================================================================\n");
			for (i = 0; i < pCount && found == 0; i++)
			{
				if (strcmp(date, v[i].date) == 0)
				{

					printf("%-10s\t", v[i].visitCode);
					printf("%-10s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
				}
			}
			break;
		}
		case 3:
		{
			printf("Time of visit : ");
			rewind(stdin);
			scanf("%s", &time);

			printf("\n------------------------------------------------[Visit details Search]------------------------------------------------------\n");
			printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
			printf("=========================================================================================================================\n");
			for (i = 0; i < pCount && found == 0; i++)
			{

				if (strcmp(time, v[i].time) == 0)
				{

					printf("%-10s\t", v[i].visitCode);
					printf("%-10s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
				}
			}
			break;
		}

		case 4:
		{
			printf("Visitor IC No  ");
			rewind(stdin);
			scanf("%s", &visitIcno);

			printf("\n------------------------------------------------[Visit details Search]------------------------------------------------------\n");
			printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
			printf("=========================================================================================================================\n");
			for (i = 0; i < pCount && found == 0; i++)
			{
				if (strcmp(visitIcno, v[i].visitIcno) == 0)
				{

					printf("%-10s\t", v[i].visitCode);
					printf("%-10s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
				}
			}
			break;
		}
		case 5:
		{
			printf("Venue ID  :");
			rewind(stdin);
			scanf("%s", &venueId);

			printf("\n------------------------------------------------[Visit details Search]------------------------------------------------------\n");
			printf("\n%-10s\t%-10s\t%-15s%-20s%-14s%-15s\t%-20s\n", "Visit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Visitor Temperature", "Purpose of visit");
			printf("=========================================================================================================================\n");

			for (i = 0; i < pCount && found == 0; i++)
			{

				if (strcmp(venueId, v[i].venueId) == 0)
				{

					printf("%-10s\t", v[i].visitCode);
					printf("%-10s\t", v[i].date);
					printf("%-15s", v[i].time);
					printf("%-20s", v[i].visitIcno);
					printf("%-14s", v[i].venueId);
					printf("%-15s\t", v[i].visitemperature);
					printf("%-20s\n", v[i].purposeVisit);
				}
			}
			break;
		}
		default:
		{
			printf("Incorrect Number. Enter again \n");
			printf("===================\n");
			printf("| Search based on | \n");
			printf("===================\n\n");
			printf("1.Visit Code\n");
			printf("2.Date\n");
			printf("3.Time\n");
			printf("4.Visitor IC No\n");
			printf("5.Venue ID\n");
			printf("Please enter your choice ->>>");
			scanf("%d", &typeSearch);
			break;
		}
		}


		printf("==================================");
		printf("\nAny more to search (Y/N) ? ->>> ");
		rewind(stdin);
		scanf("%c", &research);

	} while (research == 'Y' || research == 'y');
	fclose(fptr);
	return menuVisit();
}

void searchExit() {
	FILE* fptr2;
	char exitcode[20];
	char date[10];
	char time[8];
	char exitIcNo[20];
	char venueId[7];
	char phoneNumber[20];

	struct Exit {
		char exitCode[20];
		char date[10];
		char time[8];
		char exitIcno[20];
		char venueId[7];
		char phoneNumber[20];
	};

	struct Exit e[100];
	int i = 0, found = 0, pCount = 0;
	char research;
	int  typeSearch;

	fptr2 = fopen("exitrecord.dat", "rb");
	if (fptr2 == NULL)
	{
		printf("Unable to open the file\n");
		exit(-1);
	}

	while (fread(&e[pCount], sizeof(struct Exit), 1, fptr2)!=0) {
		pCount++;
	}
	fclose(fptr2);

	do {
		printf("===================\n");
		printf("| Search based on | \n");
		printf("===================\n\n");
		printf("1.Exit Code\n");
		printf("2.Date\n");
		printf("3.Time\n");
		printf("4.Visitor IC No\n");
		printf("5.Venue ID\n");
		printf("6.Phone Number\n");
		printf("Please enter your choice ->>>");
		scanf("%d", &typeSearch);

		switch (typeSearch)
		{
		case 1:
		{
			printf("Exit Code:");
			scanf("%s", &exitcode);

			printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
			printf("======================================================================================================================\n");

			for (i = 0; i < pCount && found == 0; i++)
			{

				if (strcmp(exitcode, e[i].exitCode) == 0)
				{
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
				}
			}
			break;
		}
		case 2:
		{  printf("Date:");
		scanf("%s", &date);
		printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
		printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
		printf("======================================================================================================================\n");


		for (i = 0; i < pCount && found == 0; i++)
		{
			if (strcmp(date, e[i].date) == 0)
			{
				printf("%-10s\t", e[i].exitCode);
				printf("%-10s\t", e[i].date);
				printf("%-15s", e[i].time);
				printf("%-22s", e[i].exitIcno);
				printf("%-14s", e[i].venueId);
				printf("%-20s\n", e[i].phoneNumber);
			}
		}
		break;
		}
		case 3:
		{
			printf("Time:");
			scanf("%s", &time);
			printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
			printf("======================================================================================================================\n");


			for (i = 0; i < pCount && found == 0; i++)
			{

				if (strcmp(time, e[i].time) == 0)
				{
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
				}
			}
			break;
		}
		case 4:
		{
			printf("Visitor IC No:");
			scanf("%s", &exitIcNo);
			printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
			printf("======================================================================================================================\n");

			for (i = 0; i < pCount && found == 0; i++)
			{
				if (strcmp(exitIcNo, e[i].exitIcno) == 0)
				{
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
				}
			}
			break;
		}
		case 5:
		{
			printf("Venue ID:");
			scanf("%s", &venueId);
			printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
			printf("======================================================================================================================\n");

			for (i = 0; i < pCount && found == 0; i++)
			{

				if (strcmp(venueId, e[i].venueId) == 0)
				{
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
				}
			}
			break;
		}
		case 6:
		{
			printf("Phone Number:");
			scanf("%s", &phoneNumber);
			printf("\n------------------------------------------------[Exit details]-----------------------------------------------------\n");
			printf("%-10s\t%-10s\t%-15s%-22s%-14s%-20s\n", "Exit Code", "Date", "Time", "Visitor IC No", "Venue ID", "Phone Number");
			printf("======================================================================================================================\n");

			for (i = 0; i < pCount && found == 0; i++)
			{
				if (strcmp(phoneNumber, e[i].phoneNumber) == 0)
				{
					printf("%-10s\t", e[i].exitCode);
					printf("%-10s\t", e[i].date);
					printf("%-15s", e[i].time);
					printf("%-22s", e[i].exitIcno);
					printf("%-14s", e[i].venueId);
					printf("%-20s\n", e[i].phoneNumber);
				}
			}
			break;
		}
		default:
		{
			printf("Incorrect Number. Enter again \n");
			printf("Search based on-> :\n");
			printf("1.Exit Code\n");
			printf("2.Date\n");
			printf("3.Time\n");
			printf("4.Visitor IC No\n");
			printf("5.Venue ID\n");
			printf("6.Phone Number\n");
			printf("Please enter your choice ->>>");
			scanf("%d", &typeSearch);
			break;
		}
		}
		printf("=============================\n");
		printf("Any more to search (Y/N) ? ->>> ");
		rewind(stdin);
		scanf("%c", &research);

	} while (research == 'Y' || research == 'y');
	fclose(fptr2);
	return menuExit();
}