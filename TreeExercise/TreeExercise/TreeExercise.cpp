// TreeExercise.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "BranchNode.h"
//#include <time.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int treeLevels = 4;
	BranchNode* root = new BranchNode();
	BranchNode* currentNode = root;
	int numNodes = 2;
	cout << root->data << endl;
	root->BranchOut();
	cout << root->lBranch->data << root->rBranch->data << endl;
	root->lBranch->BranchOut();
	root->rBranch->BranchOut();
	cout << root->lBranch->lBranch->data << root->lBranch->rBranch->data << root->rBranch->lBranch->data << root->rBranch->rBranch->data << endl;
    return 0;
}

