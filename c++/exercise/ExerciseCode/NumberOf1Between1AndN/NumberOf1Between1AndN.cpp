#include "NumberOf1Between1AndN.h"


NumberOf1Between1AndN::NumberOf1Between1AndN()
{
}

NumberOf1Between1AndN::~NumberOf1Between1AndN()
{ 
}

int NumberOf1Between1AndN::NumberOf1(const char* strN)
{
	if (!strN || *strN<'0' || *strN>'9' || *strN == '\n')
		return 0;
	unsigned int length = static_cast<unsigned int>(strlen(strN));//获取字符串长度，也就是数字位数
	int * OrdersHave1 = new int[length];//计算不超过Order位数字含有带1数字的个数
	OrdersHave1[0] = 1;//
	int *pow = new int[length];
	pow[0] = 1;
	if (length == 1)
	{
		if (*strN < '1') return 0;
		else return 1;
	}
	for (int i = 1; i < length; i++)
	{
		pow[i] = pow[i-1] * 10;
		OrdersHave1[i] = OrdersHave1[i-1] * 9 + pow[i];
	}
	int num = 0;
	for (int i = 0; i < length; i++)
	{
		if (strN[i] - '0' > 1)
		{
			num += (strN[i] - '0' - 1)*OrdersHave1[length - i - 2] + pow[length - i - 1];
			if (strN[length - 1] - '0' >= 1)
				num++;
		}
		else if(strN[i] - '0' == 1)
		{
			num += OrdersHave1[length - i - 2];
			for (i++; i< length; i++)
			{
				num += (strN[i] - '0')*pow[length - i - 1];
			}
			num++;
		}
	}

	return num;
}	

int NumberOf1Between1AndN::Solution(int n)
{
	if (n <= 0)
		return 0;
	char strN[50];
	sprintf_s(strN, "%d", n);
	//printf("%s", strN);
	return NumberOf1(strN);
}

void NumberOf1Between1AndN::Test()
{
	int num = Solution(0);
	printf("num %d\n", num);
	num = Solution(1);
	printf("num %d\n", num);
	num = Solution(10);
	printf("num %d\n", num);
	num = Solution(12);
	printf("num %d\n", num);
	num = Solution(100);
	printf("num %d\n", num);
	num = Solution(101);
	printf("num %d\n", num);
	num = Solution(105);
	printf("num %d\n", num);
	
}