#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    
    int arr[22];
label:

    for (int i = 7; i < 22; i++) {
        
        char input[100];
        printf("%02d시 혈당 몇? ", i);
        scanf("%s", input);

        for(int j=0; input[j]!='\0'; j++) {
            if ((input[j]<48) || (input[j]>57)) {
                printf("잘못된 입력, 정수만 입력하시오.\n\n");
                goto label;
            }
        }
        int num = atoi(input); 
        arr[i] = num;
    }

    for (int i = 7; i < 22; i++) {
        printf("%02d시 혈당 : ", i);

        for (int j = 0; j < (arr[i] / 10); j++)printf("■");

        if ((arr[i]%10) >= 7) {
            printf("**");
        } else if ((arr[i]%10) >= 4) {
            printf("*");
        }

        printf("\n");
    }

    if (arr[7] >= 126) {
        printf("님 당뇨");
        
    } else if (arr[7] >= 99){
        printf("당뇨 위험");
        
    } else {
        printf("님 당뇨 아님,");
        
    }

    return 0;
}
//바보 멍청이
