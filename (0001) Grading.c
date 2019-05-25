#include <stdio.h>

void cal_grade(int a, int b, int c)
{
    int all_score;
    all_score = a + b + c;
    if (all_score >= 0 && all_score < 50)
        printf("F\n");
    else if (all_score >= 50 && all_score < 55)
        printf("D\n");
    else if (all_score >= 55 && all_score < 60)
        printf("D+\n");
    else if (all_score >= 60 && all_score < 65)
        printf("C\n");
    else if (all_score >= 65 && all_score < 70)
        printf("C+\n");
    else if (all_score >= 70 && all_score < 75)
        printf("B\n");
    else if (all_score >= 75 && all_score < 80)
        printf("B+\n");
    else if (all_score >= 80 && all_score <= 100)
        printf("A\n");
    else
        return;
}

int main()
{
    int score1, score2, score3;
    scanf("%d", &score1);
    scanf("%d", &score2);
    scanf("%d", &score3);
    cal_grade(score1, score2, score3);

    return 0;
}