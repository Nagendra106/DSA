#include<iostream>
#include<vector>
using namespace std;
int SearchInsert(vector<int> arr,int target)
{
    int left=0;
    int right=arr.size();
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }
    return left;

}
int main()
{
    int i,n,value;
    vector<int> arr;
    cout<<"enter the number of values required"<<endl;
    cin>>n;
    cout<<"enter the target"<<endl;
    cin>>value;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    int x=SearchInsert(arr,value);
    cout<<"the array index"<<x<<endl;
    return 0;

}
