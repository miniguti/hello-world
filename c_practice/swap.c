#include<stdio.h>

int main(void)
{
    int a, b;
	int temp;
	
	scanf("%d %d", &a, &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("%d %d\n", a, b);
	
	return 0;
}

    