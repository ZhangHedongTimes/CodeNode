#include "DigitAtIndex.h"
#include<string>


DigitAtIndex::DigitAtIndex()
{
}


DigitAtIndex::~DigitAtIndex()
{
}


int DigitAtIndex::Solution(int n)
{//从第0个开始数起
	if (n < 0) return -1;
	if (n < 10) return n;
	int add_num=10, index,prior=n,next=n-add_num,i=1;
	while (next > 0)
	{
		i++;
		prior = next;
		next = next - 9 * add_num*i;
		add_num *= 10;
	}
	int r = prior % i;
	int q = add_num/10 + prior / i;
	char s[50];
	sprintf_s(s, "%d", q);
	return s[r]-'0';
}
void DigitAtIndex::Test()
{
	int n = 1001;
	printf("n: %d     solution: %d  \n", n, Solution(n));
	n = -1;
	printf("n: %d     solution: %d  \n", n, Solution(n));
	n = 0;
	printf("n: %d     solution: %d  \n", n, Solution(n));
	n = 1;
	printf("n: %d     solution: %d  \n", n, Solution(n));
	n = 12;
	printf("n: %d     solution: %d  \n", n, Solution(n));
	n = 21;
	printf("n: %d     solution: %d  \n", n, Solution(n));

}