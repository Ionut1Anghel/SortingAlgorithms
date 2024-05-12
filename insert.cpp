#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f("data.txt");
    int n,j,i;
    f>>n;
    int x[n+1],aux;
    for(i=1;i<=n;i++)
        f>>x[i];
    for(i=2;i<=n;i++)
    {
        x[0]=x[i];
        j=i-1;
        while(x[0]<x[j])
            {
                x[j+1]=x[j];
                j=j-1;
            }
        x[j+1]=x[0];
    }
    for(int k=1;k<=n;k++)
        cout<<x[k]<<" ";
}
