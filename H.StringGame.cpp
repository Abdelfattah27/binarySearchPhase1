// link =>  https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/H


#include <bits/stdc++.h>

using namespace std;

vector<int>vec ;

string s1, s2 ;
int n, m ;
int bin()
{
    int l = n, f = 0, ans = 0, mid, j =0  ;
    while(l >= f)
    {

        mid = ( l+f ) / 2 ;
        j = 0 ;
        for(int i = 0  ; i < n ; i ++)
        {
            if(vec[i] >= mid && s1[i] == s2[j])
            {
                j++ ;
                if(j == m)
                {
                    break ;
                }
            }
        }
        if(j >= m )
        {
            ans = mid ;
            f = mid  + 1;
        }
        else
        {
            l = mid - 1 ;

        }

    }
    return ans ;
}

int main()
{
//    ios_base::sync_with_stdio(0) ;
//    cin.tie(0) ;
//    cout.tie(0) ;
    cin>>s1 >> s2 ;
    n = s1.size() ;
    m = s2.size() ;
    vec.resize(n) ;
     for(int i  = 0 ; i < n ; i ++)
    {
        int u = 0 ;
        cin>>u ;
        vec[u-1] = i ;
    }
    cout<<bin()<<endl;

}
