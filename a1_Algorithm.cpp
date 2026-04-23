//luogu - P3817 小A的糖果
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,x,ans=0,last=0;
    cin>>n>>x;
    for(long long i=0;i<n;i++){
        long long temp=0;
        cin>>temp;
        if(last+temp>x){
            ans+=last+temp-x;
            last=x-last;
        }
        else{
            last=temp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
