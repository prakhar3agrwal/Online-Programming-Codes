/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    boolean getPathOfANode(List<TreeNode> path, TreeNode root, TreeNode value){
        if(root == null){
            return false;
        }
        else if(root.val == value.val){
            path.add(root);
            return true;
        }
        boolean left = getPathOfANode(path, root.left,value);
        if(true == left){
            path.add(root);
            return true;
        }
        boolean right = getPathOfANode(path, root.right,value);
        if(true == right){
            path.add(root);
            return true;
        }
        return false;
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode[] nodes) {
        if(nodes.length==1){
            return nodes[0];
        }
        List<TreeNode> pathOfP = new ArrayList<TreeNode>();
        List<TreeNode> pathOfQ = new ArrayList<TreeNode>();
        List<TreeNode> temp = null;
        getPathOfANode(pathOfP, root, nodes[0]);
        getPathOfANode(pathOfQ, root, nodes[1]);
        if(nodes.length==2){
            Collections.reverse(pathOfP);
            Collections.reverse(pathOfQ);
            int i=0;
            while(i<pathOfP.size() && i<pathOfQ.size()){
                if(!pathOfP.get(i).equals(pathOfQ.get(i))){
                    break;
                }
                i++;
            }
            return pathOfP.get(i-1);
        }
        
        if(pathOfQ.size()<pathOfP.size()){
            temp = pathOfP;
            pathOfP = pathOfQ;
            pathOfQ = temp;
        }
        for(int i=2;i<nodes.length-1;i++){
            pathOfQ.clear();
            getPathOfANode(pathOfQ, root, nodes[i]);
            if(pathOfQ.size()<pathOfP.size()){
                            temp = pathOfP;
            pathOfP = pathOfQ;
            pathOfQ = temp;
            }
        }
        pathOfQ.clear();
        getPathOfANode(pathOfQ, root, nodes[nodes.length-1]);
        Collections.reverse(pathOfP);
        Collections.reverse(pathOfQ);

        int i=0;
            while(i<pathOfP.size() && i<pathOfQ.size()){
                if(!pathOfP.get(i).equals(pathOfQ.get(i))){
                    break;
                }
                i++;
            }
            return pathOfP.get(i-1);
        
    }
}