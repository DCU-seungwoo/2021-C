#include <stdio.h>
#include <stdlib.h>

int main() {
    int answer[3], myNum[3];
    int i, j;
    int count = 1, strike, ball;

    printf("���ھ߱��� ������ �Է��ϼ��� : ");
    scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
    printf("\n");

    while (1) {
        printf("[%dȸ��]\n", count++);
        printf("0���� 9���� ���ڸ� 3�� �Է� : ");
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
            printf("[���]��Ʈ����ũ : %d, �� : %d\n\n", strike, ball);
        }
        if (strike == 3) {
            printf("[���]��Ʈ����ũ : %d, �� : %d\n\n", strike, ball);
            printf("����ڰ� �¸��Ͽ����ϴ�.\n");
            break;
        }
        else if (count == 8) {
            printf("��ǻ�Ͱ� �¸��Ͽ����ϴ�.");
            break;
        }
    }
}