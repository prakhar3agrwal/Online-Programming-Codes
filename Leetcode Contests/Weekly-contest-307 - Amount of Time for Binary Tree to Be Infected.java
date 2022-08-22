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
    Map<Integer, List<Integer>> map = new HashMap<>();
    Set<Integer> visited = new HashSet<>();
    private void traverse(Integer prev, TreeNode root){
        if(root == null){
            return;
        }
        int curr = root.val;
        if(prev!=null){
            List<Integer> list = map.getOrDefault(prev, new ArrayList<>());
            list.add(curr);
            map.put(prev, list);
            
            list = map.getOrDefault(curr, new ArrayList<>());
            list.add(prev);
            map.put(curr, list);
        }
        
        traverse(curr, root.left);
        traverse(curr, root.right);
    }
    
    public int amountOfTime(TreeNode root, int start) {
        traverse(null, root);
        visited.add(start);
        Queue<Integer> q = new LinkedList<>();
        q.add(start);
        int ans = 0;
        while(q.size()>0){
            ans++;
            int n = q.size();
            for(int i=0;i<n;i++){
                int curr = q.poll();
                List<Integer> list = map.getOrDefault(curr, new ArrayList<>());
                for(int j=0;j<list.size();j++){
                    if(visited.contains(list.get(j))){
                        continue;
                    }
                    visited.add(list.get(j));
                    q.add(list.get(j));
                }
            }
        }
        return ans-1;
    }
}
