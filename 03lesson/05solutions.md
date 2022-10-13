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
