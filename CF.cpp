#include <bits/stdc++.h>
using namespace std;
struct strm
{
    char x[1000];
};

int main()
{
    strm a[1000];
    int n,i;
    cin >>n;
    for (i=0;i<n;i++)
        cin >>a[i].x;
    for (i=0;i<n;i++)
    {
        if (strlen(a[i].x)-1<10)
            cout <<a[i].x<<endl;
        else
        cout <<a[i].x[0]<<strlen(a[i].x)-2<<a[i].x[strlen(a[i].x)-1]<<endl;
    }
}
