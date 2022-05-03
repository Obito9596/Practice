#include<bits/stdc++.h>
using namespace std;


// passed by refrence//
void Print(int a[][100] , int n, int m)
{

for (int i = 0; i < n; i++)
{
    /* code */
    for (int j = 0; j < m; j++)
    {
        /* code */
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

}


int main()
{
int a[1000][100];
int n , m;
cin>>n>>m;
//input
for (int i = 0; i < n; i++)
{
    /* code */
    for (int j = 0; j < m; j++)
    {
        /* code */
        cin>>a[i][j];
    }
    
}
Print(a,n,m);
}