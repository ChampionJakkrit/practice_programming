#include <bits/stdc++.h>
using namespace std;

typedef struct {
    char name[21];
    int score;
    int goalWin;
    int goalLose;
}teamsb;

int main() {
    teamsb team[4];          //ข้อมูลแต่ละทีม
    int table[4][4];         //ตารางคะแนน 4x4
    int i,j;                 //counter, Swap ตัวเลขเพื่อจัดอันดับ

    for (i = 0; i < 4; i++) {
        team[i].score = 0;
        team[i].goalWin = 0;
        team[i].goalLose = 0;
    }
    scanf("%s",team[0].name);
    scanf("%s",team[1].name);
    scanf("%s",team[2].name);
    scanf("%s",team[3].name);

    for (i = 0; i < 4; i++) {
        scanf("%d %d %d %d",&table[i][0],&table[i][1],&table[i][2],&table[i][3]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i != j) {
                team[i].goalWin += table[i][j];          //นับประตูได้-เสีย
                team[i].goalLose += table[j][i];
                team[j].goalWin += table[j][i];
                team[j].goalLose += table[i][j];

                if (table[i][j] == table[j][i] && i < j) {    //คะแนนเสมอ
                    team[i].score += 1;
                    team[j].score += 1;
                }
                else if (table[i][j] > table[j][i]) {       //คะแนนชนะ (แพ้ได้ 0 ไม่ทำอะไร)
                    team[i].score += 3;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (team[j].score < team[i].score) {
                teamsb temp = team[i];
                team[i] = team[j];
                team[j] = temp;
            }
            else if (team[j].score == team[i].score) {
                if (team[j].goalWin - team[j].goalLose < team[i].goalWin - team[i].goalLose) {
                    teamsb temp = team[i];
                    team[i] = team[j];
                    team[j] = temp;
                }
                else if (team[j].goalWin - team[j].goalLose == team[i].goalWin - team[i].goalLose) {
                    if (team[j].goalWin < team[i].goalWin) {
                        teamsb temp = team[i];
                        team[i] = team[j];
                        team[j] = temp;
                    }
                }

            }
        }
    }
    for (i = 0; i < 4; i++) {
        printf("%s %d\n",team[i].name,team[i].score);
    }

    return 0;
}