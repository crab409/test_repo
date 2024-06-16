#include <stdio.h>

int main(void) {
   int arr[22];

    for (int i = 7; i < 22; i++) {
        int input;
        printf("%02d시 혈당 몇? ", i);
        scanf("%d", &input);
        arr[i] = input;
    }

    for (int i = 7; i < 22; i++) {
        printf("%02d시 혈당 : ", i);

        for (int j = 0; j < (arr[i] / 10); j++)printf("■");

        if ((arr[i] % 10) >= 6) {
            printf("□");
        }

        printf("\n");
    }

    if (arr[7] >= 99) {
        printf("님 당뇨");
    } else {
        printf("님 당뇨 아님,");
    }

    return 0;
}
