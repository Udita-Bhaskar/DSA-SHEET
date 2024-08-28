#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void chocolatedistribution(int a[], int n, int m)
{
    sort(a,a+n);
    int min = INT_MAX;
    for(int i = 0; i+m-1 < n; i++)
    {
        int d = a[i+m-1] - a[i];
        if(d < min)
            min = d;
    }
    cout<<"The chocolate distribution value is : "<<min<<endl; 
}
int main()
{
    int n, m;
	cout<<"Enter the no of packets of chocolate"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the no of chocolates in each packet"<<endl;
	for(int i = 0; i<n; i++)
		cin>>a[i];
    cout<<"Enter the no of students"<<endl;
	cin>>m;
    chocolatedistribution(a,n,m);
    
    return 0;
}