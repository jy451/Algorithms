#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<windows.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
//Solution1 0(nlogn)
class Solution{
    public:
        bool isBalance(TreeNode* root){
            if(!root) return true;
            int left_height =height(root->left);
            int right_height=height(root->right);
            return (abs(left_height-right_height)<=1)&& isBalance(root->left)
            &&isBalance(root->right);
        }
    private:
        int height(TreeNode* root){
            if(!root) return 0;
            return max(height(root->left),height(root->right))+1;
        }
};

//Solution2 0(n)
class Solution{
    public:
        bool isBalance(TreeNode* root){
            if(!root) return true;
            bool balanced=true;
            height(root,&balanced);
            return balanced;
        }
    private:
        int height(TreeNode* root,bool* balanced){
            if(!root) return 0;
            int left_height=height(root->left,balanced);
            int right_height=height(root->right,balanced);
            if (abs(left_height-right_height)>1){
                *balanced=false;
                return -1;
            }
            return max(left_height,right_height)+1;
        }
};

