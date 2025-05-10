#include <iostream>
#include <set>
using namespace std;
#define ll long long

multiset<ll, greater<ll>> cost;
ll N, K, input;
ll maxcost = 0;
int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; ++i)
    {
        cin >> input;
        cost.insert(input);
    }

    ll count = 0;
    for (auto i = cost.begin(); i != cost.end() && count < K; ++i)
    {
        count++;
        maxcost += *i;
    }
    cout << maxcost;
}