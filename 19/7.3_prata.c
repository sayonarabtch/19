
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, s_even = 0, s_odd = 0, even = 0, odd = 0;

	while(x != 0) {

		scanf("%i", &x);
		if(x%2 == 0 && x != 0) {
			even++;
			s_even += x;	//������
		}
		if(x % 2 != 0 ) {
			odd++;
			s_odd += x;	//��������
		}
	}
	printf("���������� ��������� ������ �����: %i\n ������� ������ �����: %i \n", even, s_even/even);
	printf("���������� ��������� �������� �����: %i\n ������� �������� �����: %i \n", odd, s_odd/odd);
}
