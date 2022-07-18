#include<bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    string s1;
    int r;
    int len=S.length();
    for(int i=len-1;i>=0;i--)
    {
        if(S[i]=='.')
        {
            r=len-i;
            len=i-1;
            s1.append(S.substr(i+1,r));
            s1.append(".");
        }
    }
    s1.append(S.substr(0,len+1));
    S=s1;
    return S;
}

int main()
{
    string S;
    cin>>S;
    reverseWords(S);

    return 0;
}
