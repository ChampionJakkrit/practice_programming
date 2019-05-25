#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[10000];
    int len;
    int foundUpper = 0;
    int foundLowper = 0;
    scanf("%s", input);
    len = strlen(input);
    for (int i = 0; i <= len; i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z')) {
            foundUpper = 1;
        }

        else if ((input[i] >= 'a' && input[i] <= 'z')) {
            foundLowper = 1;
        }
    }
    if (foundLowper == 1 && foundUpper == 1)
        printf("Mix\n");
    else if (foundUpper == 1)
        printf("All Capital Letter\n");
    else if (foundLowper == 1)
        printf("All Small Letter\n");
    return 0;
}