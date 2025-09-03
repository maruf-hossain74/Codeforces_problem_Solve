#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int m_max(int a1,int a2,int a3)
{
    int max;
    if(a1>=a2 && a1>=a3)
    max=a1;
    else if(a2>=a1 && a2>=a3)
    max=a2;
    else if(a3>=a2 && a3>=a2)
    max=a3;
    return max;
}
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int m1,m2,m3,n1,n2,n3;
    m1=A+B+C;
    m2=A+(B*C);
    m3=(A*B)+C;
    n1=A*(B+C);
    n2=(A+B)*C;
    n3=A*B*C;
    int M=m_max(m1,m2,m3);
    int N=m_max(n1,n2,n3);
    if(M>=N)
    cout<<M<<endl;
    else
    cout<<N<<endl;
    return 0;
}
