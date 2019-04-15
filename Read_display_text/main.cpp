#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    //using ifstream to input file stream from a text file
    ifstream myfile("example.txt");

    if (myfile.is_open()) {
        while (! myfile.eof()){
            getline (myfile,line);
            cout << line << endl;
        }
        myfile.close();
    }
    else cout << "Can't open file";
    return 0;
}
