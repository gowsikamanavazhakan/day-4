#include<iostream>
using namespace std;
int main()
{
    int a[3],max,i;
    cout<<"Enter the numbers:";
    for(i=0;i<2;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    cout<<"Largest number:";
    for(i=0;i<2;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
}
