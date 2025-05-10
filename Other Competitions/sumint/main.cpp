#include <iostream>
using namespace std;

#define ll long long

int d;
int Sum;
int input;
int main() {
    cin >> d;

    for (int i = 0; i < d; ++i) {
        cin >> input;
        Sum += input;
    }
    cout << Sum;
}