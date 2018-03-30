
#include <stdio.h>

int main(void) {
	int x = 0 ,d = 0 ,n = 1 ,i = 0;
	scanf("%i", &x);
	int stroka[n];
	while(x != 0){

		d = x % 2;
		stroka[i] = d;
		x = (x - d) / 2;
		d = 0;
		i++;
		n++;
	}

	for(int i = n - 2; i >= 0 ; i--){
		printf("%i", stroka[i]);
	}
}
