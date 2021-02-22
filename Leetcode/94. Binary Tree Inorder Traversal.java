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
    private void InOrder(List<Integer> nodes, TreeNode root){
        if(null == root){
            return;
        }
        InOrder(nodes, root.left);
        nodes.add(root.val);
        InOrder(nodes, root.right);
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> nodes = new ArrayList<Integer>();
        InOrder(nodes, root);
        return nodes;
    }
}
