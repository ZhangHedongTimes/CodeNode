#include "Solution.h"


Solution::Solution()
{

}


Solution::~Solution()
{

}

TreeNode * Solution::Convert(TreeNode* pRootOfTree)
{
	TreeNode* pLastNodeList = nullptr;
	ConvertNode(pRootOfTree, &pLastNodeList);
	

	TreeNode* pHeadOfList = pLastNodeList;
	while (pHeadOfList != nullptr && pHeadOfList->left != nullptr)
		pHeadOfList = pHeadOfList->left;
	return pHeadOfList;
}

void Solution:: ConvertNode(TreeNode*  pNode, TreeNode** pLastNodeInList)
{
	if (pNode == nullptr)
		return;
	TreeNode *pCurrent = pNode;
	if (pCurrent->left != nullptr)
	{
		ConvertNode(pCurrent->left, pLastNodeInList);
	}
	pCurrent->left = *pLastNodeInList;
	if (*pLastNodeInList != nullptr)
		(*pLastNodeInList)->right = pCurrent;
	*pLastNodeInList = pCurrent;
	if (pCurrent->right != nullptr)
		ConvertNode(pCurrent->right, pLastNodeInList);
}

void Solution::Test()
{

}