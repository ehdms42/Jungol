#include <stdio.h>
/*int main()
{
	int a,b,c;
	
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("sum = %d\n", a+b+c);
	printf("avg = %.d\n", (a+b+c)/3);
	
	return 0;
	
}*/
#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("5���� ���� �Է��ϼ��� : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
      a = a + 3;
	 b= b - 3;
c = c * 3;
 d = d / 3;
 e = e % 3;
	printf("%d %d %d %d %d", a, b, c, d, e);
	
	return 0;
}
