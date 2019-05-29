#include <iostream>
#include <cstring>
#include <sstream>
#include <stdio.h>


using namespace std;

int main()
{
    int p = 0;
    int h = 0;
    int m = 0;
    int t = 0;

    char str[600];
    char hour[100];
    char pay[200];
    char tax[200];
    char paid[200];

    cout << "Enter hours worked and press ENTER: ";
    cin.getline(hour, 100);
    stringstream(hour) >> h;
    cout << "Enter pay rate and press ENTER: ";
    cin.getline(pay, 200);
    stringstream(pay) >> m;
    cout << "Enter tax rate and press ENTER: ";
    cin.getline(tax, 200);
    stringstream(tax) >> t;

    p = (m * h);

    strcpy(str, "\nI worked ");
    strcat(str, hour);
    strcat(str, " hours, I get paid $");
    strcat(str, pay);
    strcat(str, " per hour and the tax rate is $");
    strcat(str, tax);
    strcat(str, ".");


    cout << str << endl;
    cout << "You got paid $" << p << " before tax." << endl;
    return 0;
}
