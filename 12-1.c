#include <stdio.h>
#include <stdlib.h>

int main() {
    int answer[3], myNum[3];
    int i, j;
    int count = 1, strike, ball;

    printf("숫자야구의 정답을 입력하세요 : ");
    scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
    printf("\n");

    while (1) {
        printf("[%d회차]\n", count++);
        printf("0부터 9까지 숫자를 3개 입력 : ");
        scanf("%d %d %d", &myNum[0], &myNum[1], &myNum[2]);

        ball = 0;
        strike = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (answer[i] == myNum[j])
                    if (i == j)
                        strike++;
                    else
                        ball++;
            }
        }
        if (strike != 3) {
            printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strike, ball);
        }
        if (strike == 3) {
            printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strike, ball);
            printf("사용자가 승리하였습니다.\n");
            break;
        }
        else if (count == 8) {
            printf("컴퓨터가 승리하였습니다.");
            break;
        }
    }
}