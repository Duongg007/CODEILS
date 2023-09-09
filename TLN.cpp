#include<bits/stdc++.h>
#define ll long long
const int N=1E6+5;
using namespace std;
ll n,k,res=1,kq,a[N],sa,ma[N],md[N];
void input()
{
    int sa=0;
    int sd=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int i=1;
    int j=n;
    if(k%2!=0)
        {
            k--;
            res=a[n];
            j--;
        }


    while(k>0)
    {
        if(a[i]*a[i+1]>a[j]*a[j-1])
        {
            res*=a[i]*a[i+1];
            k-=2;
            i+=2;
        }
        else
         {
            res*=a[j]*a[j-1];
            k-=2;
            j-=2;
        }
    }
    cout<<res;
}
void output()
{

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    output();
    return 0;
}
