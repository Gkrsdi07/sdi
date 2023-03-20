#include<stdio.h>

int main()
{
	//printf("HEy GHANHSYAM\n");
	int a, b, c;

	printf("Enter the value of a and b: \n");
    scanf("%d %d", &a, &b);

    c = a+b;
	printf("Addition of two number are: %d\n", c);

	c = a-b;
	printf("Subtraction of two number are: %d\n", c);

    c = a*b;
	printf("Multi of two number are: %d\n", c);

    c = a/b;
	printf("Divison of two number are: %d\n", c);

    c = a%b;
	printf("Modular of two number are: %d\n", c);

	return 0;
}