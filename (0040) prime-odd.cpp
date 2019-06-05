#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    char* str = new char[1005];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int len = (int)strlen(str);
        if (str[len-1] % 2 == 1 || (str[0] == '2' && len == 1)) // (str[0] == '2' && str[1] == '\0')
            printf("T\n");
        else
            printf("F\n");

    }

    return 0;
}