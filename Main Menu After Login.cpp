#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<ctype.h>
#include<windows.h>
using namespace std;



//==============================================LOGIN===============================================================================================//


void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="minor";
    char pass[10]="aiml";
    do
{

    cout<<"\n \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ LOGIN   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\  "<<"\n\n";
    cout<<" \n\n                        USERNAME=";
	cin>>uname;
	cout<<" \n\n                        PASSWORD=";
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"minor")==0 && strcmp(pword,"aiml")==0)
	{
    cout<<"  \n\n\n\t\t\t\t       WELCOME TO Phar-Mag !!!!";
	cout<<"\n\n \t\t\t\t(A Portal for Pharmacy Management System)";
	cout<<"\n\n";
    cout<<"\t\t\t\t\tYOUR LOGIN IS SUCCESSFUL!!";
	cout<<"\n\n";
	cout<<"\n\n\n\t\t\tPress any key to continue...";
	getch();//holds the screen
	break;
	}
	else
	{
		cout<<"\n        SORRY !!!!  LOGIN IS UNSUCESSFUL";
		a++;

		getch();//holds the screen

	}
}
	while(a<=4);
	if (a>3)
	{
		cout<<"\nSorry you have entered the wrong username and password for four times!!!";

		getch();

		}
		system("cls");
}

//===========================================================================//

void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//=======================Animation===============================================//
void animation()
{
	for (int i=45; i>=1; i--)
	{
		Sleep(30);
		gotoxy(1,i);

	}
	for (int i=1; i<=20; i++)
	{
		Sleep(40);
		gotoxy(1,i);
	}
}




//=======================================================Main Menu=================================================================================//
void main_menu()
{
   cout<<"\t\t\t\t****************Main Menu*******************";
   cout<<"\n\n";
   cout<<"1. STOCK MANAGEMENT";
   cout<<"\n\n";
   cout<<"2. ORDER MANAGEMENT";
   cout<<"\n\n";
   cout<<"3. EXIT WINDOW";

   int ch;
   cout<<"\n\n";
   cout<<"Enter First Number from menu to execute: ";
   cin>>ch;
   cout<<"\n\n";
   switch(ch){
        case 1:


            cout<<"\t\t\t*******Menu For Stock Management*******";
            cout<<"\n\n";
            cout<<"1. Show Item list";
        	cout<<"\n\n";
        	cout<<"2. Find Item From list";
        	cout<<"\n\n";
        	cout<<"3. Add item in Stock";
        	cout<<"\n\n";
        	cout<<"4. Update Stock Item";
        	cout<<"\n\n";
        	cout<<"5. Delete Stock Item";
        	cout<<"\n\n";
        	cout<<"6. Exit to Main Window";

        break;



        case 2:
			cout<<"\t\t\t*******Menu For Order Management********";
        	cout<<"\n\n";
        	cout<<"1. Take Medicine Order";
        	cout<<"\n\n";
        	cout<<"2. Delete and Modify Orders";
        	cout<<"\n\n";
        	cout<<"3. Print Receipt";
        	cout<<"\n\n";
        	cout<<"4. Make Payment";
        	cout<<"\n\n";
        	cout<<"5. Summary of Total Sales";
        	cout<<"\n\n";
        	cout<<"6. Exit to Main Window";


        break;

        case 3:


	  		animation();
      		system("cls");
        	gotoxy(35,20);
        	cout<<" Please wait.....";
        	cout<<"\n\t\t Thank You For Using! See you Soon....";
        	Sleep(2000);
        	exit(0);
        break;


    	 default :

        	cout<<"Invalid Option Selected!!!"<<"\n" ;



   }

}






//==========================================MAIN===============================================================================================================
int main(void)
{

  login();
  main_menu();
}

