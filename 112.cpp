/*#include <stdio.h>
int main()
{
	char a = 'A';
	while (a<='Z'){
		printf("%c", a);
		a++;
	}
	return 0;
	}
*/
/*#include <stdio.h>
int main()
{
	int num=1;
	while(num<=15){
		printf("%d ", num++);
	}
	return 0;
}*/
#/*include <stdio.h>
int main()
{
	int num=1;
	int sum=0;
	
	while (num<=10){
		sum+=num;
		num++;
	}
	
	printf("1부터 10까지의 합 = %d\n", sum);
	printf("while문이 끝난 후의 num의 값 = %d", num);
	
	return 0;
	
}*/
/*#include <stdio.h>
int main()
{
	int num, a=1, sum=0;
	scanf("%d", &num);
	
	while (num<=100){
		sum+=num;
		a++;
	}
	printf("%d", sum);
}*/
/*#include <stdio.h>
int main()
{
	int i,a;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++){
		printf("c언어 프로그래밍\n");
	}
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int i;
	char a;
	scanf(" %c", &a);
	
	for(i=1; i<=20; i++){
		printf("%c", a);
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char i;
	
	for(i='A'; i<='Z'; i++)
	{
			printf(" %c", i);
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a;
	
	for(a=10; a<=20; a++){
		printf("%d ",a );
	}
	return 0;0
}*/

/*#include <stdio.h>
int main()
{
	int i;
	for(i=1; i<=20; i++){
		if(i%2!=0){
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	if(a>=2 && a<=50){
		for(int i=2; i<=a; i+=2){
			printf("%d ", i);
		}
	}
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int a, sum=0;
	scanf("%d", &a);
	
	for(int i=1; i<=a; i++){
		sum+=i;
	}
	printf("%d", sum);
	
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int a,i,sum=0;
	scanf("%d", &a);
	
	for(i=a; i<=100; i++){
		sum+=i;
	}
	printf("%d", sum);
	
	return 0;
}*/

#include <stdio.h>
int main()
{
	int a,i,sum=0;
	if(a<=100){
		scanf("%d", &a);
		for(i=a; i<=100; i++){
			sum+=i;
		}
	}
	printf("%d", sum);
}
