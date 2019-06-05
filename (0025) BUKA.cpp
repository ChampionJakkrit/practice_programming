#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1[105], s2[105], oper[5];
    scanf("%s%s%s", s1, oper, s2);
    int len_s1 = (int)strlen(s1), len_s2 = (int)strlen(s2); 
    int mx_ary = max(len_s1, len_s2);
    int mn_ary = min(len_s1, len_s2);
    char result_plus[mx_ary+1]; // +1 for null charactor
    if (oper[0] == '+') {
        swap(s1[0], s1[len_s1-1]);
        swap(s2[0], s2[len_s2-1]);
        for (int i = 0; i < mn_ary; i++) {
            // int ans_in_i = (s1[i]-'0') + (s2[i]-'0'); // 48 = ascii of 0
            // int ans_in_i;
            if (s1[i] == '0' && s2[i] == '0')
                result_plus[i] = '0';
                // ans_in_i = 0;
            else if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
                result_plus[i] = '1';
                // ans_in_i = 1;
            else
                result_plus[i] = '2';
                // ans_in_i = 2;
            // result_plus[i] = ans_in_i+'0';
        }
        if (len_s1 > len_s2) {
            for (int i = mn_ary; i < len_s1; i++) {
                result_plus[i] = s1[i];
            }
            result_plus[len_s1] = '\0';
        }
        else if (len_s2 > len_s1) {
            for (int i = mn_ary; i < len_s2; i++) {
                result_plus[i] = s2[i];
            }
            result_plus[len_s2] = '\0';
        } 
        else {
            result_plus[mx_ary] = '\0';
        }
        for (int i = 0; i < mx_ary/2; i++) { // reverse ary
            swap(result_plus[i], result_plus[mx_ary-1-i]);
        }
        printf("%s\n", result_plus);
    }
    else { // oper[0] == '*'
        printf("1");
        for (int i = 0; i < len_s1-1 + len_s2-1; i++) {
            printf("0");
        }
    }

    return 0;
}
