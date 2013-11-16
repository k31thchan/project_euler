#include <stdio.h>

int main(int argc, char const *argv[])
{
	int	f1 = 0,
		f2 = 1,
		sum = 0;
	while (1) {
		f2 = f1 + f2;
		f1 = f2 - f1;
		if (f1 >= 4000000) {
			break;
		}
		if (f1%2) {
			sum += f1;
		}
	}
	printf("%d\n", sum);
	return 0;
}