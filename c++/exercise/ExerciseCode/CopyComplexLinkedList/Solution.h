#pragma once

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm> 
#include"../src/struction.h"


class Solution
{
public:
	Solution();
	~Solution();

public:
	//复杂链表赋值
	RandomListNode * Clone(RandomListNode* pHead);
	
	//复制链表
	void CloneNodes(RandomListNode* pHead);
	
	//更改随机指针
	void ConnectRandomNodes(RandomListNode* pHead);
	
	RandomListNode* ReconnectNode(RandomListNode*pHead);
	RandomListNode* Test();
	void PrintList(RandomListNode* pHead);
	
};

