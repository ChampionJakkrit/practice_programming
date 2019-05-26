#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[10], count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }
    sort(num, num+10);
    for (int c = 0; c < 9; c++) {
        if (num[c] != num[c+1])
            count++;
    }
    printf("%d\n", count+1);
    return 0;
}