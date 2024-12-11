#include <stdio.h>

int main() {
    float canh, chieuCao, dienTich;

    printf("nhap do dai canh: ");
    scanf("%f", &canh);

    printf("nhap chieu cao: ");
    scanf("%f", &chieuCao);

    dienTich = (canh * chieuCao) / 2;

    printf("dien tich: %.2f\n", dienTich);

    return 0;
}
