#include<iostream>
#include<maths>
using namespace std;
class black{
int x,y;
public:
    void putmove(){cout<<"its your turn move your black king to following";}
    void getmove(){cin>>x>>y;
    void nextmove(){cout<<"give a move for black king";
    cin>>x>>y;
    if(abs(x-temp)>2 || abs(y-temp)>2)
        cout<<"invalid move get out";
    }
   void friend check();
};
class white{
int xk,yk,xq,yq;
public:
     void putmoveking(){cout<<"its your turn move your king to following";}
     void getmoveking(){
     cin>>xk>>yk;}
     void nextmove(){cout<<"give a move for king of whites"<<endl;
     cin>>xk>>yk;
      if(abs(xk-temp)>2 || abs(yk-temp)>2)
        cout<<"invalid move get out";}}
      void putmovequeen(){cout<<"its your turn move your queen to following";}
      void getmovequeen(){cin>>xq>>yq;}
      void nextmovequeen(){cout<<"give a move for queen";
    cin>>xq>>yq;
    if(abs(xq-temp)>2 || abs(yq-temp)>2)
        cout<<"invalid move get out";}


};



















































