#include<bits/stdc++.h>
#define INT32_MAX 2147483647
using namespace std;

int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        // for (int i = 0; i < n; i++)
        //     if(a[i] < a[smallest])
        //         smallest = i;
        bool flag = true;
        for (int j = smallest+1; j <= smallest+y; j++)
        {
            if((j < n)&&(a[smallest] > a[j])){
                flag = false;
                a[smallest] = INT32_MAX;
            }
        }
        for (int j = smallest-1; j >= smallest-x; j--)
        {
            if((j >= 0)&&(a[smallest] > a[j])){
                flag = false;
                a[smallest] = INT32_MAX;
            }
        }
        if(flag){
            cout << smallest+1 << endl;
            break;
        }
    }
    return 0;
}