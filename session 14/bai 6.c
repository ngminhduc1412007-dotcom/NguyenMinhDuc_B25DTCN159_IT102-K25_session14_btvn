#include <stdio.h>//bai8 
#include <stdbool.h>

int perNum(int n){
	if (n<=1){
		return false;
		int sum = 0;
		printf ("cac uoc cua so %d la: ",n);
		 for (int i = 1; i < n/2; i++){
		 	if (n%i==0){
		 		sum += i;
		 		printf ("%d", i);
			 }
		 }
		printf ("tong cac uoc tru chinh no = %d", sum);
		return sum == n;
	}
}

int main (){
	int num1;
	int num2;
	printf ("moi ban nhap vao 2 so nguyen \n");
	printf ("so thu 1: ");
	scanf ("%d", &num1);
	printf ("so thu 2: ");
	scanf ("%d", &num2);
	printf ("kiem tr so hoan hao \n"); 
	
	if (perNum(num1)){
		printf ("true\n", num1);
	}else {
		printf ("false\n", num1);
	}
	
	if (perNum(num2)){
		printf ("true\n", num2);
	}else {
		printf ("false\n", num2);
	}
	return 0;
}
