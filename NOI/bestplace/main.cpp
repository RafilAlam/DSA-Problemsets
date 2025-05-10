#include <iostream>
using namespace std;

#define ll long long

ll N;
int main()
{
    cin >> N;
    ll X = 0, Y = 0;
    ll Xi, Yi;

    ll i;
    for (i = 0; i < N; i++)
    {
        cin >> Xi >> Yi;
        X += Xi;
        Y += Yi;
    }

    cout << X / i << " " << Y / i;
}