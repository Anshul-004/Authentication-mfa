#include <iostream> 
#include <fstream> // reading and writing files 
#include <string>
#include<time.h>
#include<cstdlib>

using namespace std;

string q1,q2,q3,q4,q5;
int randgen()
{
    int ub, lb;
    ub = 5;
    lb = 1;
	// Use current time as seed for random generator
	srand(time(0));

	cout << (rand() % (ub - lb + 1)) + lb << " ";
}

bool isLoggedIn();

int main()
{
    int choice;

    cout << endl;
    cout << "Main Menu: " << endl;
    cout << "-------------------------------" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> choice; 

    if(choice == 1)
    {
        string username, password,ans1,ans2,ans3,ans4,ans5;
        q1= "What was your first school's name?";
        q2= "What is / was your pet name ?";
        q3= "What was your first Smartphone?";
        q4= "Your favourite colour?";
        q5= "Some place you aspire to visit oneday.";


        cout << "Registration: " << endl;
        cout << endl;
        cout << "Select a username: "; 
        cin >> username;
        cout << "Select a password: ";
        cin >> password;
        // Questionnaire

        cout<<q1<<endl;
        cin>>ans1;
        cout<<q2<<endl;
        cin>>ans2;
        cout<<q3<<endl;
        cin>>ans3;
        cout<<q4<<endl;
        cin>>ans4;
        cout<<q5<<endl;
        cin>>ans5;

        ofstream file; // ofstream creates a file
        file.open(username + ".txt"); 
        file << username << endl << password << ans1 << endl << ans2 << endl << ans3 << endl << ans4 << endl << ans5; // writes all the details to the file.
        file.close();
        cout << "Welcome " << username << "!" << endl;
    }

    else if(choice == 2) // if user chooses to login
    {
        bool status = isLoggedIn();

        if(!status) // if isLoggedIn() returns false
        {
            system("cls");
            cout << endl;
            cout << "Invalid login!" << endl;
            main();
            return 0;
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "Successfully logged in!" << endl;
            cout << endl;

            int choiceTwo;

            // Display dashboard:
            cout << "Welcome back!" << endl;
            cout << endl;
            cout << "DASHBOARD" << endl;
            cout << "No new messages." << endl; // example of what could appear on the user's dashboard
            cout << endl;
            cout << "1. Sign Out" << endl;
            cout << "2. Back to main menu" << endl;
            cout << "Your choice: " << endl;
            cin >> choiceTwo;

            if(choiceTwo == 1)
            {
                system("exit"); // exits program 
            }
            else if(choiceTwo == 2)
            {
                main(); // returns to the beginning of the main() function
            }
            return 1;
        }
    }
}

bool isLoggedIn()
{
    // extern string q1;
    string username, password;
    string un, pw, ua1, ua2, ua3, ua4, ua5; // comparison strings

    cout << "Enter a username: ";
    cin >> username; 
    cout << "Enter a password: ";
    cin >> password;
    cout<<q1;  //declare a global variable

    ifstream read(username + ".txt"); // ifstream reads a file 
    getline(read, un); // reads the username 
    getline(read, pw); // reads the password
    getline(read, ua1);

    if(un == username && pw == password) // if both un & username and pw & password are the same, true
    {
        return true;
    }
    else
    {
        return false;
    }
}