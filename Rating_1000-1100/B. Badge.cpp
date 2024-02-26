/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/
 
#include<bits/stdc++.h>

using namespace std;
 
#define int int64_t
#define endl "\n"

int t = 1;
int32_t main() {
	//ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin >> t;
    while(t--) {
            int n ; cin>>n; 
            int A[n + 1];
            for(int i = 1; i <= n; i++) {
                cin >> A[i];
            }
            for(int i = 1; i <= n; i++) {
                int B[n + 1] = {0};
                int j = i;
                while(true) {
                    B[j]++;
                    if(B[j] == 2) {
                        cout << j << " ";
                        break;
                    }
                    j = A[j];
                }
            }
            cout<<endl;
    }
	return 0;
}
