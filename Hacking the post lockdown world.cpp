#include<bits/stdc++.h>

using namespace std;

class cutomer_entry
{
	char name[50];
	long phone;
	
	public:
		void input()
		{
			cout<<"\n Enter your name: ";
			gets(name);
			
			cout<<"\n Enter your phone number: ";
			cin>>phone;
		}
		
		void output()
		{
			cout<<"\n Name: ";
			cout<<name;
			
			cout<<"\n Phone number: ";
			cout<<phone;
		}
		
		char *getname()
		{
			return name;
		}
	
};


void intro()
{
	cout<<setw(328)<<"Contact Tracing Software";	
	cout<<setw(214)<<"by Aryan, Kushal and Shivam\n\n";
}


int main()
{	
	intro();
	
	int choice;
	cout<<"Menu\n1:Customer Entry\n2:Customer Exit\n3:Report Case\n4:Exit\n";
	cout<<"\n\nEnter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			exit(0);
	}
	return 0;
}
