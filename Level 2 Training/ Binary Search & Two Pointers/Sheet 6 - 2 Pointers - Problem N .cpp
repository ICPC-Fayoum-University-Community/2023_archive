#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

string str;
bool solve(int i,int j)
{
    int freq[26]={0} ;
    int mark=0 ;
    for(int z=i; z<=j; z++)
    {
        if(str[z]=='?') mark++;
        else freq[str[z]-'A']++ ;
    }

    int miss=0 ;
    vector<int> chars ;
    for(int z=0; z<26; z++)
    {
        if(!freq[z])
        {
            miss++;
            chars.push_back(z) ;
        }
    }

    if(miss>mark) return 0 ;

    for(int z=i;z<=j;z++)
    {
        if(str[z]=='?')
        {
            str[z]=chars.back()+'A';
            chars.pop_back();
        }
    }

    return 1 ;
}

int main()
{
    IOS

    cin>>str;
    bool ok = 0 ;
    for(int i=0, j=25 ; j<str.size() ; i++, j++)
    {
        ok = solve(i,j) ;
        if(ok) break;
    }
    if(ok)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='?') str[i]='A' ;
        }
        cout<<str;
    }
    else cout<<-1;

    return 0;
}