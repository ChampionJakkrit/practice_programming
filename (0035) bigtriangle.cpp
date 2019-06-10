#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);    
    int* x = new int[N];
    int* y = new int[N];
    for (int i = 0; i < N; i++) {
        scanf("%d%d", &x[i], &y[i]);
    }
    double mx = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            for (int k = j+1; k < N; k++) {
                double area = abs(x[i]*y[j] + x[j]*y[k] + x[k]*y[i] - y[i]*x[j] - y[j]*x[k] - y[k]*x[i]) / 2.000;
                mx = max(area, mx);
            }
        }
    }
    printf("%.3f\n", mx);

    return 0;
}