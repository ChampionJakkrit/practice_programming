#include <stdio.h>
#include <string.h>

#define SWAP(T, a, b) do { T temp = a; a = b; b = temp; } while (0)

int main()
{
    int result[2];
    char str[50];
    scanf("%s", str);
    result[0] = 1;
    result[1] = 0;
    result[2] = 0;

    for(int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A') {
            SWAP(int, result[0], result[1]);
        }
        else if (str[i] == 'B') {
            SWAP(int, result[1], result[2]);
        }
        else if (str[i] == 'C') {
            SWAP(int, result[0], result[2]);
        }
    }
    if (result[0] == 1)
        printf("1\n");
    else if (result[1] == 1)
        printf("2\n");
    else 
        printf("3\n");


    return 0;
}