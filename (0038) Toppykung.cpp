#include <bits/stdc++.h>
using namespace std;

bool less_than(char s1[], char s2[]) {
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int mn = min(len_s1, len_s2);
    for (int i = 0; i < mn; i++) {
        if (s1[i] < s2[i]) {
            return true;
        }
        else if (s1[i] == s2[i]) { 
            continue;
        }
        else
            return false;
    }
    if (len_s1 == len_s2)
        return false;
    if (len_s1 > len_s2) // s1 เหลือ
        return false;
    return true; // s2 เหลือ
}

bool equal(char s1[], char s2[]) {
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    if (len_s1 == len_s2) {
        for (int i = 0; i < len_s1; i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }
        return true;
    }
    else
        return false;
}

int main() {
    int N;
    scanf("%d", &N);
    char** str = new char*[N+1];
    str[N] = new char[35];
    fill(str[N], str[N]+35, 'z'); // str[N] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    for (int i = 0; i < N; i++) {
        str[i] = new char[35];
        scanf("%s", str[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            char* temp = new char[35];
            if (less_than(str[j+1], str[j])) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }    

    for (int i = 0; i < N; i++) {
        if (equal(str[i], str[i+1])) {
            continue;
        }
        else
            printf("%s\n", str[i]);
    }
    return 0;
}