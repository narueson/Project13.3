#include<stdio.h> 
int main()

{

	int A, B, start;

	printf("Enter two positive intergers: ");

	scanf_s("%d %d", &A, &B);

	if (A < B) start = A;

	else start = B;

	while (((A % start) != 0) || ((B % start) != 0))

	{

		start = start - 1;

	}

	printf("The g.c.d of %d and %d is %d", A, B, start);

}
