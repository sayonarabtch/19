#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int x = 0, t_p;//���������� �����
	float cash = 0;
	printf("s");
	printf("������� �����, ��������������� �������� �������� ������ ��� ��������:\n 1) $8.75/�       2)$9,33/�\n 3) $10.00/�      4)$11.20/�\n 5)����� \n");
	scanf("%i", &t_p);
	switch(t_p) {
		case'1' :
			scanf("%i", &x);
			cash = x * 8.75;
			x = 0;
			break;
		case'2' :
			scanf("%i", &x);
			cash = x * 9.33;
			x = 0;
			break;
		case'3' :
			scanf("%i", &x);
			cash = x * 10.00;
			x = 0;
			break;
		case'4' :
			scanf("%i", &x);
			cash = x * 11.20;
			x = 0;
			break;
		case'5' :

			break;
	}

	return 0;
}
