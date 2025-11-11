#include <stdlib.h>//bai9

int gcd(int a, int b){
	if (b ==0){
		return a;
	}
	return gcd(b, a % b);
}
int main (){
	int a = 18;
	int b = 36;
}
