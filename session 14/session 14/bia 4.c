#include <stdio.h>//bai6

int findMax (int arr[], int n){
	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main (){
	int n;
	printf ("nhap so phan tu cua mang; ");
	scanf ("%d", &n);
	int arr[n];
	printf ("nhap phan tu cua mang: ");
	for (int i = 0; i < n; i++){
		printf ("phan tu thu arr[%d]: ");
		scanf ("%d", &arr[i]);
	}
	int max = findMax(arr, n);
	printf ("so lon nhat trong mang la: %d");
	return 0;
	
}
