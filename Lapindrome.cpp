#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int j=0;j<T;j++)
    {
        string s;
        bool ans=true;
        cin>>s;
        int mid=s.size()/2;
        int leftArray[mid];
        int rightArray[mid];
        int a[26];
        int b[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        if(s.size()%2==0)
        {
            for(int i=0;i<mid;i++)
            {
                a[int(s[i])-97]++;
            }
            for(int i=mid;i<s.size();i++)
            {
                b[int(s[i])-97]++;
            }
            for(int i=0;i<26;i++)
            {
                if(a[i]!=b[i])
                {
                    ans=false;
                }
            }
            
        }
        else{
            for(int i=0;i<mid;i++)
            {
                a[int(s[i])-97]++;
            }
            for(int i=mid+1;i<s.size();i++)
            {
                b[int(s[i])-97]++;
            }
            for(int i=0;i<26;i++)
            {
                if(a[i]!=b[i])
                {
                    ans = false;
                }
            }
            
        }
        if(ans==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
	
	return 0;
}
