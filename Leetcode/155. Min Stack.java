https://leetcode.com/problems/min-stack/
class MinStack {

    /** initialize your data structure here. */
    List<Pair<Integer,Integer>> stack;
    public MinStack() {
        stack = new ArrayList<Pair<Integer,Integer>>();
    }
    
    public void push(int x) {
        if(stack.size()==0){
            Pair<Integer, Integer> p = new Pair<Integer, Integer>(x,x);
            stack.add(p);
            return;
        }
        Pair<Integer, Integer> p = stack.get(stack.size()-1);
        Pair<Integer, Integer> newTuple = new Pair<Integer, Integer>(x,Math.min(x,p.getValue()));
        stack.add(newTuple);
    }
    
    public void pop() {
        stack.remove(stack.size()-1);
    }
    
    public int top() {
        Pair<Integer, Integer> p = stack.get(stack.size()-1);
        return p.getKey();
    }
    
    public int getMin() {
        Pair<Integer, Integer> p = stack.get(stack.size()-1);
        return p.getValue();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
