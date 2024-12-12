#include <stdio.h>  

int main() {  
    // Student data for four students  
    int stt1 = 1, tuoi1 = 19;  
    char hoTen1[] = "Duy Nguyen";  
    char soDienThoai1[] = "12311241";  
    char email1[] = "aad@rikkeacademy.com";  

    int stt2 = 2, tuoi2 = 21;  
    char hoTen2[] = "Messi";  
    char soDienThoai2[] = "1234567890";  
    char email2[] = "trttr@rikkeacademy.com";  

    int stt3 = 3, tuoi3 = 18;  
    char hoTen3[] = "Cuong";  
    char soDienThoai3[] = "0909488443";  
    char email3[] = "sdfgsd@rikkeacademy.com";  

    int stt4 = 4, tuoi4 = 20;  
    char hoTen4[] = "Ronaldo";  
    char soDienThoai4[] = "0101010101";  
    char email4[] = "abc@gmail.com";  

    printf("\t\t\t\tDANH SACH SINH VIEN\n");  
    printf("STT  |  Ho ten\t\t|\tTuoi |  So dien thoai   |\t         Email\n");  
    printf("--------------------------------------------------------------------------------------\n");  

    printf("%-4d|\t%-16s|\t%-5d|\t%-15s|\t%s\n",  
           stt1, hoTen1, tuoi1, soDienThoai1, email1);  
    printf("--------------------------------------------------------------------------------------\n");  

    printf("%-4d|\t%-16s|\t%-5d|\t%-15s|\t%s\n",  
           stt2, hoTen2, tuoi2, soDienThoai2, email2);  
    printf("--------------------------------------------------------------------------------------\n");  

    printf("%-4d|\t%-16s|\t%-5d|\t%-15s|\t%s\n",  
           stt3, hoTen3, tuoi3, soDienThoai3, email3);  
    printf("--------------------------------------------------------------------------------------\n");  

    printf("%-4d|\t%-16s|\t%-5d|\t%-15s|\t%s\n",  
           stt4, hoTen4, tuoi4, soDienThoai4, email4);  
    printf("--------------------------------------------------------------------------------------\n");  

    return 0;  
}