#include <stdlib.h>

int gcd(int a, int b){
	if (b ==0){
		return a;
	}
	return gcd(b, a % b);
}
int main (){
	int a = 56;
	int b = 98;
}
