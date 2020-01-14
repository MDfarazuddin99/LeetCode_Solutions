class Solution {
public:
    int reverse(int x) {
                long ans = 0;
                if (x>INT_MIN && x<INT_MAX){
                    while(x!=0){
                        ans *= 10;
                        ans += x%10;
                        x /= 10;
                    }
                    if(ans>INT_MIN && ans<INT_MAX){
                        return ans;
                    }else{
                        return 0;
                    }

                    }else{
                    return 0;
                }

    }
};
