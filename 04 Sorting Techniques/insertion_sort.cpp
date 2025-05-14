#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
	for(int i=1;i<n;i++)	{
	
	int curr=a[i];
	int prev=i-1;
	
	while(prev >=0 && a[prev]>curr )
	{
		a[prev+1]=a[prev];
		prev--;
	}

	a[prev+1]=curr;
}
}
void print(int a[],int n)
{
	cout<<"sorted array:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
			int n;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the array elements:";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionsort(a, n);
	print(a, n);
}