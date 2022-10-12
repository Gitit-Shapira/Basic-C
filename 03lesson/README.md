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
