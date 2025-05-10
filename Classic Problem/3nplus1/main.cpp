#include <iostream>
using namespace std;

#define ll long long

ll input;
int main()
{
    cin >> input;

    while (input > 1)
    {
        cout << input << " ";
        if (input % 2 == 0)
        {
            input /= 2;
        }
        else
        {
            input = (3 * input) + 1;
        }
    }
    cout << input;
}