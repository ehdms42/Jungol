/*#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        for(int j=a; j>i; j--){
            printf(" ");
        }
        
        for(int k=1; k<=i; k++){
        	printf("*");
		}
		printf("\n");
    }

    return 0;
} */
#include<stdio.h>
int main()
{
	int n, x;
	int s, t;
	
	scanf("%d %d", &n, &x);
	
	for(int i=1; i<=n; i++){ 
		
		scanf("%d %d", &s, &t);	
		
		int sum = s+t;
	
	if(sum <=x)
	{
		if(s > t)
		{
			t=s;
		}
	}
	else printf("-1");
	}
	
	
	
	printf("%d\n", t);
	return 0;
}
