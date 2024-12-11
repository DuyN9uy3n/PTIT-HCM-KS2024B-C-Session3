#include <stdio.h>

int main() {
    int soNguyen, tong = 0;

    printf("Nhap 4 chu so nguyen: ");
    scanf("%d", &soNguyen);

    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("ko hop le.\n");
        return 1;
    }

    while (soNguyen > 0) {
        tong += soNguyen % 10; 
        soNguyen /= 10; 
    }

  
    printf("tong cac chu so: %d\n", tong);

    return 0;
}
