#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &nums,vector<int> &temp,int left,int mid,int right);
void mergesort(vector<int> &nums,vector<int> &temp,int left,int right)
{
	if(left<right){
	int mid=(left+right)/2;
	mergesort(nums,temp,left,mid);
        mergesort(nums,temp,mid+1,right);
	merge(nums,temp,left,mid,right);
	}

}
void merge(vector<int> &nums,vector<int> &temp,int left,int mid,int right)
{
	if(left<right){
	int i=left,j=mid+1,k=left;
	while(i<=mid && j<=right)
	{
		if(nums[i]<=nums[j])
			temp[k++]=nums[i++];

		else 
			temp[k++]=nums[j++];
		
	}
	while(i<=mid)
		temp[k++]=nums[i++];
	while(j<=right)
		temp[k++]=nums[j++];
	for(int k=left;k<=right;k++)
		nums[k]=temp[k];
	}


}
int main()
{
	vector<int> nums={9,8,7,5,6,6,-2,-9,0,999,99,12};
	int n=nums.size();
	vector<int> temp(n,0);
	mergesort(nums,temp,0,n-1);
        for(int i:nums)
		cout<<i<<endl;




}
