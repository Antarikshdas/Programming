//Input: The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Ouput: For each test case, display the reverse of the given number N, in a new line.

//My approach 


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int ans=0;
	for(int i=1;i<=T;i++)
	{
	    int n;
	    cin>>n;
	    while(n!=0)
	    {
	        int temp=n%10;
	        ans=ans*10+temp;
	        n=n/10;
	    }
	    cout<<ans<<endl;
        ans=0;
	}
	return 0;
}
