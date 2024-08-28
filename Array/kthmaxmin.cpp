#include<iostream>
using namespace std;
void conquer(int a[], int l, int m, int h)
{
    int n1 = m-l + 1;
    int n2 = h - m;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
        left[i] = a[l+i];
    for(int i = 0; i < n2; i++)
        right[i] = a[m+1 + i];
    int i, j, k;
    i = j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
            a[k++] = left[i++];
        else
           a[k++] = right[j++];
    }
    if(i == n1) while(j < n2) a[k++] = right[j++];
    else if(j == n2) while(i < n1) a[k++] = left[i++];
}
void divide(int a[], int l, int h)
{

    if(l > h) return;
    if(l < h)
    {
        int m = l + (h-l)/2;

        divide(a,l,m);
        divide(a,m+1,h);

        conquer(a,l,m,h);
    }

}
void printArray(int a[], int n)
{
    cout<<"Sorted array"<<endl;
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
void kthmaxmin(int a[], int n)
{
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<"Kth min : "<<a[k-1]<<endl;
    cout<<"Kth max : "<<a[n-k]<<endl;
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
    divide(a,0,n-1);
    printArray(a,n);
    kthmaxmin(a,n);
    return 0;
}