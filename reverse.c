#include <stdio.h>
#include <string.h>

void swap(char &a, char &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

// 遍历到字符串的中间，与最后面的交换
void reversel(char *pStr)
{
	int len = strlen(pStr);
	
	int i = 0;

	for (; i < len/2; i++)
	{
		swap(pStr[i], pStr[len - i - 1]);
	}
}
int main()
{
	char pStr[] = "abcdefg";
	reversel(pStr);
	printf("a = 1 b = 2\n");
	char a = 1; 
	char b = 2;

	swap(a, b);

	printf("a = %d b = %d\n", a, b);

	printf("%s\n", pStr);
}
