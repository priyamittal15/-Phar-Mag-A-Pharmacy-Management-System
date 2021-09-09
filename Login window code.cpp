#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<ctype.h>
#include<windows.h>
using namespace std;



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





int main(void)
{

 login();
}

