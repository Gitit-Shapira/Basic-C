# שיעור שלישי

[הקלטת השיעור](https://us06web.zoom.us/rec/share/XGdT5XoNeKPyLQHTcpRlhYf_2w9-QyrPcK36nSFLTSQ0o_LnlyIGtD8vSJQrdFnd._ZGjvKc3k7o7zXMq)

## break continue

```c
 int x, guess;
    printf("if you want to quit, write -1\n");
    printf("number:");
    scanf("%d", &x);
    x = (((x + 120) / 3) * 131) % 100;

    while (guess != x) {
        printf("take a guess:");
        scanf("%d", &guess);
        if (guess == -1) {
            printf("you wanted to quit\n");
            break;
        }
        if (guess < x) {
            printf("too low, try higher\n");
        }
        if (guess > x) {
            printf("too high, try lower\n");
        }
    }
    printf("%s %d is the wright number", guess == x ? "BRAVO!" : "", x);
```
יציאה מהלולאה במקרה והניחוש הוא -1
```c
    for (int i = 3; i < 100; i+=3) {
        if(i % 7){ // i % 7 != 0
            continue;
        }
        printf("%d, ",i);
    }
```

הדפסת כל המספרים עד מאה שמתחלקים ב7 וב3 

## הצהרה, איתחול, וגישה למערך

```c
    int a[] = {4,7,2,7,9,2};
    int b[5] = {5,8};
    int c[5];
    printf("%d\n", b[1]);
    a[0] = 3;
    a[1] = 3;
    a[2] = 6;
    a[3] = 3;
    printf("%d\n",a[5]);
```

## הדפסת מערך

```c
    for (int i = 0; i < 5; ++i) {
        printf("%d, ",b[i]);
    }
```

## קליטה למערך

```c
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &c[i]);
    }
```

## הדפסת כל המספרים באינדקסים הזוגיים, הדפסת המספרים הזוגיים במערך, והדפסת הערך המקסימלי במערך

```c
    int numbers[5], max = 0;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            printf("num %d is in even index\n", numbers[i]);
        }
        if (numbers[i] % 2 == 0) {
            printf("the num %d is even\n", numbers[i]);
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("the max is %d", max);
```

## איתחול באפסים של מערך

```c
    float num[7] = {0};
    printf("%f", num[4]);
```
נשים לב שבלי האיתחול לאפס, נדפיס "ערך זבל" שנשמר במערך מתוכנית קודמת.

## מחרוזות - הצהרה, איתחול, הדפסה וקליטה

```c
    char name[10] = "Gal";
    printf("%c", name[0]);
    printf("%s\n", name);
    scanf("%s", name);
    puts(name);
    scanf("%s", name);
    fflush(stdin);
    gets(name);
    puts(name);
```

## מחרוזות - שימוש בספריית סטרינג - אורך מחרוזת

```c
#include <string.h>
```

```c
    char name[10] = "Gal";
    int x = strlen(name);
    printf("%d\n",x);

    for (int i = 0; i < strlen(name); ++i) {
        putchar(name[i]);
    }
```

## העתקת מחרוזת

```c
    char name[10] = "Gal", last[10] = "Bar";
    putchar('\n');
    puts(last);
    strcpy(last, name);
    puts(last);
```

## שרשור מחרוזות

```c
    char name[10] = "Gal", last[10] = "Bar";
    strcat(name, " ");
    gets(last);
    strcat(name, last);
    puts(name);

    strcmp(name, last);
```

## השוואת מחרוזות

```c
    char name[10] = "Gal", last[10] = "Bar";
    printf("%d\n", strcmp(name, last));
    strcpy(last, name);
    printf("%d\n", strcmp(name, last));
    gets(last);
    printf("%d\n", strcmp(name, last));
```
נשים לב שהשוואת מחרוזת מחזירה לנו מספר.
אם המחרוזות זהות, יוחזר אפס. אם השמאלית גדולה יותר (כלומר נמצאת לפני הימנית מבחינה לקסיקוגרפית - מילונית) יוחזר מספר חיובי.
אם המחרוזת הימנית גדולה מהשמאלית, יוחזר מספר שלילי.

## מטריצות

```c
    int mat[3][4] = {{3,15,6}, {100}, {6,8654,3,2}};

    for (int row = 0; row < 3; ++row) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d",mat[row][j]);
        }
        putchar('\n');
    }

    int matrix[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("number:");
            scanf("%d",&matrix[i][j]);
        }
    }
```

## פונקציות
```c
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

void changeA(int a[]) {
    a[0] = 8;
}

int main() {
    int x;
    x = sum1();
    printf("%d\n", x);
    printf("%d\n", sum2());
    printf("%d\n", sum3(8));
    printf("%d\n", sum3(x));
    printf("%.2f\n", avg1(12.4, x));
    printf("%.2f\n", avg2());

    int y = 6;
    x = sum3(y); //  sum3(6)
    printf("y = %d\n", y);
    printf("x = %d\n", x);
    int arr[3] = {1, 2, 3};
    changeA(arr);
    printf("%d", arr[0]);
    sum(4, 6);

    return 0;
}
```

נשים לב לכמה דברים - הפונקציות מוגדרות מחוץ לmain.
במידה והפונקציה מוגדרת מתחת לבלוק של הmain, נצטרך לבצע חתימה של הפונקציה מעל הmain, כמו שעשינו לפונקציה sum(int a, int b)
