class Solution {
public:
    bool isPerfectSquare(int num) {
        return (num > 0 && ((int)sqrt(num) * (int)sqrt(num)) == num);
        
    }
};