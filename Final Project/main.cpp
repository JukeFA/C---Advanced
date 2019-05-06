#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[600];
    char hour[100];
    char pay[200];
    char tax[200];
    char paid[200];

    int paid = 0;
    int hour = 0;
    int pay = 0;
    int tax = 0;

    // Get three strings from from the user.

    cout << "Enter hours worked and press ENTER: ";
    cin.getline(hour, 100);
    cin >> hour;
    cout << "Enter pay rate and press ENTER: ";
    cin.getline(pay, 200);
    cin >> pay;
    cout << "Enter tax rate and press ENTER: ";
    cin.getline(tax, 200);
    cin >> tax;
    
    //multiply the pay rate

    int paid = int pay * int hour;

    // Build the output string, and then print it.

    strcpy(str, "\nI worked ");
    strcat(str, hour);
    strcat(str, "I get paid $");
    strcat(str, pay);
    strcat(str, ",\nper hour and the tax rate is $ ");
    strcat(str, tax);
    strcat(str, ". ");
    strcat(str, paid);
    strcat(str, "\nwas deposited in my account.");

    cout << str << endl;
    return 0;
}
