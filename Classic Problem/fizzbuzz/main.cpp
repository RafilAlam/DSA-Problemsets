#include <iostream>
using namespace std;

int N, A, B;
bool isaMultiple;
int main() {
    cin >> N >> A >> B;

    for (int i = 1; i <= N; ++i) {
        isaMultiple = false;
        if (i%A == 0) {
            cout << "Fizz";
            isaMultiple = true;
        }
        if (i%B == 0) {
            cout << "Buzz";
            isaMultiple = true;
        }

        if (!isaMultiple) {
            cout << i;
        }

        cout << endl;
    }
}