#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    // creating the dictonary
    map<string, string>dict = { {"your_username", "password-auth1"} }; //maps the username and password to randomly generated sequels
    string username, password;
    cout<<"Enter username: "<<endl;
    cin>>username;
    cout<<"Enter password: "<<endl;
    cin>>password;
    // Checks if provided username and password matches with the one in dictonary
    if(dict.find(username) != dict.end() && dict[username] == password)  // if username doesn't returns the end string(i.e. not found), it is valid, and if password matches, login granted
    {
        cout<<"Logged in Successfully!";
    } 
    else {
        cout<<"Invalid Credentials"<<endl;
        cout<<"Please check your username and password";
    }
    return 0;
}
