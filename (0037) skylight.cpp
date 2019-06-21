#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, L, K, c;
    scanf("%d%d%d%d%d", &N, &M, &L, &K, &c);
    int** electricity_bill = new int*[N];
    int sum_ebil = 0;
    for (int i = 0; i < N; i++) {
        electricity_bill[i] = new int[M];
        for (int j = 0; j < M; j++) {
            scanf("%d", &electricity_bill[i][j]);
            sum_ebil += electricity_bill[i][j];
        }
    }
    int all_cost = ((L * K)*c) + sum_ebil;
    int cost_per_person = all_cost/c;
    if (cost_per_person * c == all_cost)
        printf("%d\n", cost_per_person);
    else
        printf("%d\n", cost_per_person+1);



    return 0;
}