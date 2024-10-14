#include <bits/stdc++.h>
using namespace std;


int main()
{ 
    // freopen("inp.txt","r",stdin);
    // //freopen("oup.txt","w",stdout);
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    stack<int>rear;
    stack<int>front;
    int opsNum,op;

    cin>>opsNum;

    for(int i = 0; i < opsNum; i++)
    {
        cin>>op;
        if(op == 1)
        {
            int x;cin>>x;
            rear.push(x);
        }
        else
        {
            //rear->front
            if(front.empty())
            {
                while(!rear.empty())
                {
                    front.push(rear.top());
                    rear.pop();
                }
            }

            
            if(!front.empty())
            {
                if(op == 2)
                {
                    front.pop();
                }
                //op == 3
                else
                {
                    cout<<front.top()<<endl;
                }
            }
        }
    }

}
