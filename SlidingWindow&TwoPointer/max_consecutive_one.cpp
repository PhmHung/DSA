#include <bits/stdc++.h>
//https://leetcode.com/problems/max-consecutive-ones-iii/description/
using namespace std;
int longestOnes(vector<int>& nums, int k)
{
    int l=0,r=0,zeros=0,maxLen=0;
    while(r < nums.size())
    {
        if(nums[r]==0) zeros ++;
        if(zeros > k)
        {
            if(nums[l] == 0) zeros--;
            l++;
        }
        if(zeros <= k)
        {
            int len=r-l+1;
            maxLen=max(len,maxLen);
        }
        r++;
    }      
    return maxLen;
}
int main()
{
    freopen("inp.txt","r",stdin);
    //freopen("oup.txt","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        int k;cin>>k;
        cout<<longestOnes(v,k)<<endl;
    }
    
}
