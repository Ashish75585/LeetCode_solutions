#include<iostream>
#include<cmath>

using namespace std;

// Brute Force
class Solution {
public:
    int pivotInteger(int n) 
    {
        if(n==1)
            return 1;
        int sum =0;
        int i=1;
        while(i<=n)
        {
            if(sum < n)
            {
                sum += i;
                i++;
                continue;
            }
            sum += i;
            int pivot_sum = 0;
            for(int j=i; j<=n; j++)
            {
                pivot_sum += j;
            }
            if(sum == pivot_sum)
                return i;
            i++;
        }
        return -1;
    }
};


// Optimal Solution
class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        
        if (fmod(x, 1.0) != 0) {
            return -1;
        } else {
            return static_cast<int>(x);
        }
    }
};