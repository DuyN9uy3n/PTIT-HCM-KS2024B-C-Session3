#include<stdio.h>
int main(){
	float van, toan, anh;
	
	printf("Moi nhap diem van: ");
	scanf("%f", &van); 
	
	printf("Moi nhap diem toan: ");
	scanf("%f", &toan); 
	
	printf("Moi nhap diem anh: ");
	scanf("%f", &anh); 
	
	
	float diemTrungbinh = (van + toan + anh)/3;
	printf("diem trung binh la: %.2f ", diemTrungbinh);
	
	return 0;
}