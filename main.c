#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[22]; //시간당 혈당량을 저장할 배열 선언
label:

    //시간별 혈당량을 입력받기
    for (int i = 7; i < 22; i++) {

        //문자열 입력받기 
        char input[100];
        printf("%02d시 혈당 몇? ", i);
        scanf("%s", input);

        //한글자씩 돌면서 문자열이 끝날때까지 검사
        //아라비어 숫자 이외의 문자가 있을시 "잘못된 입력"출력 후 6번줄로 이동
        for(int j=0; input[j]!='\0'; j++) {
            if ((input[j]<48) || (input[j]>57)) {
                printf("잘못된 입력, 정수만 입력하시오.\n\n");
                goto label;
            }
        }

        //입력된 문자열을 정수로 변환 하고 arr[i]에 입력값 저장
        //atoi()함수 : ASCII to int라는 의미 문자열에서 정수로 변환, python의 int()함수와 같은 역할
        int num = atoi(input); 
        arr[i] = num;
    }
 

    //입력된 혈당량을 막대그래프로 표시 
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

    //07시의 혈당량을 확인하고 조건에 따라 당뇨 여부 판별
    if (arr[7] >= 126) {
        printf("님 당뇨");    
    } else if (arr[7] >= 99){
        printf("당뇨 위험");
    } else printf("님 당뇨 아님,");

    return 0;
}
//바보 멍청이
