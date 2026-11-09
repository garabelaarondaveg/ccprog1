#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter Name: ";
    getline(cin, name);

    string program;
    cout << "Enter Program: ";
    getline(cin, program);

    string yearandsection;
    cout << "Enter Year & Section: ";
    getline(cin, yearandsection);

    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
    cout << "Year And Section: " << yearandsection << endl;

    return 0;
}