#include <iostream>
#include <algorithm>
using namespace std;

int n, t, x ,y,ans=0;
int main() {
    cin >> n >> x >> y;
    for (int i=0; i<n; i++) {
        cin >> t;
        ans+=min(t*x, y);
    }
    cout << ans;
}