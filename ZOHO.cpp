#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int print=1;
for(int i=1;i<=n;i++)
{

for(int j=0;j<n-i;j++)
    {
     cout<<" ";
    }

for(int k=0;k<n;k++,print++)
    {
    cout<<print<<" ";
    }
    print--;
    cout<<endl;
    print = print +n;
    i++;
for(int j=0;j<n-i;j++)
    {
    cout<<" ";
    }

for(int k=0;k<n;k++,print--)
    {
    cout<<print<<" ";
    }
    cout<<endl;
    print = print +n;
    print++;
}

return 0;
}
