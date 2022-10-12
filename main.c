#include <stdio.h>
#include <string.h>

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

    char name[10] = "Gal", last[10] = "Bar";
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

    strcmp(name, last);

    printf("%d\n", strcmp(name, last));
    strcpy(last, name);
    printf("%d\n", strcmp(name, last));
    gets(last);
    printf("%d\n", strcmp(name, last));

    // strlen - אורך מחרוזת
    // strcpy - העתקת מחרוזת אחת לשניה
    // strcat -  שרשור מחרוזות
    // strcmp - השוואת מחרוזות


    return 0;
}
