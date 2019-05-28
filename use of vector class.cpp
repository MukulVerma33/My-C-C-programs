#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,x,e;
    cin>>n>>q;
    vector<int> a;
    vector<int> v[n];    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        for(int j=0;j<x;j++)
        {
            cin>>e;
            v[i].push_back(e);
        }
    }
    for(int i=0;i<q;i++)
    {
        cin>>x>>e;
        cout<<v[x][e]<<endl;;
    }
        return 0;
}


