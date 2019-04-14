#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_0toN1(int n);
int hits[10];

int main()
{
    int n = 0;
    int r = 0;

    srand(time(NULL));
    cout << "Enter how many trials and press ENTER: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        r = rand_0toN1(10);
        ++hits[r];
    }
    for (int i = 0; i < 10; ++i) {
        cout << i << ": " << hits[i] << " Accuracy: ";
        double results =  hits[i];
        cout << results / (n / 10.0) << endl;
    }
    return 0;
}
int rand_0toN1(int n) {
    return rand() % n;
}
