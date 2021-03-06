// Day 1 of june Leetcode challenge

// Problem 1 
// Invert a binary tree

// Example:

// Input:

//        5
//      /   \
//     4     9
//    / \   / \
//   1   3 8   7


// Output:

//        5
//      /   \
//     9     4
//    / \   / \
//   7   8 3   1






#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int data)
	{
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};


TreeNode* invertTree(TreeNode* root) 
{
    if(root == nullptr)
        return nullptr;
        
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
        
    invertTree(root->left);
    invertTree(root->right);
        
    return root;
}
