#include <stdio.h>//bai5

int fac(int n){
	if (n < 0){
		return -1;
	}
	int fac = 1;
	for (int i = 2; i <= n; i++){
		fac *= i;
	}
	return fac;
}
int main (){
	int num;
	printf ("nhap so nguyen: ");
	scanf ("%d", &num);
	
	printf ("giai thua cua doi so %d truyen vao la: %d",num, fac);
	return 0;
}
