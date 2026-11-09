#include <iostream> 
#include <iomanip> 
#include <string> 
 
using namespace std; 
 
int main() { 
    int choice; 
    int quantity; 
    double price = 0.0; 
    double totalCost = 0.0; 
    string itemName = ""; 
 
    cout << "=========================================== \n"; 
    cout << "      Welcome to AD's Store         \n"; 
    cout << "=========================================== \n"; 
    cout << "[1] KZ Castor In-Ear Monitors  - PHP 799.00 \n"; 
    cout << "[2] UGreen 45W GaN Charger     - PHP 650.00 \n"; 
    cout << "[3] UGreen USB-C DAC           - PHP 450.00 \n"; 
    cout << "[4] Braided Type-C Cable       - PHP 199.00 \n"; 
    cout << "[5] Memory Foam Eartips        - PHP 150.00 \n"; 
    cout << "-------------------------------------------\n"; 
 
    cout << "Enter your product choice (1-5): "; 
    cin >> choice; 
 
    cout << "Enter quantity: "; 
    cin >> quantity; 
 
    if (quantity <= 0) { 
        cout << " \nError: Quantity must be at least 1. \n"; 
        return 1; 
    } 
 
    switch (choice) { 
        case 1: 
            itemName = "KZ Castor In-Ear Monitors"; 
            price = 799.00; 
            break; 
        case 2: 
            itemName = "UGreen 45W GaN Charger"; 
            price = 650.00; 
            break; 
        case 3: 
            itemName = "UGreen USB-C DAC"; 
            price = 450.00; 
            break; 
        case 4: 
            itemName = "Braided Type-C Cable"; 
            price = 199.00; 
            break; 
        case 5: 
            itemName = "Memory Foam Eartips"; 
            price = 150.00; 
            break; 
        default: 
            cout << " \nInvalid choice! Please restart the program and select 1-5. \n"; 
            return 1; 
    } 
 
    totalCost = quantity * price; 
 
    cout << " \n=========================================== \n"; 
    cout << "               ORDER SUMMARY               \n"; 
    cout << "=========================================== \n"; 
    cout << fixed << setprecision(2); 
    cout << "Item Selected : " << itemName << " \n"; 
    cout << "Unit Price    : PHP " << price << " \n"; 
    cout << "Quantity      : " << quantity << " \n"; 
    cout << "-------------------------------------------\n"; 
    cout << "Total Cost    : PHP " << totalCost << " \n"; 
    cout << "=========================================== \n"; 
    cout << " Thank you for shopping at AD's Store!   \n"; 
 
    return 0; 
}