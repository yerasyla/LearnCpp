#include <iostream>

using namespace std;

int main(){

    string user; 
    string pass;
    cout << "Enter name\n"; 
    cin >> user;
    cout << "Enter password\n"; 
    cin >> pass;

    if (user == "admin" && pass == "admin"){
        cout << "\nHello " << user << "\n";
    }
    else
    {
        cout << "Wrong password\n";
    }
    
    return 0;
}