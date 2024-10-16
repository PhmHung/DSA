#include <bits/stdc++.h>
//https://leetcode.com/problems/max-consecutive-ones-iii/description/
using namespace std;
int findKthLargest(vector<int>&nums,int k)
{
    priority_queue<int>pq;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        pq.push(nums[i]);
    }

    int f=k-1;
    while (f>0)
    {
        pq.pop();
        f--;
    }
    return pq.top();
}

int findKthSmallest(vector<int>&nums,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    int n = nums.size();
    for(int i=0;i<n;i++) 
    {
        pq.push(nums[i]);
    }
    int f = k-1;
    while(f>0)
    {
        pq.pop();
        f--;
    }
    return pq.top();
}
int main()
{
    freopen("inp.txt","r",stdin);
    //freopen("oup.txt","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector <int> arr ={1, 2, 6, 4, 5, 3};
    cout<<findKthLargest(arr,3)<<" "<<findKthSmallest(arr,3)<<endl;
    
}
