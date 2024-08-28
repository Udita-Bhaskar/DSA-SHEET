#include<iostream>
#include<limits.h>
using namespace std;
void maxsubarray(int a[], int n)
{
    int max = INT_MIN;
    int maxth = 0;
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        maxth = maxth + a[i];
        if(maxth > max)
            max = maxth;
        else if(maxth < 0)
            maxth = 0;
    }
    cout<<"The maximum sum of subarray : "<<max<<endl; 
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
    maxsubarray(a,n);
    
    return 0;
}