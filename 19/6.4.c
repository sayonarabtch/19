#include <stdio.h>

int main(){
	float res = .0, v;
	char oper;

	printf ("������� ���������\n");
	while (oper != 'E') {
		scanf ("%f %c", &v, &oper);
		switch (oper) {
		case 'S':
			res = v;
			break;
		case '+':
			res += v;
			break;
		case '-':
			res -= v;
			break;
		case '*':
			res *= v;
			break;
		case '/':
			if (v == 0)
				printf("������!\n");
			else
				res /= v;
			break;
		default:
printf("������\n");
}
printf("= %f\n", res);
}
return 0;
}
