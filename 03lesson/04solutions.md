# פתרונות

## תרגיל 1

```c
    //01
    int numbers[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("%d, ", numbers[i]);
    }
```

## תרגיל 2

```c
    //02
    int grades[10];

    printf("Enter 10 grades\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &grades[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (grades[i] > 90)
            printf("%d, ", grades[i]);
    }
```

## תרגיל 3

```c
    //03
    char words[5][20];
    int min_index = 0;
    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%s",words[i]);
    }
    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 5; ++i) {
            if (strcmp(words[i], words[min_index]) < 0) {
                min_index = i;
            }
        }
        printf("%s, ", words[min_index]);
        strcpy(words[min_index], "|"); // '|' > 'z' in ascii
    }
```

## תרגיל 4

```c
    //04
    char str[20];
    printf("Enter a string:");
    gets(str);

    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == 'a')
            str[i] = 'b';
    }
    puts(str);
```

## תרגיל 5

```c
    //05
    char string[20];
    printf("Enter a string:");
    gets(string);

    for (int i = strlen(string) - 1; i >= 0 ; i--) {
        putchar(string[i]);
    }
    return 0;
}
```

## תרגיל 6

```c
    //06
    float nums[6];
    float avg = 0;
    printf("Enter 6 nums\n");
    for (int i = 0; i < 6; ++i) {
        scanf("%f", &nums[i]);
        avg += nums[i];
    }
    printf("The avg is %.2f", avg / 6);
```

## תרגיל 7

```c
    //07
    char password[20];
    int letters, numbers, symbols;
    while (1) {
        letters = 0, numbers = 0, symbols = 0;
        printf("Enter a password:");
        scanf("%s", password);
        if (strlen(password) < 6) {
            printf("the password needs at least 6 chars\n");
            continue;
        }
        if (!(password[0] >= 'A' && password[0] <= 'Z') && !(password[strlen(password) - 1] >= 'A' &&
                                                             password[strlen(password) - 1] <= 'Z')) {
            printf("first letter or last letter must be a capital letter\n");
            continue;
        }
        for (int i = 0; i < strlen(password); ++i) {
            if (password[i] == '!' || password[i] == '#' || password[i] == '$')
                symbols++;
            if (password[i] >= '0' && password[i] <= '9')
                numbers++;
            if (password[i] >= 'a' && password[i] <= 'z')
                letters++;
        }
        if (letters < 2) {
            printf("must be at least 2 lower letters\n");
            continue;
        }
        if (symbols != 1) {
            printf("must be exactly one of the symbols: ! / # / $\n");
            continue;
        }
        if (numbers < 1) {
            printf("must be at least one number\n");
            continue;
        }
        break;
    }
    printf("Great password!!");
```

## תרגיל 8

```c
    //08
    int nums[6], k = 0, min_index, tmp;
    printf("Enter 6 nums\n");

    for (int i = 0; i < 6; ++i) {
        scanf("%d", &nums[i]);
    }
    for (int j = 0; j < 6; ++j) {
        min_index = k;
        for (int i = k; i < 6; ++i) {
            if(nums[i] < nums[min_index]){
                min_index = i;
            }
        }
        tmp = nums[k];
        nums[k] = nums[min_index];
        nums[min_index] = tmp;
        k++;
    }
    for (int i = 0; i < 6; ++i) {
        printf("%d, ", nums[i]);
    }
```

מיון מערך במקום זה נושא בפני עצמו. ממליצה לחפש באינטרנט. בדוגמא שכאן כל פעם מצאנו את המינימלי והזזנו אותו להתחלה.
מיונים שכדאי לקרוא לדוגמא: מיון בועות Bubble Sort
