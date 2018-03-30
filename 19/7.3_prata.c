
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, s_even = 0, s_odd = 0, even = 0, odd = 0;

	while(x != 0) {

		scanf("%i", &x);
		if(x%2 == 0 && x != 0) {
			even++;
			s_even += x;	//четные
		}
		if(x % 2 != 0 ) {
			odd++;
			s_odd += x;	//нечетные
		}
	}
	printf(" оличество введенных четных чисел: %i\n среднее четных чисел: %i \n", even, s_even/even);
	printf(" оличество введенных нечетных чисел: %i\n среднее нечетных чисел: %i \n", odd, s_odd/odd);
}
