#include <stdio.h>

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\t' || c == '\b' || c == ' ' || c == '\n')
			++nl;
	printf("\n%d\n", nl);
}