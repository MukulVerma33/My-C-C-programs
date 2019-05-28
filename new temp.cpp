#include<bits/stdc++.h>
using namespace std;
void test(int *a)
{
    a[0]=3;
}
int main()
{
int a[1]={2};
test(a);
cout<<a[0];
}
