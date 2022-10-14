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

## תרגיל 3

מעל הmain
```c
int max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    return c;
}
```

בתוך הmain

```c
    int x, y, z;
    printf("Enter 3 nums\n");
    scanf("%d%d%d", &x, &y, &z);
    printf("The max num is %d", max(x, y, z));
```

## תרגיל 4
מעל הmain
```c
int min() {
    int a, b;
    printf("Enter 2 nums\n");
    scanf("%d%d", &a, &b);
    return a < b ? a : b;
}
```

בתוך הmain
```c
    printf("The minimum is %d", min());
```

## תרגיל 5
מעל הmain
```c
void bw(int a, int b) {
    int start, end;
    if (a < b) {
        start = a;
        end = b;
    } else {
        start = b;
        end = a;
    }
    for (int i = start; i <= end; ++i) {
        printf("%d, ", i);
    }
}
```

בתוך הmain
```c
    int x, y;
    printf("Enter 2 nums\n");
    scanf("%d%d", &x, &y);
    bw(x, y);
```

## תרגיל 6
מעל הmain

```c
int a_pow_b(int a, int b) {
    int num = 1;
    for (int i = 0; i < b; ++i) {
        num *= a;
    }
    return num;
}
```

בתוך הmain

```c
    int x, y;
    printf("Enter 2 nums\n");
    scanf("%d%d", &x, &y);
    printf("%d pow %d is %d", x, y, a_pow_b(x, y));
```

## תרגיל 7

מעל הmain

```c
void mult(int num) {
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num; ++j) {
            printf("%4d", i * j);
        }
        putchar('\n');
    }
}
```

בתוך הmain

```c
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    mult(num);
```


## תרגיל 8

מעל הmain

```c
void print_board(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            putchar(board[i][j]);
            printf("%s", " | ");
        }
        putchar('\n');

    }
}

int place_move(char board[3][3], char move, char turn) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (move == board[i][j]) {
                board[i][j] = turn;
                return 1;
            }
        }
    }
    return 0;
}

char change_turn(char turn) {
    if (turn == 'X')
        return 'O';
    else
        return 'X';
}

int legal(int move) {
    if (move < 1 || move > 9) {
        printf("wrong move!\n");
        return 0;
    }
    return 1;
}

int victory(char board[3][3]) {
    char sign1, sign2, sign_row, sign_col;
    int sum_row = 0, sum_col = 0, sum1 = 0, sum2 = 0;

    // checks lines && col
    for (int i = 0; i < 3; ++i) {
        sign_row = board[i][0];
        sign_col = board[0][i];
        sum_row = 0;
        sum_col = 0;
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == sign_row)
                sum_row++;
            if (board[j][i] == sign_col)
                sum_col++;
        }
        if (sum_col == 3 || sum_row == 3)
            return 1;

    }

    sign1 = board[0][0];
    sign2 = board[0][2];
    sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j) {
                if (board[j][i] == sign1)
                    sum1++;
            }
            if (i + j == 2) {
                if (board[j][i] == sign2)
                    sum2++;
            }
        }
    }
    if (sum1 == 3 || sum2 == 3)
        return 1;

    return 0;
}
```

בתוך הmain

```c
    char board[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char move, turn = 'X';
    int cell, ends = 0;
    while (1) {
        print_board(board);
        printf("It's %c turn\n", turn);
        printf("What's your move?\n");
        scanf("%d", &cell);
        if (legal(cell))
            move = cell + '0';
        else
            continue;

        if (place_move(board, move, turn)) {
            if (victory(board)) {
                print_board(board);
                printf("VICTORY to %c!!\n", turn);
                break;
            }
            turn = change_turn(turn);
            ends++;
        }
        if (ends == 9) { // the board is full
            print_board(board);
            printf("No one wins\n");
            break;
        }
    }

```
