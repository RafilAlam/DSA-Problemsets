#include <iostream>
#include <algorithm>
#define maxn 100000
using namespace std;

int n, maxb=0, ans=0;
pair<int, int> arr[maxn];
int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr+n, greater<pair<int, int>>());
	for (int i=0; i<n; i++) {
		if (arr[i].second>maxb) {
			maxb=arr[i].second;
			ans++;
		}
	}
	cout << ans;
}