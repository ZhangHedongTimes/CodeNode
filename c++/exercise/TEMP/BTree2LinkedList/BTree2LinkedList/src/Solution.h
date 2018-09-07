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
	//∏¥‘”¡¥±Ì∏≥÷µ
	TreeNode * Convert(TreeNode* pRootOfTree);
	void ConvertNode(TreeNode*  pNode, TreeNode** pLastNodeInList);
	void Test();
};

