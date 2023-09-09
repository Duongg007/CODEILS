#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define str string
#define duong ""
const int N=1E6+5;
using namespace std;
int n,p[N];
ll a[N];
void sangdb()
{
    fill(p+1,p+N+1,1);
    for(int i=2;i*i<=N;i++)
    {
        for(int j=i*i;j<=N;j+=i)
        {
            p[j]+=i;
            if(i*i!=j)
                p[j]+=j/i;
        }
    }
    for(int i=2;i<=N;i++)
    {
        p[i]+=i;
    }
}
void input()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cout<<p[a[i]]<<" ";
}
void output()
{

}
int main()
{  ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
   sangdb();
   input();
   output();
    return 0;
}
