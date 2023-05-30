#include<iostream>
#include<map>
#include<vector>
using namespace std;
int Remove(vector <int> &arr,int value)
{
    int k=0;
    for(int i=0;i<arr.size();i++)
    {

        if(arr[i]!=value)
        {
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int i,n,value;
    vector<int> arr;
    cout<<"enter the number of values required"<<endl;
    cin>>n;
    cout<<"enter the value"<<endl;
    cin>>value;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    int x= Remove(arr,value);
    for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
    return 0;

}
