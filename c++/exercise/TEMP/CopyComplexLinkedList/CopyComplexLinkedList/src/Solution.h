#pragma once

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm> 
#include"struction.h"


class Solution
{
public:
	Solution();
	~Solution();

public:
	//��������ֵ
	RandomListNode * Clone(RandomListNode* pHead);
	
	//��������
	void CloneNodes(RandomListNode* pHead);
	
	//�������ָ��
	void ConnectRandomNodes(RandomListNode* pHead);
	
	RandomListNode* ReconnectNode(RandomListNode*pHead);
	RandomListNode* Test();
	void PrintList(RandomListNode* pHead);
	
};

