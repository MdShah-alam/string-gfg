#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix (string arr[], int N)
{
    int len,flag,cont=0,mi=0;
    string s;
    for(int i=0;i<N;i++)
    {
        len=arr[i].length();

        if(mi<len)
        {
            mi=min(mi,len);
            s=arr[i];
        }
    }
    for(int i=0;i<mi;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(arr[j][i]!=s[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
        cont++;
    }
    if(cont==0)
        return "-1";
    else
        return s.substr(0,cont);
}


int main()
{
    int n;
    cin>>n;
    string A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];

    cout<<longestCommonPrefix (A,n);
    return 0;
}
