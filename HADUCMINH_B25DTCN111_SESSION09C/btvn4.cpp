#include <stdio.h>

int main() {

    int mang_so_nguyen[] = {5, 12, 8, 20, 15, 9};

    int so_luong_phan_tu = sizeof(mang_so_nguyen) / sizeof(mang_so_nguyen[0]);

 
    int tong = 0;

    for (int i = 0; i < so_luong_phan_tu; i++) {

        tong = tong + mang_so_nguyen[i]; 
    }

    double gia_tri_trung_binh;

    if (so_luong_phan_tu > 0) {

        gia_tri_trung_binh = (double)tong / so_luong_phan_tu;
                printf("M?ng dã cho g?m %d ph?n t?.\n", so_luong_phan_tu);
        printf("T?ng các ph?n t? là: %d\n", tong);
        
        printf("Giá tr? trung bình c?a m?ng là: %.2f\n", gia_tri_trung_binh);
    } else {
        printf("M?ng r?ng, không th? tính giá tr? trung bình.\n");
    }

    return 0; 
}
