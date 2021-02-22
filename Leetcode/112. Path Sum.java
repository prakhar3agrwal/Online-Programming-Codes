/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean isLeaf(TreeNode root){
        if(null == root){
            return false;
        }
        
        return (root.left == null && root.right == null);
    }
    private boolean traverse(TreeNode root, int targetSum){
        if(null == root){
            return false;
        }
        if(targetSum == root.val && isLeaf(root)){
            return true;
        }
        return traverse(root.left, targetSum-root.val) || traverse(root.right, targetSum-root.val);
    }
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(null == root){
            return false;
        }
        return traverse(root, targetSum);
    }
}
