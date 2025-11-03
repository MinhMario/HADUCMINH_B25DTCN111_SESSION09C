#include <stdio.h>

int main() {

    const int N = 4;

    int ma_tran[N][N] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };



    printf("Ma tran da cho:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%-4d", ma_tran[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", ma_tran[i][i]);
    }
    printf("\n");

    return 0;
}
