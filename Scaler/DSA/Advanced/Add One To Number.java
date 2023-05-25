/*
Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: for this problem, the following are some good questions to ask :

Q: Can the input have 0's before the most significant digit. Or, in other words, is 0 1 2 3 a valid input?
A: For the purpose of this question, YES
Q: Can the output have 0's before the most significant digit? Or, in other words, is 0 1 2 4 a valid output?
A: For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

Problem Constraints
1 <= size of the array <= 1000000


Input 1:

[1, 2, 3]

Output 1:

[1, 2, 4]

*/public class Solution {
    public ArrayList<Integer> plusOne(ArrayList<Integer> A) {
        Collections.reverse(A);
        int carry = 1;
        for(int i=0;i<A.size();i++){
            carry = A.get(i) + carry;
            A.set(i, carry%10);
            carry /=10;
        }
        if(carry >0 ){
            A.add(carry);
        }
        int i = 0;
        for(i=A.size()-1;i>=0;i--){
            if(A.get(i)!=0){
                break;
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        for(;i>=0;i--){
            ans.add(A.get(i));
        }
        return ans;
    }
}
