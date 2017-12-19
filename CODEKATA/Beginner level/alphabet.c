#include <stdio.h>
int main() {
    char ch;
    scanf("%c\n",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
	return 0;
}
