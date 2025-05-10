#include <iostream>
using namespace std;

#define ll long long

int paper;
ll a, b;
int main() {
    cin >> paper;
    if (paper == 1) {
        cout << "Hello World";
    } else if (paper == 2) {
        cin >> a >> b;
        cout << a*b;
    }
}