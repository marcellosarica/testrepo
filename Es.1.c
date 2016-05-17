#include <stdio.h>

char minMaiu(char);//prototipo

main()
{
	char c;
	c=minMaiu('a');
	printf("%c\n",c);
}
char minMaiu (char x)
{
	if (x>='a' && x<='z')
		x-=32;
	return x;
}
