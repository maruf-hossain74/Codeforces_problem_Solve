// coding c++ mobile app

#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s,a[10];
	cin >> s;
	for(int i=0; i<10; i++)
		cin>> a[i];
	for(int j=0; j<8; j++)
		for(int i=0; i<=9; i++)
			if(s.substr(j*10,10) == a[i])
				cout << i;
    return 0; 
}
