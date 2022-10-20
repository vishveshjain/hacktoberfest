#include<iostream>
#include<conio.h>
using namespace std;

int linear(int a[],int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            cout << a[i] << " found in position "<<i+1<<endl;
            return 0;
        }
    }

    cout << item << " Can't found!!"<<endl;
}

int main()
{
    int a[100];
    int i,n,item;

    cout << "Enter size of array: ";
    cin>>n;

    cout << "Enter values of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout << "Enter value for search: ";
    cin>>item;

    linear(a,n,item);

    return 0;
}
