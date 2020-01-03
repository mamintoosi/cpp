#include <stdio.h>
int main()
{
	int i, j;
	char A[10] = {'z', 'b', 'f', 'h', 'a', 'v', 'f', 'r', 's', 'd'};
	char temp;
	for (i = 0; i < 9; ++i)
		for (j = 0; j < 9 - i; ++j)
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
	for (i = 0; i < 10; ++i)
		printf("%c", A[i]);
}
