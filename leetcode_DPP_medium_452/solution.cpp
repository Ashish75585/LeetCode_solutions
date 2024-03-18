#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(), points.end(), [](const vector<int>&a, const vector<int>&b)
    {
        return a[0] < b[0];
    });    
        
        int count = 1;
        int point=points[0][1];
        int n = int(points.size());
        for(int i=0; i<n; i++)
        {
            if(points[i][0] > point)
            {
                count++;
                point = points[i][1];
            }
            else
            point = min(point, points[i][1]);
        }
        
        return count;
    }
};

int main() {

    return 0;
}
