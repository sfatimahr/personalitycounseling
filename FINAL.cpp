#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;
string message(char);
void infoClient();
void output (int []);
int main()
	{
		string a, pronouns, name[30]; //declaring variables
		int age[3], num[3];
		char ans, gender[3];
	
	
		
		cout << endl << setw(60) << "WELCOME TO OUR CONSULTATION :D" << endl << endl;
		for (int i=0; i < 3; i++)
		{
			cout << "Please enter your details " << endl;
			cout << "Name: ";
			cin >> name[i];
			
			cout << "Age: ";
			cin >> age[i];
			
			cout << "Gender  [F/M] : ";
			cin >> gender[i];
		
			if (gender[i] == 'F' || gender[i] == 'f') //to determine their pronouns
				pronouns = "Miss "; 
			else 
				pronouns  = "Mr. ";
			
			cout << endl << setw(55) << "Thank you for coming here today " << pronouns << name[i] << "!" << endl ;		
			a = message(ans); //function call 'welcome message'	
			cout << setw(45) << a << endl ; //displaying function 'message'
			cout << "\t\t\tPlease pick one of the two choices (1 or 2)" << endl ;
			infoClient(); // function call 'test of questions'
			cout << "\t\tYour room number is " << tolower(i+1) << ". " << " Please wait for your number to be called. \n\t\t\t\t\tHave a nice day!\n\n\n\n";
			cout << endl << endl << endl << endl << endl;
				
		}
		
				
		return 0;
	}
	
	
		void infoClient() //function for the set of questions to be answered
		{
			int x, sum=0;
		
				cout << endl;
				cout << "You're waiting in a long line: " << endl;
				cout << "1.You keep your eyes on your phone" << setw(55) << "2.You chat with the person next to you\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nGoing on a day trip to the mountains. " << endl;
				cout << "1.You plan out where to go and what to do."<< setw(42) << "2.You just get in the car and go!\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nYour desk is usually. " << endl;
				cout << "1.super organized." << setw(75) << "2.a jumble of everything you’re working on\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nLet's do things" << endl;
				cout << "1.in the grand way of tradition." << setw(42) << "2.the most logical way.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nBeing at a party with people you don't know. " << endl;
				cout << "1.You're standing at the edge of the room, \nwishing you were at home. \t\t\t  2.You plan out where to go and what to do.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nYou've been assigned a complicated task at work. " << endl;
				cout << "1.You'd like to have all relevant \ninformation before you start. \t\t\t  2.You'll have fun discovering the details as you go.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nYou've been introduced to a friend of a friend. " << endl;
				cout << "1.It will take a few more conversations before \nyou open up. \t\t\t\t\t  2.You become buddies on the spot.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nYour friends would describe you as " << endl;
				cout << "1.a very private person." << setw(48) << "2.a very open person.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nClass projects are far better " << endl;
				cout << "1.when you can work by yourself." << setw(53) << "2.when you can be part of a group.\n";
				cin >> x;
				sum = sum + x;
					
				cout << "\nOn any given weeknight, you would rather " << endl;
				cout << "1.spend the evening by yourself at home." << setw(54) << "2.spend the evening with a group of people.\n";
				cin >> x;
				sum = sum + x;
					
		
				if (sum<=10) // to determine and display what type of personality the client has
					cout << "\n\t\t\t    ********** You are an introvert! *********\n";
				else if (sum <=15)
					cout << "\n\t\t\t    ********** You are an ambivert! **********\n";
				else
					cout << "\n\t\t\t    ********** You are an extrovert! **********\n";
			
		}
		string message(char answer) //function for welcoming message
		{
			string msg;
			
				msg = "\n\tYou may take a few question while waiting for your name to be called.\n" ;
			
			return msg;		
		}
		
	
