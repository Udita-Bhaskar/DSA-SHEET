#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void nextpermutation(vector <int> &a)
{
    int n = a.size();
    int idx = -1;
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i] < a[i+1]){
            idx = i;
            break;
        }
    }
    if (idx = -1)
        reverse(a.begin(), a.end());

        for(int i = n-1; i>idx; i--)
        {
            if(a[i] > a[idx]){
                swap(a[i],a[idx]);
                break;
            }   
        }
        reverse((a.begin()+idx+1), a.end());
    cout<<"Next Permutation is : "<<endl;
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
	cout<<"Enter array elements"<<endl;
	for(int i = 0; i<n; i++)
		cin>>arr[i];
    vector <int> a(arr,arr+n);
    nextpermutation(a);
    
    return 0;
}
