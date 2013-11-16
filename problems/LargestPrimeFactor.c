#include <stdio.h>
int main(int argc, char const *argv[])
{
	long long	i,
				max = 2,
				n 	= 600851475143;
	for (i=2; i<=n; i++){
		while (1) {
			if (n%i) {
				break;
			} else {
				n /= i;
				max = i;
			}
		}
	}
	printf("%lld\n", max);
	return 0;
}