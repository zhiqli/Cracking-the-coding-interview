#include <stdio.h>
#include <string.h>

//创建一个256大小的数组，遍历整个字符串，如果某个字符出现了就将该位置置为true。

bool uniqueChar(char *pStr)
{
	bool bArr[256] = {0};

	int len = strlen(pStr);
	
	int i = 0;
	for (i; i < len; i++)
	{
		if (bArr[pStr[i]])
		{
			return false;
		}
		bArr[pStr[i]] = true;
	}
	
	return true;
}

int main()
{
	char *pStr = "1234-5*wr3dg";

	bool bRet = uniqueChar(pStr);

	printf("result is %d\n", bRet);	
}
