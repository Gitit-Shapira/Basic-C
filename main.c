#include <stdio.h>

int main() {
//    int num;
    printf("number?\n");
//    scanf("%d", &num);

//    if(num > 10)
//        printf("Bigger than 10\n");
//    if(num % 2 == 0)
//        printf("num is even\n");
//    if(num != 12)
//        printf("not 12\n");
//
//    if( num >= 20){
//        printf("bigger than 20\n");
//        printf("might be 20\n");
//    }
//    printf("GoodBye..\n");

//    if (num % 2 == 0) {
//        printf("num is even\n");
//    } else {
//        printf("num is odd\n");
//    }

//    if (num > 10 && num < 20){
//        printf("10 < num < 20\n");
//    }
//    if(num < 3 || num > 14){
//        printf(" num < 3 or num > 14");
//    }

//    if(num){ // num != 0
//        printf("num is not zero\n");
//    }
//    if(!num){ // num == 0
//        printf("num is zero\n");
//    }

//    int x, y, q, age;
//    scanf("%d%d%d%d", &x, &y, &q, &age);

//    if (x > 5 && y == 8 && q < 1 && age == 80) {
//        printf("hi");
//    }
//    if (x == 5 || y > 12 || age <= 80) {
//        printf("bye");
//    }
//
//    if (x == 5 || y == 5 && q > 3) { // 3 + 2 * 4
//        printf("x = 5 or (y = 5 and q >3)");
//    }
//    if ((x == 5 || y == 5) && q > 3) { // (3 + 2) * 4
//        printf("q > 3 and (x = 5 or y = 5)");
//    }

    int a, b, c;
//    char even;
    scanf("%d, %d, %d", &a, &b, &c);
//    printf("even?\nif yes write y\n");
//    fflush(stdin);
//    even = getchar();
//    if (even == '\n'){
//        even = getchar();
//        printf("Im in\n");
//    }
//    if (even == 'y') {
//        if (a % 2 == 0)
//            printf("a is even\n");
//        if (b % 2 == 0)
//            printf("b is even\n");
//        if (c % 2 == 0)
//            printf("c is even\n");
//    } else {
//        if (a % 2 != 0)
//            printf("a is odd\n");
//        if (b % 2) // b % 2 != 0
//            printf("b is odd\n");
//        if (c % 2 == 1)
//            printf("c is odd\n");
//    }

//    if( even == 'y' && a % 2 ==0 || even != 'y' && a % 2 != 0)
//        printf("%d\n", a);
//    if( even == 'y' && b % 2 ==0 || even != 'y' && b % 2 != 0)
//        printf("%d\n", b);
//    if( even == 'y' && c % 2 ==0 || even != 'y' && c % 2 != 0)
//        printf("%d\n", c);

//    if(a > 3)
//        printf("a is bigger than 3\n");
//    else if(b % 2 == 0)
//        printf("b is even and a <= 3\n");
//    else if(c != 12)
//        printf("c != 12 and b is odd\n");
//    else
//        printf("a <= 3 b is odd c = 12");

    c = a > b ? a : b;
    /*
     if ( a > b)
        c = a
    else
        c = b
     */
    printf("%c\n", a != b ? 'y' : 'n');
    printf("%d", c);


    return 0;
}
