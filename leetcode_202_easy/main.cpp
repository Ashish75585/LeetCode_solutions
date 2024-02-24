#include<iostream>

class Solution 
{
public:

    int sumOfSquares(int n) {
        int sum = 0;
        while(n) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;

    }
    

    bool isHappy(int n) 
    {
        int jumpOneTime = n;
        int jumpTwoTimes = sumOfSquares(n);
        if(jumpOneTime == 1 || jumpTwoTimes == 1) return true;
        while(jumpOneTime != jumpTwoTimes)
        {
            jumpOneTime = sumOfSquares(jumpOneTime);
            jumpTwoTimes = sumOfSquares(sumOfSquares(jumpTwoTimes));
            if(jumpOneTime == 1 || jumpTwoTimes == 1) return true;
        }
        return false;
    }
};

int main()
{
    Solution st;
    bool val = st.isHappy(25); // Unhappy  number;
    bool val = st.isHappy(19); // Happy Number;
    printf("%d", val);

    return 0;
}