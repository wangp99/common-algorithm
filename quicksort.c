#include<iostream>
using namespace std;

int onequick(int a[],int i,int j)
{
	while(i<j)
	{
	     while(i<j && a[i]<=a[j])
		     j--;
	     if(i<j)
		     swap(a[i],a[j]);
	     while(i<j && a[i]<=a[j])
		     i++;
	     if(i<j)
		     swap(a[i],a[j]);     
	}
	return i;

}
void quicksort(int a[],int i,int j)
{
	if(i<j)
	{
	int m=onequick(a,i,j);
	quicksort(a,i,m-1);
	quicksort(a,m+1,j);
	}
	return;

}



int main()
{
	//int a[10]={1,2,5,0,-9,33,9999,-9,0};
	int a[]={4,-9,-88};
	quicksort(a,0,2);
	for(int i:a)
		cout<<i<<endl;
}
