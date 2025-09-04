#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m,n;
    cin >> m >> n;
    int A[n], flag=0;
    long long sum;
    for(int i = 0; i < n; i++)
    {
    	cin >> A[i];
        if (i == 0)
        sum = A[i]-1;
        else if( A[i] > A[i-1])
        sum += ( A[i]-A[i-1] );
       else if ( A[i] < A[i-1] )
        sum += (m+A[i]-A[i-1]);
        else
        continue;
    }
    cout << sum << "\n";
    return 0;
}
