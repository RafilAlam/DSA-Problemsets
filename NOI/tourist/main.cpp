#include <iostream>
using namespace std;

int n, x, y, input;
int tripSum, Sum = 0;
int main()
{
    cin >> n >> x >> y;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        tripSum = input * x;

        if (tripSum < y)
        {
            Sum += tripSum;
        }
        else
        {
            Sum += y;
        }
    }
    cout << Sum;
}