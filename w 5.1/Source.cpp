#include <stdio.h>
int main()
{
	int j = 0;
	char str[50];
	char* ptr;
	scanf_s("%s", str, 49);
	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z')
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				printf("%c ", (*ptr - 'a') + 'A');
			if (*ptr >= 'A' && *ptr <= 'Z')
				printf("%c ", (*ptr - 'A') + 'a');
		}
		else
			printf("0 ");
		ptr += 1;

	}
	return 0;
}