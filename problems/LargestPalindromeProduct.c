#include <stdio.h>
int isPalindrome (int n) {
	int l, i;
	char d[7];
	l = sprintf (d, "%d", n);
	for (i=0; i<l/2; i++) {
		if (d[i]!=d[l-1-i]){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", isPalindrome(1201));
	/* code */
	return 0;
}