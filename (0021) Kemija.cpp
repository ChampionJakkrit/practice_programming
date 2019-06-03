#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[101];
    scanf("%[^\n]s", s);
    int len = (int)strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            i += 2;
        }
    }

return 0;
}