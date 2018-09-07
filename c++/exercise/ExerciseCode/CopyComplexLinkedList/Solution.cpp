#include "Solution.h"



Solution::Solution()
{

}


Solution::~Solution()
{
}

RandomListNode * Solution::Clone(RandomListNode* pHead)
{
	CloneNodes(pHead);
	ConnectRandomNodes(pHead);
	return ReconnectNode(pHead);
}
//复制链表
void Solution::CloneNodes(RandomListNode* pHead)
{
	RandomListNode* pNode = pHead;
	while (pNode != nullptr)
	{
		RandomListNode* pClone = new RandomListNode(pNode->label);
		pClone->next = pNode->next;
		pClone->random = pNode->random;
		pNode->next = pClone;
		pNode = pClone->next;
	}
}
//更改随机指针
void Solution::ConnectRandomNodes(RandomListNode* pHead)
{
	RandomListNode* pNode = pHead;
	while (pNode != nullptr && pNode->next != nullptr)
	{
		if (pNode->next->random != nullptr)
		{
			pNode->next->random = pNode->random->next;
		}
		pNode = pNode->next->next;
	}
}

RandomListNode* Solution::ReconnectNode(RandomListNode*pHead)
{
	RandomListNode* pNode = pHead;
	RandomListNode* pCloneHead = nullptr;
	RandomListNode* cNode = nullptr;
	if (pNode != nullptr&&pNode->next != nullptr)
	{
		pCloneHead = pNode->next;
		cNode = pCloneHead;
	}

	while (cNode != nullptr&&cNode->next != nullptr)
	{
		pNode->next = cNode->next;
		pNode = cNode->next;
		cNode->next = pNode->next;
		cNode = pNode->next;
	}
	return pCloneHead;
}

RandomListNode* Solution::Test()
{
	std::vector<RandomListNode*> Nodes(6, nullptr);
	for (int i = 0; i < 5; i++)
	{
		Nodes[i] = new RandomListNode(i+1);
	}
	for (int i = 0; i < 5; i++)
	{
		Nodes[i]->next = Nodes[i + 1];
		Nodes[i]->random = nullptr;
	}
	Nodes[0]->random = Nodes[2];
	Nodes[1]->random = Nodes[4]; 
	Nodes[3]->random = Nodes[1];
	RandomListNode* pHead = Nodes[0];
	PrintList(pHead);
	auto T = Clone(pHead);
	PrintList(T);
	return pHead;
}

void Solution::PrintList(RandomListNode* pHead)
{
	auto pNode = pHead;
	while (pNode != nullptr)
	{
		printf("%d \n", pNode->label);
		pNode = pNode->next;
	}
	pNode = pHead;
	while (pNode != nullptr)
	{
		if (pNode->random != nullptr)
		{
			printf("%d \n", pNode->random->label);
		}
		else
		{
			printf("%s", "#\n");
		}
		pNode = pNode->next;
	}
	printf("%s", "\n");
}