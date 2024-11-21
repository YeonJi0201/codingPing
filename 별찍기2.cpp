//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 3
//
//struct student {
//    int number;
//    char name[20];
//    int grade1;
//    int grade2;
//    int report;
//    int attend;
//    char grade[3];
//};
//
//int main(void) {
//    struct student list[SIZE];
//    int i, j;
//    int sum[SIZE], rank[SIZE];
//
//    // 학생 정보 입력
//    for (i = 0; i < SIZE; i++) {
//        printf("학번을 입력하세요: ");
//        scanf_s("%d", &list[i].number);
//        printf("이름을 입력하세요: ");
//        scanf_s("%s", list[i].name, (unsigned int)sizeof(list[i].name));
//        printf("중간 : ");
//        scanf_s("%d", &list[i].grade1);
//        printf("기말 : ");
//        scanf_s("%d", &list[i].grade2);
//        printf("보고서 : ");
//        scanf_s("%d", &list[i].report);
//        printf("출석 : ");
//        scanf_s("%d", &list[i].attend);
//        printf("\n");
//    }
//
//    printf("================================================================================\n");
//    printf("학번\t\t이름\t중간\t기말\t보고서\t출석\t총점\t등급\t순위\n");
//
//    // 총점, 순위 초기화
//    for (i = 0; i < SIZE; i++) {
//        sum[i] = list[i].grade1 + list[i].grade2 + list[i].report + list[i].attend;
//        rank[i] = 1;
//    }
//
//    // 순위 계산
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            if (sum[i] < sum[j]) {
//                rank[i]++;
//            }
//        }
//    }
//
//    // 등급 할당 및 출력
//    for (i = 0; i < SIZE; i++) {
//        if (sum[i] < 50) {
//            sprintf(list[i].grade, "F");
//        }
//        else if (sum[i] >= 50 && sum[i] < 60) {
//            sprintf(list[i].grade, "D0");
//        }
//        else if (sum[i] >= 60 && sum[i] < 65) {
//            sprintf(list[i].grade, "D+");
//        }
//        else if (sum[i] >= 65 && sum[i] < 70) {
//            sprintf(list[i].grade, "C0");
//        }
//        else if (sum[i] >= 70 && sum[i] < 75) {
//            sprintf(list[i].grade, "C+");
//        }
//        else if (sum[i] >= 75 && sum[i] < 80) {
//            sprintf(list[i].grade, "B0");
//        }
//        else if (sum[i] >= 80 && sum[i] < 85) {
//            sprintf(list[i].grade, "B+");
//        }
//        else if (sum[i] >= 85 && sum[i] < 90) {
//            sprintf(list[i].grade, "A0");
//        }
//        else if (sum[i] >= 90 && sum[i] <= 100) {
//            sprintf(list[i].grade, "A+");
//        }
//
//        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n", list[i].number, list[i].name, list[i].grade1, list[i].grade2, list[i].report, list[i].attend, sum[i], list[i].grade, rank[i]);
//    }
//    printf("================================================================================\n");
//
//    return 0;
//}
