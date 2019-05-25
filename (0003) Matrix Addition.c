#include <stdio.h>

int main()
{
    int m, n, matrix_a[100][100], matrix_b[100][100], result[100][100];
    scanf("%d", &m); // แถว
    scanf("%d", &n); // หลัก

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]); // input matrix A
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_b[i][j]); // input matrix B
        }
    }

    for (int i = 0; i < m; i++) { // add matrix A and matrix B
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    for (int i = 0; i < m; i++) { // output
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
            if (j == n-1) { // ถ้าหลักเกินที่รับหลักมา(m) ให้ขึ้นบรรทัดใหม่
                printf("\n");
            }
        }
    }

    return 0;
}