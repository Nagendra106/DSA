#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;
vector<int> twosum(vector<int> nums,int target)
{
    unordered_map<int,int> arr;
    for(int i=0;i<nums.size();i++)
    {
        int comp = target - nums[i];
        if(arr.count(comp))
        {
            return {arr[comp],i};
        }
        arr[nums[i]]=i;
    }
    return {};
}
int main()
{
    vector<int> nums;
    int n,target;
    cout<<"enter the number of elements required"<<endl;
    cin>>n;
    cout<<"enter the array";
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    cout<<"enter the target";
    cin>>target;
    vector<int> indices = twosum(nums,target);
    if(indices.size()==2)
    {
        cout<<"The indices are"<<indices[0]<<"and"<<indices[1]<<endl;
    }
    else
    {
        cout<<"No output";
    }
    return 0;
}