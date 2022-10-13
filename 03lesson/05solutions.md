# פתרונות

## תרגיל 1

```c
    //01
    int mat[3][4], sum_row = 0, sum_col = 0;
    printf("Enter 12 numbers\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("the matrix you entered:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            sum_row += mat[i][j];
        }
        printf("the sum of row %d is: %d\n", i, sum_row);
        sum_row = 0;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum_col += mat[j][i];
        }
        printf("the sum of column %d is: %d\n", i, sum_col);
        sum_col = 0;
    }
```

## תרגיל 2

מעל הmain
```c
// global vars
int auditorium[10][10] = {0};
int max_seats[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
int center_seat[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

void print_board() {
    printf("The auditorium:\n");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%2d", auditorium[i][j]);
        }
        printf("\n");
    }
}

void seating(int ppl, int row, int start) {
    for (int i = 0; i < ppl; ++i) {
        auditorium[row][start + i] = 1;
    }
}

void update(int row) {
    if (!auditorium[row][5]) // seat 5 is empty
        return;
    int seat = 5;
    for (int i = 1; i < 10; ++i) {
        if (i % 2) // odd
            seat -= i;
        else       // even
            seat += i;
        if (!auditorium[row][seat]) {  // seat not taken
            max_seats[row] = seat > 5 ? 10 - seat : seat + 1;
            center_seat[row] = seat;
            return;
        }
    }
    max_seats[row] = 0; // empty seat not found
}

void find_row(int ppl) {
    char answer;
    int start;
    for (int i = 0; i < 10; ++i) {
        update(i);
        if (max_seats[i] >= ppl) {
            printf("would you like row %d? y/n\n", i);
            scanf(" %c", &answer);
            if (answer == 'y') {
                start = center_seat[i] > 5 ? center_seat[i] :
                        center_seat[i] < 5 ? center_seat[i] - ppl + 1 : 5 - ppl / 2;
                seating(ppl, i, start);
                return;
            }
        }
    }
    printf("There are no seats for you\n");
}

int is_full() {
    for (int i = 0; i < 10; ++i) {
        if (max_seats[i])
            return 0;
    }
    return 1;
}
```

בתוך הmain

```c
int full = 0, ppl, row;

    while (!full) {
        print_board();
        printf("How many are you?");
        scanf("%d", &ppl);
        printf("Which row?");
        scanf("%d", &row);
        update(row);
        if (max_seats[row] >= ppl) { // there's enough place
            if (center_seat[row] == 5) { // seat 5 is not taken
                seating(ppl, row, 5 - ppl / 2);
                continue;
            }
            seating(ppl, row, center_seat[row] > 5 ? center_seat[row] : center_seat[row] - ppl + 1);
            continue;
        }
        printf("There's no seats in row %d\n", row);
        find_row(ppl);
        full = is_full();
    }
    printf("\n********************\n");
    printf("The auditorium is full");
```
