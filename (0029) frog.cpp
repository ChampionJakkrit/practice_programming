#include <bits/stdc++.h>   
using namespace std;

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if (y % x == 0)
        printf("%d\n", y/x);
    else if (y % x == y)
        printf("2\n");
    else
        printf("%d\n", (y/x)+1);

    return 0;
}