class Solution {
public:
    int divide(int dividend, int divisor) {
        // 考慮被除數為最小值的情況
        if(dividend == INT_MIN){ //-2^31(-2147483648)~2^31-1
            if(divisor == -1) return INT_MAX;
            if(divisor == 1) return INT_MIN;
        }

        // 考慮除數為最小值的情況
        if(divisor == INT_MIN){
            return dividend == INT_MIN ? 1 : 0;
        }

        //將被除數和除數統一處理成負數（因為負數比正數的絕對值大1）
        int sign = ((divisor >> 31) ^ (dividend >> 31))  == 0 ? 1 : -1;
        dividend = (dividend < 0) ? dividend : -dividend;
        divisor = (divisor < 0) ? divisor : -divisor;

        vector<int> candidates{divisor};

        while(candidates.back() >= dividend - candidates.back()){//防止溢出
            candidates.emplace_back(candidates.back() + candidates.back());
        }

        int ans = 0;
        for(int i = candidates.size() -1;i >= 0; --i){
            if(candidates[i] >= dividend){
                ans += (1 << i);
                dividend -= candidates[i];
            }
        }

        return sign == 1? ans: -ans;
    }
};
