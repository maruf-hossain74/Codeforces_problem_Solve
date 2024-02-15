//Codeforces Round 923 (Div. 3)
#include<bits/stdc++.h>

using namespace std;

#define pi      3.1415926535897932384626433832795028841971693993751058
#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"
#define NO      cout<<"NO"<<"\n"
#define No      cout<<"No"<<"\n"
#define no      cout<<"no"<<"\n"
#define m1      cout<<-1<<"\n"
#define ssort(S)  sort((S).begin(),(S).end())
#define asort(A)  sort((A),(A)+(n))
#define srev(S)   reverse((S).begin(),(S).end())
#define uni(x)    unique((x).begin(),(x).begin()+(x).size())-(x).begin()
#define ub(x,n)    upper_bound((x).begin(),(x).end(),(n))-(x).begin()
#define lb(x,n)    lower_bound((x).begin(),(x).end(),(n))-(x).begin()
#define arev(A)   reverse((A),(A)+(n))
#define ll      long long
#define ull     unsigned long long
#define pb      push_back
#define vi      vector<int>
#define vl      vector<long long>
#define vc      vector<char>
#define input(x) scanf("%d",&(x))
#define int int64_t
#define endl "\n"
#define speed (ios_base:: sync_with_stdio(false),cin.tie(NULL))
#define mod 1000000007

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n; cin>>n;
        int A[n],B[n];
        for(int i = 0 ; i < n ; i++) {
            cin>>A[i];
            if(i == 0) B[i]=1;
            else if(A[i] == A[i-1]) B[i] = B[i-1];
            else B[i] = B[i-1] + 1;
        }

        int q; cin>>q;
        while(q--) {
            int x,y; cin>>x>>y;
            x--,y--;
            if(B[x] == B[y]) cout<<-1<<" "<<-1<<endl;
            else {
                while(true) {
                    if(B[x] + 1 == B[y]) break;
                    if(B[(y+x)/2] != B[y]) x = (y+x) / 2;
                    else if(B[x] != B[(y+x)/2]) y = (y+x) /2;
                }
                cout<<x+1 <<" "<<y+1<<endl;
            }
        }
        cout<<endl;
    }
	return 0;
}
