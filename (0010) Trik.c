#include <stdio.h>
#include <string.h>


int main()
{
    char str[50];
    int left = 1, mid = 2, right = 3, curr, temp;
    scanf("%s", str);
    curr = left;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A' && curr == left) { // สลับ 1(curr) กับ 2
            temp = left;
            left = mid;
            mid = temp;
            curr = mid; // หมุนแล้วจะอยู่ตรงกลาง
        }
        else if (str[i] == 'C' && curr == left) { // สลับ 1(curr) กับ 3
            curr = left;
            left = right;
            right = curr;
            curr = right;
        }
        else if (str[i] == 'B' && curr == mid) { // สลับ 2(curr) กับ 3
            temp = mid;
            mid = right;
            right = temp;
            curr = right;
        }
        else if (str[i] == 'C' && curr == right) { // สลับ 3(curr) กับ 1
            temp = right;
            right = left;
            left = temp;
            curr = left;
        }
        else if (str[i] == 'B' && curr == right) { // สลับ 3(curr) กับ 2
            curr = right;
            right = mid;
            mid = curr;
            curr = mid;
        }
        else if (str[i] == 'A' && curr == mid) { // สลับ 2(curr) กับ 1
            curr = mid;
            mid = left;
            left = curr;
            curr = left;
        } 
    }
    if (str[strlen(str)-1]) { // หมุนรอบสุดท้าย
            if (curr == right)
                printf("3\n");
            else if (curr == mid)
                printf("2\n");
            else if (curr == left)
                printf("1\n");
            }

    return 0;
}