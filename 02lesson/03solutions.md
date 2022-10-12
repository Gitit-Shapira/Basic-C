# פתרונות

## תרגיל 1

```c
    //01
    int sum = 0, number;

    for (int i = 0; i < 10; ++i) {
        printf("number:");
        scanf("%d", &number);
        sum += number;
    }
    printf("the sum is %d", sum);
```

## תרגיל 2

```c
    //02
    int num, sum = 0;
    printf("number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    printf("the sum is %d", sum);
```

## תרגיל 3

```c
    //03
    int num, count;
    printf("number:");
    scanf("%d", &num);

    while (num) {
        count++;
        num /= 10;
    }
    printf("amount of digits: %d", count);
```

## תרגיל 4

```c
    //04
    int num, sum = 0;
    printf("number:");
    scanf("%d", &num);

    while (num) {
        sum += num % 10;
        num /= 10;
    }
    printf("sum of digits: %d", sum);
```

## תרגיל 5

```c
    //05
    int max, second, num;
    for (int i = 0; i < 5; ++i) {
        printf("number:");
        scanf("%d", &num);
        if(!i) { // i == 0; only for the first - in case all negative
            max = second = num;
        }
        if (num > max) {
            second = max;
            max = num;
        } else if (num > second && num != max || max == second) { // the right for specific problem
            second = num;
        }
    }
    printf("the second large is: %d", second);
```

## תרגיל 6

```c
    //06
    int one, two;
    printf("Choose two numbers\n");
    scanf("%d %d", &one, &two);

    for (int i = 0; i < one; ++i) {
        for (int j = 0; j < two; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
```

## תרגיל 7

```c
//07
    int x, guess;
    printf("number:");
    scanf("%d", &x);
    x = (((x + 120) / 3) * 131) % 100;

    while (guess != x){
        printf("take a guess:");
        scanf("%d",&guess);
        if(guess < x){
            printf("too low, try higher\n");
        }
        if(guess > x){
            printf("too high, try lower\n");
        }
    }
    printf("BRAVO! %d is the wright number", x);
```
