#include <iostream>
#include <set>
#define ll long long
#define maxn 200000
using namespace std;

ll n, d, first, ans, a[maxn];
multiset<ll, greater<ll>> pq;

int main() {
    cin >> n >> d >> first;
    for (int i=0; i<n-1; i++) {
        cin >> a[i];
        pq.insert(a[i]);
    }
    for (int i=0; i<n-1; i++) {
        ans+=*pq.begin();
        pq.erase(pq.find(a[i]));
    }
    cout << ans;
}