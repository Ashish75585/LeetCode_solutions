#include<iostream>
#include<string>

using namespace std;

// Brute Force.
class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int p1 = 0;
        int n1 = s.size(); 
        int n2 = t.size();
        int count = 0;
        int i=0;

        for(i; i<n2; i++)
        {
            int temp = p1;
            for(int j=p1; j<n1; j++)
            {
                if(t[i] == s[j])
                {
                    p1 = j+1;
                    break;   
                }
            }
            if(p1 == temp)
                break;
        } 

        for(i; i<n2; i++)
            count++;

        return count;
    }
};

// Using two pointers
class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int i=0,j=0;
        int n1 = s.size(), n2 = t.size();
        int count = 0;

        while(i<n1)
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        count = n2-j;
        return count;
    }
};

int main()
{
    Solution st;
    string s1 = "z";
    string s2 = "abcde";
    int val = st.appendCharacters(s1, s2);
    printf("%d", val);

    return 0;
}