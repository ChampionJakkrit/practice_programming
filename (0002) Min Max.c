#include <stdio.h>

int main()
{
    int max_input, number, max, min, curr;
    scanf("%d", &max_input);
    for (int i = 0; i < max_input; i++) {
        scanf("%d", &number);
        if (i == 0) { // ตัวแรก
            max = number; // max = min
            min = max;
        }
        else { // ตัวที่ 2 เป็นต้นไป
            curr = number;
            if (curr >= max) {
                max = curr;
            }
            if (curr <= min) {
                min = curr;
            }
        }
    }
    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}