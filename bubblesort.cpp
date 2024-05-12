#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f("data.txt");
    int n,i,j,k;
    f>>n;
    int x[n+1],aux;
    for(i=1;i<=n;i++)
        f>>x[i];
    for(i=n;i>=2;i--)
        for(j=1;j<i;j++)
            if(x[j]>x[j+1])
    {
        aux=x[j];
        x[j]=x[j+1];
        x[j+1]=aux;
    }
    for(int k=1;k<=n;k++)
        cout<<x[k]<<" ";
}
