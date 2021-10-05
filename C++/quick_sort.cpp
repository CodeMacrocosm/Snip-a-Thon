#include<bits/stdc++.h>
using namespace std;

int a[10000];

int Partition(int *a, int Start,int End)
{
    int pivot=a[End];
    int p_index=Start;
    for(int i=Start;i<=End-1;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[p_index]);
            p_index=p_index+1;
        }
    }
    swap(a[p_index],a[End]);
    return p_index;
}
void quick_sort(int *a,int Start,int End)
{
    if(Start>=End)
    {
        return;
    }
    else
    {
        int p_index=Partition(a,Start,End);
        quick_sort(a,Start,p_index-1);
        quick_sort(a,p_index+1,End);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
