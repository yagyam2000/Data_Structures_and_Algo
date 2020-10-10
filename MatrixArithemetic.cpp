//WAP for the implementation of 2d array using pointers, for the following operations on matrix:
//1)Addition 2)Subtraction 3)Transpose
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* create_matrix(int*,int*);
//void add_matrix(int*,int*,int*,int*,int*,int*);
void op_matrix(int*,int*,int*,int*,int*,int*,char);
void transpose_matrix(int,int,int*);
int main()
{
	int ch,m,n,p,q;
	int *a=create_matrix(&m,&n);
	int *b=create_matrix(&p,&q);
	while(1)
	{
		printf("Enter your choice:\n1.To Add\n2.To Subtract\n3.To Find Transpose\n: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					op_matrix(&m,&n,&p,&q,a,b,'+');
					break;
			case 2:
					op_matrix(&m,&n,&p,&q,a,b,'-');
					break;
			case 3:
					transpose_matrix(m,n,a);
					printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
					transpose_matrix(p,q,b);
					break;
			default:
					exit(0);
		}
	}
}
int* create_matrix(int *m,int *n)
{
	printf("Enter the order for the matrix: ");
	scanf("%d %d",m,n);
	int *a=(int*)malloc((*m)*(*n)*sizeof(int));
	if(a==NULL)
	{
		printf("Not able to allocate memory");
		exit(0);
	}
	printf("Enter the elements for matrix\n");
	for(int i=0;i<*m;i++)
		for(int j=0;j<*n;j++)
			scanf("%d",(a+(i*(*m)+j)));
	return a;
}
/*
void add_matrix(int *m,int *n,int *p,int *q,int* a,int* b)
{
	if(*m==*p && *n==*q)
	{
		int *sum=(int*)malloc((*m)*(*n)*sizeof(int));
		for(int i=0;i<*m;i++)
			for(int j=0;j<*n;j++)
				*(sum+(i*(*m))+j)=(*(a+(i*(*m))+j))+(*(b+(i*(*m))+j));
		
		for(int i=0;i<*m;i++)
		{
			for(int j=0;j<*n;j++)
				printf("%d ",*(sum+(i*(*m))+j));
			printf("\n");
		}
	}
	else
		printf("Addition Not Possible!");
}
*/
void op_matrix(int *m,int *n,int *p,int *q,int* a,int* b,char c)
{
	if(*m==*p && *n==*q)
	{
		signed int *ans=(signed int*)malloc((*m)*(*n)*sizeof(signed int));
		for(int i=0;i<*m;i++)
			for(int j=0;j<*n;j++)
				if(c=='-')
					*(ans+(i*(*m))+j)=(*(a+(i*(*m))+j))-(*(b+(i*(*m))+j));
				else if(c=='+')
					*(ans+(i*(*m))+j)=(*(a+(i*(*m))+j))+(*(b+(i*(*m))+j));
				
		for(int i=0;i<*m;i++)
		{
			for(int j=0;j<*n;j++)
				printf("%d ",*(ans+(i*(*m))+j));
			printf("\n");
		}
	}
	else
		printf("Operation Not Possible!");
}
void transpose_matrix(int m,int n,int *a)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",*(a+(j*n)+i));
		printf("\n");
	}
}
