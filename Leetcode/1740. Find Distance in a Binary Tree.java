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
    boolean getPathOfANode(List<Integer> path, TreeNode root, int value){
        if(root == null){
            return false;
        }
        else if(root.val == value){
            path.add(root.val);
            return true;
        }
        boolean left = getPathOfANode(path, root.left,value);
        if(true == left){
            path.add(root.val);
            return true;
        }
        boolean right = getPathOfANode(path, root.right,value);
        if(true == right){
            path.add(root.val);
            return true;
        }
        return false;
    }
    public int findDistance(TreeNode root, int p, int q) {
        List<Integer> pathOfP = new ArrayList<Integer>();
        List<Integer> pathOfQ = new ArrayList<Integer>();
        getPathOfANode(pathOfP, root, p);
        getPathOfANode(pathOfQ, root, q);
        Collections.reverse(pathOfP);
        Collections.reverse(pathOfQ);

        int i=0;
        while(i<pathOfP.size() && i<pathOfQ.size()){
            if(!pathOfP.get(i).equals(pathOfQ.get(i))){
                break;
            }
            i++;
        }
        return (pathOfP.size()-i + pathOfQ.size()-i);
        
    }
}
