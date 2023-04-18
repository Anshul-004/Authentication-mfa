#include<iostream>
#include<string>
#include<fstream>

using namespace std;

// Predefining the functions :
// Login, Registration and Forgot Password. 
int login(); // the login function
int registration(); // the registration funtion
int forgot(); // the forgot password function

int main()
{
    int uchoice;

    cout<<"\t\t\t___*_____*_____  WELCOME  _____*_____*___\n\n"<<endl;
    cout<<"\t\t\t--------------- MAIN MENU ---------------\n"<<endl;
    cout<<"! Press 1 to LOGIN "<<endl;
    cout<<"! Press 2 to REGISTER "<<endl;
    cout<<"! Press 3 to RESET PASSWORD "<<endl;
    cout<<"! Press 4 to EXIT "<<endl;
    cin>>uchoice;
    cout<<endl;
// UI ENDS ABOVE

// Operational Logic starts :
    switch (uchoice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout<<"\t\t\t THANK YOU \n\n\n";
        break;
    
    default:
        cout<<"Please Select the option From the Prompt"<<endl;
        main(); //it will redirect to main function
        break;
    }
    
    return 0;
}

// function definitions from above

int login()
{
    return 0;
}


int registration()
{
    return 0;
}


int forgot()
{
    return 0;
}