#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> g[1001], ev, tour;
void dfs(int u, int p) {
    tour.push_back(u);
    for (int v : g[u])
        if(v != p){ dfs(v,u); tour.push_back(u); }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i=1, u, v; i<n; i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ev.resize(m);
    for(auto &x: ev) cin >> x;
    for(int i=1; i<=n; i++){
        tour.clear();
        dfs(i,0);
        int j=0;
        for (int x : tour)
            if(j < m && x==ev[j]) j++;
        cout << (j==m ? 1 : 0) << "\n";
    }
    return 0;
}
