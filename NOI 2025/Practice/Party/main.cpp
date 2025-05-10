#include <iostream>
#include <algorithm>
#define ll long long
#define maxn 200000
using namespace std;

ll n, a[maxn], ans=0;
int main() {
    cin >> n;
    for (ll i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<>());
    for (ll i=0; i<(n+1)/2; i++) {
        if (a[i]<0) break;
        ans+=a[i];
    }
    cout << ans;
}