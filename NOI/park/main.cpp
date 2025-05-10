#include <iostream>
#include <vector>
using namespace std;
#define ll long long;

struct Group {
    int ID;
    int Size;
    int canSplit;
    int inQueue = 1;
};

int Q, input;
int K = 0;
int main() {
    cin >> Q;
    int joinCount = 0;
    vector<Group> queue(Q);
    vector<Group> boarded;
    for (int i=0; i<Q; ++i) {
        cin >> input;
        if (input == 1) {
            Group grp;
            cin >> grp.Size >> grp.canSplit;
            queue[joinCount] = grp;
            joinCount++;
        } else if (input == 2) {
            cin >> input;
            queue[input-1].inQueue = 0;
        } else if (input == 3) {
            cin >> input;
            for (int j=0; j<queue.size(); ++j) {
                if (queue[j].inQueue == 1 && queue[j].Size <= input) {
                    K++;
                    queue[j].inQueue = 0;
                    if (input == queue.size()) {
                        break;
                    } else {
                        input -= queue[j].Size;
                        Group grp;
                        grp.ID = j+1;
                        grp.Size = queue[j].Size;
                        boarded.push_back(grp);
                    }
                } else if (queue[j].inQueue == 1 && queue[j].Size > input && queue[j].canSplit == 1) {
                    K++;
                    queue[j].Size -= input;
                    break;
                }
            }
        }
    }
    cout << K << endl;
    if (K>0) {
        for (int i=0; i<K; ++i) {
            cout << boarded[i].ID << " " << boarded[i].Size;
        }
    }
}