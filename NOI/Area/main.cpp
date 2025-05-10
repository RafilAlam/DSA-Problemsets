#include <iostream>
#include <vector>
#include <set>
using namespace std;

int N;
int main() {
    cin >> N;
    vector<int> h(N);
    vector<int> w(N);
    multiset<int> area;

    for (int i = 0; i < N; ++i) {
        cin >> h[i] >> w[i];
        area.insert(h[i] * w[i]);
    }

    cout << *area.rbegin();
}