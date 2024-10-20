    #include <iostream>
    #include <vector>
    #include <map>
    using namespace std;
     
    int main()
    {
         ios::sync_with_stdio(false);
         int n;
         cin>>n;
         while(n--){
     
            int m; cin>>m;
            vector<int>a(m,1);
            int c=1;
            map<int,int>b;
            for(int i=0;i<m;i++){
     
                int x; cin>>x;
                if(++b[x]==2&&c<3){a[i]=++c;}
     
     
            }
            if(c==3){for(int i:a){cout<<i<<" ";}cout<<"\n";}
            else{cout<<-1<<"\n";}
     
         }
    }
