#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter total number of elements ";
    cin>>n;
    int a[n];
    cout<<"Enter elements:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    int sum=0;
    for(i=0;i<n;i++)  
    {
        sum+=a[i];    
    }
    cout<<endl<<sum;
    return 0;
}
