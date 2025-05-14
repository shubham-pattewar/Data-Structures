#include<iostream>
using namespace std;

void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int smallestidx=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j] < a[smallestidx])
			{
				smallestidx=j;
			}
		}
		
		swap(a[i],a[smallestidx]);
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
	selectionsort(a, n);
	print(a, n);
}