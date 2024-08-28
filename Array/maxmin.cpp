#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements"<<endl;
	for(int i = 0; i<n; i++)
		cin>>a[i];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
			if(a[i]<min)
                min = a[i];
            if(a[i]>max)
                max =a[i];
    }
    cout<<min<<" "<<max<<endl;
    
    return 0;
}
