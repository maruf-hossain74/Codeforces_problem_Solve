#include<iostream>
using namespace std;
int main(){ 
  int t, n;
  string s;
  cin >> t;
  while(t--){
    cin >> n >> s;
    bool b = true;
    for(int i = 0; i < n/2; i++){
      int d = abs(s[i] - s[n-1-i]);
      if(!(d == 0 || d == 2)) b = false;  
    }
    cout << (b?"YES\n":"NO\n") << endl;
  }
}
