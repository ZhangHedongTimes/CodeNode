#include "FindGreatestSumOfSubArray.h"



FindGreatestSumOfSubArray::FindGreatestSumOfSubArray()
{

}


FindGreatestSumOfSubArray::~FindGreatestSumOfSubArray()
{

}


int FindGreatestSumOfSubArray::Solution(int *array, int nLength)
{
	if (nLength <= 0 || array == nullptr)
	{
		g_InvalidInput = true;
		return -1;
	}
	g_InvalidInput = false;

	int * all_sub_max = new int(nLength);
	all_sub_max[0] = array[0];
	int GreatestSubSum = 0x80000000;
	for (int i = 1; i != nLength; i++)
	{
		if (all_sub_max[i - 1] > 0)
			all_sub_max[i] = all_sub_max[i - 1] + array[i];
		else
			all_sub_max[i] = array[i];
		GreatestSubSum = GreatestSubSum > all_sub_max[i] ? GreatestSubSum : all_sub_max[i];
	}
	return GreatestSubSum;

}

void FindGreatestSumOfSubArray::Test()
{
	int array[8] = { 1,-2,3,10,-4,7,2,-5 };
	int nLength = 8;
	int maxsub=Solution(array, nLength);
	printf("The Greatest Sum Of Sub Array is %d \n", maxsub);
}