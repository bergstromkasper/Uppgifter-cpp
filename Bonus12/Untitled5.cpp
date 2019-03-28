#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int temp[10];
    int x;
    cout<<"Enter Rotation Factor."<<endl;
    cin>>x;
    for(int i=9;i>=0;i--)
    {
        if(i+x>=10)
        {
            temp[i+x-10]=arr[i];
        }
        else
        {
            temp[i+x]=arr[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}
