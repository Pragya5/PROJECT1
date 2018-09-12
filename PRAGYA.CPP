#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

void main()
{       clrscr();
	char ch,c,b;
	char name[20], address[50], email[20], bg, gender;
	int age;
	long int mobile,mb;
	cout<<"\n\n\n";
	cout<<"****WELCOME TO THE BLOOD DONATION CAMP****";
	cout<<"\nDo you wish to donate blood";
	cin>>ch;
	if(ch=='y'||ch=='Y')
       {
	 cout<<"\n CUSTOMER DETAILS: SELECT AN OPTION";

	 cout<<"\n 1. Enter donor's details \n 2. Display your details \n 3. Filter data \n 4.Exit\n";
       }
       cout<"\nEnter your choice";
	cin>>c;
	switch(c)
	{
		 case '1' : { cout<<"\nEnter the name of the donor\n";

			gets(name);
			cout<<"\nEnter the age\n";
			cin>>age;
			cout<<"\nEnter the address\n";
			gets(address);
			cout<<"\nEnter the email-id\n";
			gets(email);
			cout<<"\nEnter the mobile number";
			cin>>mobile;
			cout<<"\nEnter the blood group";
			cin>>bg;
			cout<<"\nEnter the gender\n";
			cin>>gender;
			 }

		case '2': {
			cout<<"\nNAME:";
			puts(name);
			cout<<"\n AGE:\t"<<age;
			cout<<"\nADDRESS\t";
			puts(address);
			cout<<"\nEMAIL:\t";
			puts(email);
			cout<<"\nMOBILE:\t"<<mobile;
			cout<<"\nBLOOD GROUP:\t"<<bg;
			cout<<"\n GENDER:\t"<<gender; }

		case '3':{ cout<<"\nEnter Blood group";
			cin>>b;
			cout<<"\nEnter phone number";
			cin>>mb;
			if(b==bg)
				{
				if(mb==mobile)

				{cout<<"\nNAME:";
				puts(name);
				cout<<"\n AGE:\t"<<age;
				cout<<"\nADDRESS\t";
				puts(address);
				cout<<"\nEMAIL:\t";
				puts(email);
				cout<<"\nMOBILE:\t"<<mobile;
				cout<<"\nBLOOD GROUP:\t"<<bg;
				cout<<"\n GENDER:\t"<<gender;

				}
			  }

		 case 4: { cout<<"\n***THANK YOU FOR YOUR TIME***";
			getch();}

		default: {cout<<"\n INVALID CHOICE"; }
	    }



getch();
}
}