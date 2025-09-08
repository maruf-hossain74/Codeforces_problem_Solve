#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int A[n+2];
    double max=0;
    for(int i=0; i<n; i++)
        cin>>A[i];
    sort(A,A+n);
    A[n]=(-1)*A[0];
    A[n+1]=l+l-A[n-1];
    sort(A,A+n+2);
    for(int i=1; i<2+n; i++)
    {
        if(max<=A[i]-A[i-1])
            max=A[i]-A[i-1];
    }
    cout<<fixed<<setprecision(9)<<max/2<<"\n";
    return 0;
}
