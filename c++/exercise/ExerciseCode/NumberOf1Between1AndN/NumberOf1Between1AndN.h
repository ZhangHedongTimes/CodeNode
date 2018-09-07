#pragma once
#include<iostream>
#include<vector>
#include"../src/struction.h"

class NumberOf1Between1AndN
{
public:
	NumberOf1Between1AndN();
	~NumberOf1Between1AndN();
	int NumberOf1(const char* strN);
	int Solution(int n);
	
	void Test();
};

