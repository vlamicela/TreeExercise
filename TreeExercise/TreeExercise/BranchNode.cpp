#include "stdafx.h"
#include "BranchNode.h"

BranchNode::BranchNode() {
	data = 1;
}

BranchNode::BranchNode(BranchNode* r, bool l)
{
	root = r;
	left = l;
	if (root == nullptr) {
		data = 1;
		return;
	}//end if
	
	data = root->data;
	if (!left) {
		//get left node of root
		if (root->lBranch) {
			neighbor = root->lBranch;
			data += neighbor->data;
		}
	}

	else {
		//get right node of root
		if (root->rBranch) {
			neighbor = root->rBranch;
			data += neighbor->data;
		}
	}

}


BranchNode::~BranchNode()
{
	if (root) delete root;
	if (neighbor) delete neighbor;
	if (lBranch) delete lBranch;
	if (rBranch) delete rBranch;
}

void BranchNode::BranchOut()
{
	//create left and right branches
	lBranch = new BranchNode(this, true);
	rBranch = new BranchNode(this, false);
	//lBranch->neighbor = rBranch;
	//rBranch->neighbor = lBranch;
}
