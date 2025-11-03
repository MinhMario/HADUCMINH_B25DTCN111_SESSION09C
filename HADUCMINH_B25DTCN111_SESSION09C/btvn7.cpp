#include <stdio.h>

int main() {
    // S? d?ng bi?n h?ng s? 'const' thay cho #define
    // Trình biên d?ch s? d?m b?o giá tr? c?a N không b? thay d?i trong chuong trình
    const int N = 4;

    // 1. Khai báo và gán giá tr? cho ma tr?n vuông
    int ma_tran[N][N] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    int tong_duong_cheo_chinh = 0;

    printf("Ma tran da cho:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%-4d", ma_tran[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 2. In các ph?n t? trên du?ng chéo chính và tính t?ng
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", ma_tran[i][i]);
        tong_duong_cheo_chinh += ma_tran[i][i];
    }
    printf("\n");

    // 3. In t?ng ra màn hình
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", tong_duong_cheo_chinh);

    return 0;
}
