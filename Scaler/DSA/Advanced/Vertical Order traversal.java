/*

Problem Description
Given a binary tree, return a 2-D array with vertical order traversal of it. 

NOTE: If 2 Tree Nodes shares the same vertical level then the one with lesser depth will come first.

Problem Constraints
0 <= number of nodes <= 10^5

Input Format
First and only arument is a pointer to the root node of binary tree, A.

Output Format
Return a 2D array denoting the vertical order traversal of tree as shown.

Example Input
Input 1:

      6
    /   \
   3     7
  / \     \
 2   5     9
Input 2:

      1
    /   \
   3     7
  /       \
 2         9


Example Output
Output 1:

 [
    [2],
    [3],
    [6, 5],
    [7],
    [9]
 ]
Output 2:

 [
    [2],
    [3],
    [1],
    [7],
    [9]
 ]


Example Explanation
Explanation 1:

 First row represent the verical line 1 and so on.
*/

/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) {
 *      val = x;
 *      left=null;
 *      right=null;
 *     }
 * }
 */
class Pair{
    int row;
    int val;
    Pair(int row, int val){
        this.row = row;
        this.val = val;
    }
    int getKey(){
        return this.row;
    }
    int getValue(){
        return this.val;
    }
}
public class Solution {
    
    TreeMap<Integer, ArrayList<Pair>> mp = new TreeMap<>();
    
    private void solve(TreeNode root, int row, int col){
        if(root == null){
            return;
        }
        ArrayList<Pair> list = mp.getOrDefault(col, new ArrayList<>());
        list.add(new Pair(row, root.val));
        mp.put(col, list);
        
        solve(root.left, row+1, col-1);
        solve(root.right, row+1, col+1);
    }
    public ArrayList<ArrayList<Integer>> verticalOrderTraversal(TreeNode root) {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        solve(root, 0, 0);
        
        for(Integer i: mp.keySet()){
            Collections.sort(mp.get(i), (a,b)->{
                return a.getKey()-b.getKey();
            });
            ArrayList<Pair> pr = mp.get(i);
            ArrayList<Integer> arr = new ArrayList<>();
            int n = pr.size();
            for(int j=0;j<n;j++){
                arr.add(pr.get(j).getValue());
            }
            ans.add(arr);
        }
        return ans;
    }
}

