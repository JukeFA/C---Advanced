#include <iostream>

using namespace std;

void double_it(int *p);

int main()
{
    int a = 5, b = 6;

    cout << "Val of a before doubleing: " << a << endl;
    cout << "Val of b before doubleing: " << b << endl;

    double_it(&a);  // Pass address of a.
    double_it(&b);  // Pass address of b.

    cout << "Val of a after doubleing: " << a << endl;
    cout << "Val of a after doubleing: " << b << endl;
}

void double_it(int *p) {
    *p = *p * 2;
}
