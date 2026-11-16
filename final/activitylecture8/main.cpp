#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string separator = "**************************************";
    string line = "--------------------------------------";
    string password;

    cout << separator << endl;
    cout << setw(25) << "STUDENT LOGIN" << endl;
    cout << separator << endl;

    cout << "Enter Password: ";
    cin >> password;
    cout << endl;

    while (password != "asdfg123") {

        cout << "Incorrect password!" << endl;
        cout << "Please try again: ";
        cin >> password;
        cout << endl;
    }

    cout << "Login Successful!" << endl;
    cout << endl;

    cout << separator << endl;
    cout << setw(30) << "STUDENT GRADE REPORT" << endl;
    cout << separator << endl;

    cout << "Name: Aaron Dave G. Garabel" << endl;
    cout << "Year and Section: BSIT 1C" << endl;

    cout << separator << endl;
    cout << setw(25) << "SUBJECT GRADES" << endl;
    cout << separator << endl;

    cout << "Programming 1" << right << setw(25) << "95" << endl;
    cout << "Database" << right << setw(30) << "87" <<endl;
    cout << "Networking" << right << setw(28) << "80" << endl;
    cout << "Operating System" << right << setw(22) << "85" << endl;
    cout << "NSTP" << right << setw(34) << "90" << endl;
    cout << line << endl;
    cout << "Total: 437" << endl;
    cout << "Average: 87.4" << endl;
    cout << "Overall Remarks: PASSED" << endl;

    return 0;
}