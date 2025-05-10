#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
#define maxn 1000
#define ll long long
using namespace std;
typedef tuple<int, int, int> iii;

priority_queue<iii, vector<iii>, greater<iii>> pq;
ll n, s, a[maxn][maxn], mx=0, ans=INT_MAX;
int main() {
    cin >> n >> s;

    for (int i=0; i<n; i++) {
        for (int j=0; j<s; j++) {
            cin >> a[i][j];
        }
        sort(a[i], a[i]+s);
        pq.push({a[i][0], i, 0});
        mx=max(mx, a[i][0]);
    }

    while(true) {
        auto[val, i, j] = pq.top();
        pq.pop();
        ans=min(ans, mx-val);
        if (j==s-1) break;
        ll nval = a[i][j+1];
        mx=max(mx, nval);
        pq.push({nval, i, j+1});
    }

    cout << ans;
}