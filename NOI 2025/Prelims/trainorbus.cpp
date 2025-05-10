#include <iostream>
#include <algorithm>
#define maxn 10
using namespace std;

int n, a[maxn], b, ans=0;
int main() {
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        cin >> b;
        ans+=min(a[i], b);
    }
    cout << ans;
}