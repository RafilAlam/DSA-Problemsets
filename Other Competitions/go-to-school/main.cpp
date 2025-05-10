#include <iostream>
using namespace std;
#define ll long long

ll N, input;
int main() {
    cin >> N;
    ll students[3];
    for (ll i = 0; i < N; ++i) {
        cin >> input;
        students[i] = input;
    }
    
    for (ll i = 0; i < N; ++i) {
        cout << students[students[i]-1] << " ";
    }
}