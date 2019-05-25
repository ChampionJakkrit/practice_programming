#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num[10], count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42;
    }
    for (int r = 0; r < 9; r++) {
        for (int i = 1; i < 10; i++) {
            int left = i-1;
            int right = i;
            if (num[left] > num[right]) {
                swap(&num[left], &num[right]);
            }
        }
    }   
    for (int c = 0; c < 9; c++) {
        if (num[c] != num[c+1])
            count++;
    }
    printf("%d\n", count+1);
    return 0;
}