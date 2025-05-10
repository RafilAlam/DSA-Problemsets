#include <iostream>
#include <map>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    
    // Use std::map to keep keys in sorted order
    map<int, long long> freq; 
    long long totalSum = 0;
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
        totalSum += x;
    }
    cout << totalSum << "\n";
    
    while(q--){
        int l, r, x;
        cin >> l >> r >> x;
        long long removedCount = 0;
        
        // Iterate over keys in [l, r] using lower_bound
        auto it = freq.lower_bound(l);
        while(it != freq.end() && it->first <= r){
            removedCount += it->second;
            totalSum -= (long long) it->first * it->second;
            it = freq.erase(it);  // Erase and move iterator forward
        }
        
        if (removedCount > 0) {
            freq[x] += removedCount;
            totalSum += (long long) x * removedCount;
        }
        
        cout << totalSum << "\n";
    }
    
    return 0;
}
