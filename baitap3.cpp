#include<stdio.h>
#define PI 3.14

int main(){
    float r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    float chuVi = 2 * PI * r;
    float dienTich = PI * r * r;

    printf("Chu vi hinh tron: %2.f\n", chuVi);
    printf("Dien tich hinh tron: %2.f\n", dienTich);

    return 0;
}
