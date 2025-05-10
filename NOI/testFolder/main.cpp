#include <iostream>
#include <vector>
#define maxn 2e5+5
using namespace std;
typedef pair<int, int> ii;

struct group {
	int id, s, w;
};
vector<group> grps(maxn);
vector<ii> boarded(maxn);
int q, target, joins=0, boards=0, inp, k=0;
int main() {
	cin >> q;
	for (int i=0; i<q; ++i) {
		cin >> inp;
		if (inp==1) {
			++joins;
			group grp;
			grp.id = joins;
			cin >> grp.s >> grp.w;
			grps[joins-1]=grp;
		} else if (inp==2) {
			cin >> inp;
			grps[inp-1].s = 0;
		} else if (inp==3) {
			cin >> inp;
			target = grps.size()-1;
			int ran=0;
			while (inp>0 && ran<joins) {
				++ran;
				if (grps[target].s <= inp) {
					inp-=grps[target].s;
					boarded[boards]={grps[target].id, grps[target].s};
					grps[target].s=0;
					++boards;
					k++;
				} else if (grps[target].w==1) {
					grps[target].s-=inp;
					boarded[boards]={grps[target].id, inp};
					++boards;
					k++;
					break;
				}
				--target;
			}
			cout << k << endl;
			for (int i=0; i<k; ++i) {
				auto[id, s] = boarded[i];
				cout << id << s << endl;
			}
			k=0;
			boards=0;
		}
	}
}