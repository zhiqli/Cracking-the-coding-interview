#include <stdio.h>
#include <string.h>

//创建256长的数组，出现一个字符则将该位置为true，下次遇到true就将后1位前移。
void rmDuplicate(char *pStr)
{
	int len = strlen(pStr);
	char bArr[256] = {0};

	int i = 0;
	int p = 0;
	for (; i < len; i++)
	{
		if (!bArr[pStr[i]])
		{
			pStr[p++] = pStr[i];
			bArr[pStr[i]] = 1;
		}
	}
	
	pStr[p] = '\0';
}

//对每个字符往后查找是否有相同的，遇到相同的字符先置为\0。
void rmDuplicate2(char *pStr)
{
	int len = strlen(pStr);

	int i = 0;
	int p = 0;
	for (; i < len; i++)
	{	
		if (pStr[i] != '\0')
		{
			pStr[p++] = pStr[i];
			int j = i + 1;
			for (; j < len; j++)
			{
				if (pStr[j] == pStr[i])
				{
					pStr[j] = '\0';
				}
			}
		}
	}
	pStr[p] = '\0';	
}

int main()
{
	char sz[] = "abcdbeefg";
	rmDuplicate2(sz);

	printf("%s\n", sz);
	return 0;
}
