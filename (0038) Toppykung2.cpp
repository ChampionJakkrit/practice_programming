#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string* word = new string[n+1]; // string == char*
    for (int i = 0; i < n; ++i) {
        cin >> word[i];
    }
    word[n].resize(35, 'z'); // make word[n] = "zzzzzzzzzzzzzzzzzzzzzzzz";
    sort(word, word + n);
    for (int i = 0; i < n; ++i) {
        if (word[i] != word[i+1])
            cout << word[i] << "\n";
    }

    return 0;
}