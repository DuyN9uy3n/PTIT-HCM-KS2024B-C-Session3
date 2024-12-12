#include <stdio.h>

int revNum(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return revNum(n / 10, rev * 10 + n % 10);
}

int main() {
    int N;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N phai la so nguyen duong.\n");
        return 1;
    }

    int rev = revNum(N, 0);
    printf("So dao nguoc: %d\n", rev);

    return 0;
}
