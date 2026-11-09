#include <iostream>

using namespace std;

int main() 
{
    const int mbpergb = 1024;
    double freespacegb;
    int updatesizemb;

    cout << "--- Storage Space Calculator ---" << endl;
    cout << "Enter your current free space in GB: ";
    cin >> freespacegb;

    cout << "Enter the update download size in MB: ";
    cin >> updatesizemb;

    double freespacemb = freespacegb * mbpergb;
    double remainingspacemb = freespacemb - updatesizemb;
    double remainingspacegb = remainingspacemb / mbpergb;

    cout << "\nCalculation Result: " << endl;
    cout << "Initial Free Space: " << freespacegb << " GB (" << freespacemb << " MB)" << endl;
    cout << "Initial Download Size: " << updatesizemb << "MB" << endl;
    cout << "Remaining Free Space: " << remainingspacegb << " GB (" << remainingspacemb << " MB)" << endl;

    return 0;

}