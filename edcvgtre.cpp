//#include <stdio.h>
//#define pI 3.14
//
//typedef struct __point {
//    double xPos;
//    double yPos;
//} point;
//
//typedef struct __circle {
//    point center;
//    double rad;
//} circle;
//
//void ShowCircleInfo(const circle * ptr) {
//    printf("�����߽� : [%g, %g]\n", 
//        (ptr->center).xPos, (ptr->center).yPos);
//    printf("���ǳ��� : %g\n", (ptr->rad) * (ptr->rad) * pI); 
//	}
//
//int main(void) {
//    circle c1 = {     
//        {1.1, 2.2},
//        2.5
//    };
//    ShowCircleInfo(&c1);
//    return 0;
//}

//#include<stdio.h>
//typedef struct box
//{
//	int data;
//	struct box * boxRef;
//} box;
//int main(void)
//{
//	int i;
//	box * bxPtr;
//	
//	box b1={1, NULL};
//	box b2={11, NULL};
//	
//	b1.boxRef=&b2;
//	b2.boxRef=&b1;
//	
//	bxPtr=&b1;
//	
//	for(i=1; i<=10; i++)
//	{
//		printf("%3d", bxPtr->data);
//		(bxPtr->data)++;
//		bxPtr=bxPtr->boxRef;
//		if(!(i%2))
//		printf("\t");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int *pi;
//	double *pd;
//	
//	pi = (int*)malloc(sizeof(int));
//	if(pi==NULL)
//	{
//		printf("#d���� �Ÿ𸮰� �����մϴ�. ");
//		exit(1);
//	}
//	pd = (double *)malloc(sizeof(double));
//	*pi = 10;
//	*pd=3.4;
//	printf("%d %lf", *pi, *pd);
//	
//	free(pi);
//	free(pd);
//	
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int *pi;
//	int i, sum=0;
//	
//	pi=(int *)malloc(5*sizeof(int));
//	if(pi==NULL){
//		printf("�޸𸮰� �����մϴ�. \n");
//		exit(1);
//	}
//	printf("�ټ����� ���̸� �Է��ϼ���.\n");
//	for(i=0; i<5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum+=pi[i];
//	}
//	
//	printf("�ټ����� ��� ����: %.1f\n", sum/5.0);
//	free(pi);
//	return 0;
//}
