
 /*************
 如果向量中包含负数,是否应该包含某个负数,并期望旁边的正数会弥补它呢？例如:{6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)。给一个数组，返回它的最大连续子序列的和
 **************/
#pragma once
#include<iostream>
#include<vector>
#include"../src/struction.h"

class FindGreatestSumOfSubArray
{
public:
	FindGreatestSumOfSubArray();
	~FindGreatestSumOfSubArray();
	int Solution(int * array,int nLength);
	void Test();
	bool g_InvalidInput = false;

};

