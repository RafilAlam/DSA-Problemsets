#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll H, N;
ll CurrH = 0;
vector<ll> P;
ll NetMovement;
ll Days = 0;
ll input;
int main()
{
    cin >> H >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> input;
        P.push_back(input);
        NetMovement += input;
    }

    if (NetMovement <= 0)
    {
        cout << -1 << " " << -1;
        return 0;
    }

    while (CurrH < H)
    {
        for (int i = 0; i < N; ++i)
        {
            CurrH += P[i];
            if (CurrH >= H)
            {
                cout << Days << " " << i;
                return 0;
            }
        }
        Days++;
    }
}