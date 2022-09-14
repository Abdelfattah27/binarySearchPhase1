//link => https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/X

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n ;
    cin>>n>>m ;
    vector <int>ceties(n), towers(m) ;
    for(int &i :ceties) cin>>i ;
    for(int &i : towers) cin>>i ;
    int r = 0 ;
    int l = 0 ;
    for(int i = 0; i < n ; i++ )
    {
        while(l<m-1 && abs(ceties[i] - towers[l]) >= abs(ceties[i] - towers[l+1])) l++ ;
        r= max(r , abs(ceties[i] - towers[l])) ;
    }
    cout<<r<<endl;

}
