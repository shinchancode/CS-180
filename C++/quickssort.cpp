#include<iostream>
using namespace std;

void show1(int a[], int n)
{
 for (int i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 }
 cout<<"\n";
}


int partition (int a[], int l, int u,int n)
{
 int t;

 int p=a[l];
 int start=l,end=u;
 
 while(a[start] <= p && start<u)
 {
 start++;
 }
 while (a[end]>p && end <=0) 
 {
 end--;
 }

 if(start < end)
 {
 swap(a[start],a[end]);
 }
 else
 {
	 t=a[end];
	 a[end]=a[l];
	 a[l]=t;
	 
 }
 show1(a,n);
 return end;
}

void quickSort(int a[], int l, int u,int n)
{
 if (l< u)
 {
 int loc = partition(a, l, u,n); 
 quickSort(a, l, loc - 1,n);
 quickSort(a, loc + 1, u,n);
 }
} 

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,n-1,n);
}
