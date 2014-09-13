#include <stdio.h>
#include <string.h>

//创建一个256长度的数组，同时遍历两个字符串，串1遇到一个字符就+1，串2则-1，最后比较数组中的所有元素是否为0
bool anagrams(char *pStr1, char *pStr2)
{
	int len1 = strlen(pStr1);
	int len2 = strlen(pStr2);

	if (len1 != len2)
		return false;
	
	int i = 0;
	char bArr[256] = {0};
	for (; i < len1; i++)
	{
		bArr[pStr1[i]]++;
		bArr[pStr2[i]]--;
	}

	for (i = 0; i < 256; i++)
	{
		if (0 != bArr[i])
			return false;
	}
	
	return true;
}

int main()
{
	char *pStr1 = "abcdefg";
	char *pStr2 = "agbdcef";
	bool bRet = anagrams(pStr1, pStr2);
	printf("result = %d\n", bRet);
	return 0;
}
