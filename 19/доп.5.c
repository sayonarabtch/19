 #include <stdio.h>

int main(){
	int left = 0, right = 19, mid, ind = -1;
	char ch;
	printf("������� ������� ������");
	scanf("%c", &ch);
	char ar[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
	while(left <=right){
		mid = (right + left)/2;
		if(ch == ar[mid]){
			ind = mid;
			break;
		}
		if(ch < ar[mid]) right = mid - 1;
		else left = mid + 1 ;

	}
	if (ind == -1) printf("������ ������� ��� \n");

	else printf("������� ������ ��������� � %i ������ \n", ind);

}
