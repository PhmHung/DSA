#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) 
{
    vector<int> hash(256,-1);
    int l=0,r=0,maxLen=0;
    int n=s.length();

    while(r < n)
    {
        if(hash[s[r]] != -1)
        {
            if(hash[s[r]] >= l)
            {
                //khi lap tien toi vi tri sau lap
                l = hash[s[r]] + 1; 
            }
        }

        int len = r - l + 1;
        maxLen = max(maxLen, len);
        //cap nhat vi tri s[r]
        hash[s[r]] = r;
        //di chuyen con tro phai
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
        string s;
        cin>>s;
        cout<<lengthOfLongestSubstring(s)<<endl;
    }
    
}
