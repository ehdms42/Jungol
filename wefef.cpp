/*#include <stdio.h>
int main()
{
	for(int i=2; i<=6; i++){
		for(int j=i; j<i+5; j++){
			printf("%d", j);
	}
	printf("\n");
	}
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	for(int i=1; i<=9; i++){
		for(int j=2; j<=4 ;j++){
			printf("%d * %d = %d  ", j, i, j*i);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	for(int i=2; i<=4; i++){
		for(int j=1; j<=5; j++){
			printf("%d * %d =%d   ", i, j, i*j);
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        printf("JUNGOL\n");
    }

    return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	if(a>b){
		for(int i=b; i<=a; i++){
			printf("%d ", i);
		}
	}
	else if(b>a){
		for(int i=a; i<=b; i++){
			printf("%d ", i);
		}
	}
	
	return 0;
}*/

/*#include <stdio.h>
int main(){
	
	int a, sum=0;
	scanf("%d", &a);
	
	if(a>=5){
		for(int i=5; i<=a; i++){
			if(i%5==0){
				sum=sum+i;
			}
		}
		printf("%d", sum);
	}
	
	return 0;
	
}*/

/*#include <stdio.h>
int main()
{
    int a,b,sum=0, cnt=0;
    double avg;
    scanf("%d", &a);

    if(a<=100){
        for(int i=1; i<=a; i++){
            scanf("%d", &b);
            cnt++;
            sum+=b;
        }

        avg = (double)sum/cnt;
    }

    printf("%.2lf",avg);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a, even=0, odd=0;
	for(int i=1; i<=10; i++){
		scanf("%d", &a);
		if(a%2==0){
			even++;
		}
		else odd++;
	}
	
	printf("even : %d\n", even);
	printf("odd : %d\n", odd);
	
	return 0;
}*/

/*#include <stdio.h>
int main(){
	
	int a,b, sum=0, cnt=0;
	double avg;
	scanf("%d %d", &a, &b);
		if(a<b){
			for(int i=a; i<=b; i++){
			
			if(i%3==0 || i%5==0){
				sum+=i;
				cnt++;	
			}	
		}
		}
		else if(b<a){
			for(int i=b; i<=a; i++){
			
			if(i%3==0 || i%5==0){
				sum+=i;
				cnt++;	
			}	
		}
	}
	else {
		if(a%3==0 || a%5==0){
			sum+=a;
			cnt++;
		}
	}
		
	
	avg = (double)sum/cnt;
	
	printf("sum : %d\n", sum);
	printf("avg : %.1lf", avg);
	
	return 0;
}
*/

/*#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	for(int i=a; i<=a*10; i+=a){
		printf("%d ", i);
	}
	
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}
	
	return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }

    return 0;
}*/
