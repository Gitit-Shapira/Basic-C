#include <stdio.h>

int main() {

//    int counter = 1;
//    while(counter <= 5){
//        printf("Hello, World!\n");
//        counter++;
//    }
//    printf("the end");

//    int number = 0;
//
//    while (number < 1 || number > 10) {
//        printf("choose a number bw 1 - 10");
//        scanf("%d", &number);
//
//    }
//    printf("the num is %d", number);

//    int stars;
//    printf("how many stars?\n");
//    scanf("%d",&stars);
//
//    if(stars < 0){
//        printf("ERROR!");
//    }
//    while (stars > 0){
//        putchar('*');
//        stars--;
//    }

//    int x;
//    do{
//        printf("choose a number bw 1 - 10");
//        scanf("%d", &x);
//    } while (x < 1 || x > 10);

    for (int i = 0; i < 10; ++i) {
        printf("%d, ", i);
    }

    int x;
    scanf("%d",&x);
    for (int i = 0; i < x; ++i) {
        printf("%d\n",x);
    }




    return 0;
}
