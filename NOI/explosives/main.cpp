#include <__msvc_all_public_headers.hpp>
#define ll long long
using namespace std;

const ll maxn = 1000000;

int F, climit, farr[maxn], marr[maxn], cost[maxn], steps[maxn];
int curr=0;
int main() {
	cin >>	F >> climit;
	for (int i=0; i<F; ++i) {
		cin >> farr[i];
	}
	sort(farr, farr+F);
	for (int i=0; i<F; ++i) {
		cin >> marr[i];
	}
	sort(marr, marr+F);
	int cinv=0, step=0;
	int cheapest = maxn;
	while(true) {
        if (step==(F*2)-1) break;
		if (cinv == 0) {
			curr = farr[(sizeof(farr)/sizeof(farr[0]))-1];
			steps[step]=curr;
			step++;
		} else if (cinv < climit) {
			switch(abs(curr - farr[0]) <= (curr - marr[0])) {
				case true: 
					++cinv;
					cheapest = farr[0];
				case false:
					cheapest = marr[0];
			}
			steps[step]=cheapest;
			step++;
		}
	}
    cout << step << endl;
	for (int i=0; i<(sizeof(steps)/sizeof(steps[0])); ++i) {
		cout << steps[i] << " ";
	}
}