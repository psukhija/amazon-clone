/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout << "size of array:- ";
    cin>>n;
    int a[n][n];
    cout<<"enter element of array:"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
    cout<<"Orignal Matrix";
    for(i=0;i<n;i++){
    cout<<endl;
    for(j=0;j<n;j++){
    cout<<" "<<a[i][j]<<" ";
    }
}
    cout<<endl;
for(i=0;i<n;i++)
    for(j=i;j<n;j++)
    {
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
    cout<<"resultant matrix";
    for(i=0;i<n;i++){
    cout<<endl;
    for(j=0;j<n;j++){
    cout<<" "<<a[i][j]<<" ";
    }
}
    return 0;
}