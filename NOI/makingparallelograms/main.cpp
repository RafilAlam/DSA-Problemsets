#include <iostream>
#include <algorithm>
#define ll long long
#define maxn 1000000
using namespace std;

ll n, l[maxn], ptr=-1, pir=0, ans=0;
int main() {
	cin >> n;
	for (ll i=0; i<n; ++i) {
		cin >> l[i];
	}
	sort(l, l+n);
	for (ll i=0; i<n; ++i) {
		if (ptr==-1) {
			ptr=l[i];
			continue;
		}
		if (l[i] == ptr) {
			pir++;
			ptr=-1;
		} else {
            ptr=l[i];
			continue;
		}
		if (pir==2) {
			pir=0;
			ans++;
		}
	}
	cout << ans;
}