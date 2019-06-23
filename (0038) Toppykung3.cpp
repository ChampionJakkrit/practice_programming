#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> s;
    int n; cin >> n;
    while (n--) {
        string a; cin >> a;
        s.insert(a);
    }
    for (auto mem : s) {
        cout << mem << "\n";
    }
    return 0;
}
