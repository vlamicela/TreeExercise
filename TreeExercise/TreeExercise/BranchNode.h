#pragma once
class BranchNode
{
public:
	BranchNode();
	BranchNode(BranchNode* r, bool l);
	~BranchNode();
	int data; //data stored in node
	bool left; //indicates whether or not it's the left node
	BranchNode* root; //parent node
	BranchNode* neighbor;
	BranchNode* lBranch;
	BranchNode* rBranch;
	void BranchOut();
};

