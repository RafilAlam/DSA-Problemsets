#include <iostream>
#include <map>
using namespace std;
map<int, string, greater<int>> grademap = {
	{91, "A*"}, {75, "A"}, {60, "B"}, {50, "C"}, {35, "D"}, {20, "E"}, {0, "U"}
};

int s;
int main() {
	cin >> s;
	cout <<grademap.lower_bound(s)->second;
}