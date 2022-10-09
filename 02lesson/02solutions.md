# פתרונות

## תרגיל 1
```c
    //01
    int num;
    printf("number?\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
```

## תרגיל 2

```c
    //02
    int num;
    printf("number?\n");
    scanf("%d", &num);

    if( num % 3 == 0 && num % 5 == 0)
        printf("Bizzbuzz");
    else if(num % 3 == 0){
        printf("Bizz");
    }else if (num % 5 == 0){
        printf("Buzz");
    }
```

## תרגיל 3

```c
    //03
    int a, b, c;
    printf("3 nums:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if (a > c){
            printf("%d",a);
        }else{
            printf("%d",c);
        }
    }else{
        if ( b> c){
            printf("%d",b);
        } else{
            printf("%d",c);
        }
    }
```

## תרגיל 4

```c
    //04
    int grade;
    printf("your grade?\n");
    scanf("%d", &grade);

    if (grade < 56) {
        if (grade % 2 == 0) {
            printf("the grad %d is even and failed!\n", grade);
        } else {
            printf("the grade %d is odd and failed!\n", grade);
        }
    } else if (grade >= 56 && grade < 80) {
        if (grade == 60) {
            printf("the grade is %d\n", grade);
        } else {
            if (grade >= 75) {
                printf("the grade %d is good enough", grade);
            } else {
                printf("the grade %d is bhaaa\n", grade);
            }
        }
    } else { // grade >= 80
        printf("the grade %d WOW!\n", grade);
    }

```

## תרגיל 5

```c
    //05
    char c;
    printf("is it y?\n");
    c = getchar();
    if (c != 'y' && c != 'Y'){
        printf("It's a NO for me\n");
    }
    printf("Goodbye");

```

## תרגיל 6

```c
    //06
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == 5 || b > 3 && c > 3){
        printf("Yes");
    } else{
        printf("No");
    }
```

## תרגיל 7

```c
    //07
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a == 5 || b > 3) && c > 3){
        printf("Yes");
    } else{
        printf("No");
    }
```

## תרגיל 8

```c
    //08
    int age, height;
    char eyes;
    printf("your age: ");
    scanf("%d", &age);
    printf("your hight in cm: ");
    scanf("%d", &height);

    if ((age > 20 && age < 30 || age > 40 && age < 50) && height > 180) {
        printf("You are in!");
    }else{
        printf("is your eyes 6/6? is so write y");
        fflush(stdin);
        eyes = getchar();
        if((eyes == 'y' || eyes == 'Y') && age >= 18){
            printf("you can be in cameras room");

        }else{
            printf("we are sorry, try another time");
        }
    }
```
