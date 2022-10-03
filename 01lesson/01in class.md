# שיעור ראשון

## הגדרת משתנים, אתחול, השמה והדפסה

```c
    int x = 0,number;
    int first_name;
    float e = 12.0/5;
    float y,t=5.6;
    char c;
    x = 14;
    y = 4.876;
    c = 'd';
    printf("x = %d,y = %.3f,%.2f %c, %d\n",x,y,t,c,number);
```

## הדפסות

```c

    putchar('h');
    putchar('\n');
    putchar(c);
    printf("\n%c",c);

    printf("6 + 4 = %d\n", x + 4);
    printf("x + number = %d\n", x + number);
    printf("x + y = %f\n", x + y);
    printf("x  = %d\n", x );
    printf("x = %d %c\n",x, 'h');
    printf("- \n%d \n", 8-9);
    printf("* %d \n", 8*9);
    printf("/ %.1f \n",e);
     מודולו %
    printf("%d", 13 % 5);
```
## אופרטורים

```c
    x = 4;
    y = 12.4;
    x = x + 1; // x = 5
    printf("%d\n", x);
    x++; // x = 6
    printf("%d\n", x);
    ++x; // x = 7
    printf("%d\n", x);
    y = x++; // y = x; x = x + 1;
    printf("y = %.1f\n", y);
    printf("%d\n", x);
    y = ++x; // x = x + 1; y = x;
    printf("y = %.1f\n", y);
    printf("%d\n", x);

    x = x +1;
    x++;
    x = x + 2;
    x += 2;
    x *= 3; // x = x * 3

    x = 1;
    x = x++ * ++x - x; //
    printf("x = %d\n",x);
```

## קליטת קלט מהמשתמש

```c
    printf("%d\n",x);
    printf("please choose an number\n");
    scanf("%c",&c);
    scanf("%d%f", &x, &y);
    printf("x = %d\n%f\n",x,y);
    putchar(c);
    putchar('\n');
    x = c;
    printf("x = %d\n",x);
    printf("%d %c", c, c);
```
