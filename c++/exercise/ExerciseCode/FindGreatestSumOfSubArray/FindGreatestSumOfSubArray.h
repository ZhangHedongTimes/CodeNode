
 /*************
 ��������а�������,�Ƿ�Ӧ�ð���ĳ������,�������Աߵ��������ֲ����أ�����:{6,-3,-2,7,-15,1,2,2},����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)����һ�����飬��������������������еĺ�
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

