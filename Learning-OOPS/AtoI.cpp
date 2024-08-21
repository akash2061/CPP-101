#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int atoi(string s) {
        int ans = 0;
        int mul = 1;
        int n = s.size();
        
        for(int i = n-1;i>0;i--){
            if(s[i]>='0' && s[i]<='9'){
                ans +=(s[i]-'0') *mul;
                mul*=10;
            }
            else{
                return -1;
            }
        }
        if(s[0]=='-'){
            ans*=-1;
        }
        else if(s[0]>='0' && s[0]<='9'){
            ans +=(s[0]-'0')*mul;
        }
        else{
            return -1;
        }
        
        return ans;
    }
};

int main()
{
	int t;
        cout<<"Enter no. of Test-Cases: ";
	cin>>t;
	while(t--)
	{
		string s;
        cout<<"\nEnter String: ";
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<"String to Integer: "<<ans<<endl;
	}
}