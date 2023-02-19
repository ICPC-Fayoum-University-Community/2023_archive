#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n ;
    cin>>n;
    int arr[n] ;
    for(int i=0 ;i<n ;i++)	
        cin>>arr[i] ;

    sort(arr, arr+n) ;
    int mx=0 ;
    for(int l=0 , r=0 ; r<n ; )
    {
        if(arr[r]-arr[l]>5)	l++;
        else r++ ;
        mx=max(mx,r-l) ;
    }
    cout<<mx;

    return 0;

}