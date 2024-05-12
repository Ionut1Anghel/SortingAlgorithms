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
    for(i=1;i<n;i++)
    {
        k=i;
        for(j=i+1;j<=n;j++)
            if(x[k]>x[j])
                k=j;
        if(k!=i)
        {
            aux=x[i];
            x[i]=x[k];
            x[k]=aux;
        }
    }
    for(int k=1;k<=n;k++)
        cout<<x[k]<<" ";
}
