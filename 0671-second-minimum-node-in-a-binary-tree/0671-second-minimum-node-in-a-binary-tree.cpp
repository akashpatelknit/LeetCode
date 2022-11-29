class Solution {
public:
    long solve(TreeNode* r, int mini){
	//value are in the range [1,INT_MAX] so we need to keep record with LONG_MAX
        if(r == nullptr){
            return LONG_MAX;
        }
			//if current node is not equal to the root node then this is the possible 2nd largest
        if(r -> val != mini){
            return r -> val;
        }
		//if this node is same as root then we need to get minimum from left and right of the node
        return min(solve(r -> left, mini),solve(r -> right,mini));
    }
    int findSecondMinimumValue(TreeNode* root) {
        long ans = solve(root , root -> val);
        if(ans == LONG_MAX){
            return -1;
        }
        return ans;
    }
};