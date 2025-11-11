#include <stdio.h>//bai7
#include <stdbool.h>//bai7

int isPrime(int n){
	if (n < 2){
		return false;
		for (int i = 0; i < n; i++){
			if (n % i ==0){
				return false;
			}
		}
	}else {
		return true;
	}
}
int main (){
	int num;
	printf ("Nhap mot so nguyen: ");
	scanf ("%d", &num);
	printf ("Kiem tra so nguyen to:\n");
	if (isPrime(num)){
		printf ("True\n", num);
	}else{
		printf ("False\n", num);
	}
	return 0;
}
