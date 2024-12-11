#include <stdio.h>

int main() {
    int num;
    
    printf("Nhap 4 chu so nguyen: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("ko hop le.\n");
        return 1;
    }

    int reversed = 0;
    while (num != 0) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }

    printf("so dao nghich: %d\n", reversed);
    return 0;
}
