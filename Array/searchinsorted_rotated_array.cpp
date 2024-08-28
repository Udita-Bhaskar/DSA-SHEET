#include<iostream>
using namespace std;
int search(int a[], int l, int h, int key)
{
    while(l <= h)
    {   int m = l + (h-l)/2;
        if(a[m] == key) return m;
        if(a[l] <= a[m])
        {
            if((key >= a[l]) && (key <= a[m]))
                h = m - 1 ;
            else
                l = m + 1;
        }
        else
        {
            if((key >= a[m]) && (key <= a[h]))
                l = m + 1;
            else
                h = m - 1 ;
        }
    
    }
    return -1;


}
int main()
{
    int n, key;
	cout<<"Enter array size"<<endl;
	cin>>n;
    cout<<"Enter key"<<endl;
	cin>>key;
	int a[n];
	cout<<"Enter array elements"<<endl;
	for(int i = 0; i<n; i++)
		cin>>a[i];
    int idx = search(a, 0, n-1, key);
    if(idx == -1)
        cout<<"Key is not in the array"<<endl;
    else
        cout<<"Key is at index : "<<idx<<endl;
    
    return 0;
}