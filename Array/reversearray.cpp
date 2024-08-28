#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0; i<n; i++)
		cin>>a[i];
	int start = 0;
	int end = n-1;
	while(start < end)
	{
		/*int t = a[start];
		a[start] = a[end];
		a[end] = t;*/
		swap(a[start],a[end]);
		start++;
		end--;
	}
	for(int i = 0; i<n; i++)
		cout<<a[i]<<endl;
	return 0;
}