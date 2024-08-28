#include<iostream>
using namespace std;
void findduplicate(int a[], int n)
{
    for(int i = 0; i < n; i++)
        a[a[i]%n] = a[a[i]%n] + n;
    cout<<"Duplicate elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        if((a[i]/n) > 1)
            cout<<i<<endl; 
    }
}
int main()
{
    int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements"<<endl;
	for(int i = 0; i<n; i++)
		cin>>a[i];
    findduplicate(a,n);
    
    return 0;
}