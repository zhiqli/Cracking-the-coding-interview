#include <stdio.h>
#include <string.h>

void spaceReplace1(char *pStr)
{
	int len = strlen(pStr);
	int i = 0;
	int iCount = 0;
	for (; i < len; i++)
	{
		if (pStr[i] == ' ')
			iCount++;
	}

	int p = len + 2 * iCount;
	
	pStr[p--] = '\0';
	
	for (i = len - 1; i >= 0; i--)
	{
		if (pStr[i] == ' ')
		{
			pStr[p--] = '0';
			pStr[p--] = '2';
			pStr[p--] = '%';
		}
		else
		{
			pStr[p--] = pStr[i];
		}
	}
}

char* spaceReplace(char *pStr)
{
	int len = strlen(pStr);

	int i = 0;
	int iCount = 0;
	for (; i < len; i++)
	{
		if (pStr[i] == ' ')
			iCount++;
	}

	int newlen = len + 2*iCount;
	char *pNew = new char[newlen+1];
	
	int p = 0;
	for (i = 0; i < len; i++)
	{
		if (pStr[i] == ' ')
		{
			pNew[p++] = '%';
			pNew[p++] = '2';
			pNew[p++] = '0';
		}
		else
		{
			pNew[p++] = pStr[i];
		}
	}
	pNew[p] = '\0';

	return pNew;
}

int main()
{
	char *pStr = new char[1024];
	memset(pStr, 0, 1024);
	memcpy(pStr, "a  bc ef g", 10);
	spaceReplace1(pStr);

	printf("%s\n", pStr);
}
