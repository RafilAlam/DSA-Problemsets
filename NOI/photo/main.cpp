#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, S, Diff, input;
int tallest = 0;
int largestDiff = 0;
int main() {
    cin >> N >> S;
    for (int i=0; i<N; ++i) {
        if (i==0) {
            for (int j=0; j<S; ++j) {
                cin >> input;
                if (input > tallest) {
                    tallest = input;
                }
            }
        } else {
            int smallestDiff = 100;
            for (int j=0; j<S; ++j) {
                cin >> input;
                Diff = tallest-input;
                if (Diff < smallestDiff) {
                    smallestDiff = Diff;
                }
            }
            if (smallestDiff > largestDiff) {
                largestDiff = smallestDiff;
            }
        }
    }
    cout << largestDiff;
}