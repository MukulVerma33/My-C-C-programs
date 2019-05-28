#include<iostream>
using namespace std;
template <class T>
class x{
public:
    char b='b';
};
class abc{
public:
    char c='a';
    void fun(T t)
    {
        cout<<t.b;
    }

};

int main()
{
    abc a;
    x h;
    a.fun(h);

}
