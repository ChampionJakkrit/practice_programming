#include <bits/stdc++.h>
using namespace std;

char str[1000005];

int main() {
    scanf("%s", str);
    int len = (int)strlen(str);
    int sum3 = 0, sum11 = 0;
    for (int i = 0; i < len; i++) {
        int real_int = str[i] - '0';
        sum3 += real_int;
    }
    for (int i = len-1; i >= 0; i -= 2) {
        int real_int = (str[i] - '0') + (len % 2 == 1 && i == 0 ? 0: (str[i-1] - '0')*10);
        // (condition ? a : b) if condition is ture return a else return b
        sum11 += real_int;
    }
    printf("%d %d",sum3 % 3, sum11 % 11);

    return 0;
}