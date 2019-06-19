#include <bits/stdc++.h>
using namespace std;

int main() {
    char* str = new char[20];
    scanf("%s", str);
    int len = (int)strlen(str);
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= ((len-1)*4)+5; j++) {
            if (i == 1 || i == 5) {
                if ((j - 11) % 12 == 0)
                    printf("*");
                else if ((j - 3) % 4 == 0)
                    printf("#");
                else
                    printf(".");
            }
            else if (i == 2 || i == 4) {
                if (((j - 10) % 12 == 0 || (j - 12) % 12 == 0))
                    printf("*");
                else if (j % 2 == 0)
                    printf("#");
                else
                    printf(".");
            }
            else {
                if (((j - 9) % 12 == 0 || (j - 13) % 12 == 0) && j != 1) {
                    if (j == ((len-1)*4)+5 && len % 3 == 2)
                        printf("#");
                    else
                        printf("*");
                }
                else if ((j - 5) % 4 == 0)
                    printf("#");
                else if (((j - 3) % 4) == 0)
                    printf("%c", str[(j - 3) / 4]);
                else
                    printf(".");
            }
        }
        printf("\n");  
    }

    return 0;
}