#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

const ll maxn = 2e5+5;
int N, arr[maxn];
ll out=0;
int main() {
	cin >> N;
	for (int i=0; i<N; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr+N, greater<>());
	for (int i=0; i<(N+1)/2; ++i) {
		if(arr[i]<0) break;
		out+=arr[i];
	}
	cout << out;
}	