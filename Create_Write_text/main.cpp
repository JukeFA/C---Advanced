#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //using ofstream to output strings to a text file
    ofstream myfile ("example.txt");
    if (myfile.is_open()){
        myfile << "This is a test.\n";
        myfile << "I am learning C++.\n";
        myfile.close();
    }
    else cout << "Can't open file";
    return 0;
}
