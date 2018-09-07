#pragma once
#include<iostream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
		label(x), next(NULL), random(NULL) {
	}
};



