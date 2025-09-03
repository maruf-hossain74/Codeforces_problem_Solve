#include <iostream>
using namespace std;
int main() 
{
    long long A,B,C;
    cin>>A>>B>>C;
    cout<<((B+C-1)/C)*((A+C-1)/C)<<endl;
    return 0;
}
