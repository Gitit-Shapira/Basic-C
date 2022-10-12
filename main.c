#include <stdio.h>
#include <string.h>

int sum1() {
    int a = 4, b = 6;
    return a + b;
}

int sum2() {
    int a, b;
    scanf("%d%d", &a, &b);
    return a + b;
}

int sum3(int c) {
    c = 3;
    return c + 5;
}

float avg1(float x, int y) {
    return (x + y) / 2;
}

float avg2() {
    return (float) sum2() / 2;
}

void sum(int a, int b); // חתימה של פונקציה

void changeA(int a[]){
    a[0] = 8;
}

int main() {
//    printf("Hello, World!\n");
//    int a[] = {4,7,2,7,9,2};
//    int b[5] = {5,8};
//    int c[5];
//    printf("%d\n", b[1]);
//    a[0] = 3;
//    a[1] = 3;
//    a[2] = 6;
//    a[3] = 3;
//    printf("%d\n",a[5]);
//
//    for (int i = 0; i < 5; ++i) {
//        printf("%d, ",b[i]);
//    }
//
//    for (int i = 0; i < 5; ++i) {
//        scanf("%d", &c[i]);
//    }

//    int numbers[5], max = 0;
//
//    for (int i = 0; i < 5; ++i) {
//        scanf("%d", &numbers[i]);
//    }
//    for (int i = 0; i < 5; ++i) {
//        if (i % 2 == 0) {
//            printf("num %d is in even index\n", numbers[i]);
//        }
//        if (numbers[i] % 2 == 0) {
//            printf("the num %d is even\n", numbers[i]);
//        }
//        if (numbers[i] > max) {
//            max = numbers[i];
//        }
//    }
//    printf("the max is %d", max);

//    float num[7] = {0};
//    printf("%f", num[4]);

    // char name[10] = "Gal", last[10] = "Bar";
//    printf("%c", name[0]);
//    printf("%s\n", name);
//    scanf("%s", name);
//    puts(name);
//    scanf("%s", name);
//    fflush(stdin);
//    gets(name);
//    puts(name);

//    int x = strlen(name);
//    printf("%d\n",x);
//    printf("%d", strlen(name));
//
//    for (int i = 0; i < strlen(name); ++i) {
//        putchar(name[i]);
//    }
//    putchar('\n');
//    puts(last);
//    strcpy(last, name);
//    puts(last);
//
//    strcat(name," ");
//    gets(last);
//    strcat(name,last);
//    puts(name);

//    strcmp(name, last);
//
//    printf("%d\n", strcmp(name, last));
//    strcpy(last, name);
//    printf("%d\n", strcmp(name, last));
//    gets(last);
//    printf("%d\n", strcmp(name, last));
//
//    // strlen - אורך מחרוזת
//    // strcpy - העתקת מחרוזת אחת לשניה
//    // strcat -  שרשור מחרוזות
//    // strcmp - השוואת מחרוזות

//    int mat[3][4] = {{3,15,6}, {100}, {6,8654,3,2}};
//
//    for (int row = 0; row < 3; ++row) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%5d",mat[row][j]);
//        }
//        putchar('\n');
//    }

//    int matrix[3][3];
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            printf("number:");
//            scanf("%d",&matrix[i][j]);
//        }
//    }


    int x;
//    x = sum1();
//    printf("%d\n", x);
////    printf("%d\n", sum2());
//    printf("%d\n", sum3(8));
//    printf("%d\n", sum3(x));
//    printf("%.2f\n", avg1(12.4, x));
//    printf("%.2f\n", avg2());

    int y = 6;
    x = sum3(y); //  sum3(6)
    printf("y = %d\n", y);
    printf("x = %d\n", x);
    int arr[3] = {1,2,3};
    changeA(arr);
    printf("%d", arr[0]);
    sum(4,6);

    return 0;
}

void sum(int a, int b) {
    printf("%d\n", a + b);
}