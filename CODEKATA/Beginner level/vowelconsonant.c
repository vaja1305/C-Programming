#include <stdio.h>
int main() {
	char n;
	scanf("%c\n",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
	    printf("vowel");
	}
	else
	{
	    printf("consonant");
	}
	return 0;
}
