#include <stdio.h>
#include <algorithm>
using namespace std;

int a, b;
int main() {
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", max(a, b));
}