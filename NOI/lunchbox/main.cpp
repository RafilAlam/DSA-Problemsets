#include <iostream>
#include <set>
using namespace std;

int n, m;
multiset<int> ReqFood;

int main()
{
    cin >> n >> m;

    int currFood;
    for (int i = 0; i < m; i++)
    {
        cin >> currFood;
        ReqFood.insert(currFood);
    }

    int foodGiven = 0;
    int count = 0;
    for (auto i = ReqFood.begin(); i != ReqFood.end(); i++)
    {
        foodGiven += *i;
        if (foodGiven > n)
        {
            cout << count;
            return 0;
        }
        count++;
    }
    cout << count;
    return 0;
}