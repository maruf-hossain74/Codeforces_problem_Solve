#include<iostream>
#include<vector>
#include<map>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5],mx=0,r[n+5],c[m+5],cnt=0;
    for(int i=1; i<=n; i++){
        r[i]=0;
        for(int j=1; j<=m; j++){
            c[j]=0;
            cin>>a[i][j];
            mx=max(mx,a[i][j]);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j]==mx){
                cnt++;
                r[i]++;
                c[j]++;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int nums=r[i]+c[j]-(a[i][j]==mx);
            if(nums==cnt){
                cout<<mx-1<<"\n";
                return;
            }
        }
    }
    cout<<mx<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}
