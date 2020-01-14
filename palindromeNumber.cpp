class Solution {
public:
    bool isPalindrome(long x) {
        long temp = x;
        long reverse = 0;
        while(x>0){
            reverse *=10;
            reverse +=x%10;
            x /=10;
        }
        return (temp==reverse);
    }
};
