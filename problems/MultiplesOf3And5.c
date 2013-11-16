#include <stdio.h>

int arithSum (int n) {
	return (1+n)*n/2;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", arithSum(999/3)*3+arithSum(999/5)*5-arithSum(999/15)*15);
	return 0;
}