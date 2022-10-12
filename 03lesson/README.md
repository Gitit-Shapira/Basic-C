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
