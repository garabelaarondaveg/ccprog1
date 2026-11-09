#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string fullname, studentnumber, program, yearandsection;

    cout << "Enter Full Name: ";
    getline(cin, fullname);

    cout << "Enter Student Number: ";
    cin >> studentnumber;

    cout << "Enter Program(BSIT/BSCpE): ";
    cin >> program;

    cout << "Enter Year & Section: " ;
    cin >> yearandsection;

    double firstgradingscore, secondgradingscore, thirdgradingscore;

    cout << "Enter First Grading Score: ";
    cin >> firstgradingscore;

    cout << "Enter Second Grading Score: ";
    cin >> secondgradingscore;

    cout << "Enter Third Grading Score: ";
    cin >> thirdgradingscore;

    string line = "===================================================";
    string line1 = "---------------------------------------------------";

    cout << "\n" << line << endl;
    cout << setw(35) << "STUDENT GRADE REPORT" << endl;
    cout << line << endl;
    cout << left
         << setw(26) << "Student Name: " 
         << right << setw(10) << fullname << endl;
    cout << left
         << setw(24) << "Student Number: " 
         << right << setw(10) << studentnumber << endl;
    cout << left
         << setw(20) << "Program: "
         << right << setw(10) << program << endl;
    cout << left
         << setw(15) << "Year And Section: " 
         << right << setw(10) << yearandsection << endl;

    cout << "\n" << line1 << endl;
    cout << left
         << setw(21) << "GRADING COMPONENT"
         << right << setw(10) << "SCORE" << endl;
    cout << line1 << endl;
    cout << left
         << setw(26) << "First Grading" << fixed << setprecision(2) << firstgradingscore << endl;
    cout << left
         << setw(26) << "Second Grading" << fixed << setprecision(2) << secondgradingscore << endl;
    cout << left
         << setw(26) << "Third Grading" << fixed << setprecision(2) << thirdgradingscore << endl;
    cout << line1 << endl;
    
    double denominator = 3;
    double result = firstgradingscore + secondgradingscore + thirdgradingscore;
    double finalresult = result / denominator;
    
    cout << left
         << setw(21) << "Average"
         << right << setw(10) << fixed << setprecision(2) << finalresult << endl;
    cout << line << endl;
    return 0;
}