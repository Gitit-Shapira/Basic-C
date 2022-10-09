# פתרונות

## תרגיל 1
```c
    int x,y;
    printf("2 num\n");
    scanf("%d%d", &x,&y);
    printf("x + y = %d\nx * y = %d\nx % y = %d", x + y, x * y, x %y);
```

## תרגיל 2

```c
    char c;
    fflush(stdin);
    c = getchar();
    printf("the char %c in ascii is %d\n", c,c);
```

## תרגיל 3

```c
    printf("%c%c%c%c%c\n%c", 'G','i','t','i','t','S');
```

## תרגיל 4

```c
    char a,b,c;
    a = getchar();
    fflush(stdin);
    b = getchar();
    fflush(stdin);
    c = getchar();
    printf("the sum is: %d", a + b + c);
```

## תרגיל 7

```c
    int price;
    float tax;
    printf("WHats your price?\n");
    scanf("%d", &price);
    printf("enter tax bw 0-1\n");
    scanf("%f", &tax);
    tax++;
    printf("the price to pay is: %.2f", tax * price);
```

## תרגיל 8

```c
    int number;
    scanf("%d", &number);
    printf("units: %d\n", number % 10);
    number = number / 10;
    printf("ten: %d\n", number % 10);
    number = number / 10;
    printf("hundred: %d\n", number);
```
