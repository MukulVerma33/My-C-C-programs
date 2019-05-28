#include <bits/stdc++.h>
using namespace std;
void climbingTheLadder(int *scores,int *alice,int size_scores,int size_alice)
{
    /*cout<<"scores array"<<endl;
    for(int i=0;i<size_scores;i++)
        cout<<scores[i]<<" ";
        cout<<endl;*/
    int rank[size_alice],j=0;
    for(j=0;j<size_alice;j++){
    for(int i=0;i<size_scores;i++)
    {
        if(alice[j]<scores[size_scores-1])
        {
            rank[j]=size_scores+1;
            break;
        }
        else if(alice[j]>=scores[i])
        {
            rank[j]=i+1;
            break;
        }
    }
}
for(int i=0;i<size_alice;i++)
    cout<<rank[i]<<endl;
}
int main()
{
    int size_scores,size_alice;
    cin>>size_scores;
    int scores[size_scores];
    for(int i=0;i<size_scores;i++)
    {
        cin>>scores[i];
    }
    int scores1[10],k=0;
    for(int i=0;i<size_scores;i++)
    {
        if(scores[i]!=scores[i+1])
        {
            scores1[k]=scores[i];
            k++;
        }
    }
    /*cout<<"scores array"<<endl;
    for(int i=0;i<k;i++)
        cout<<scores1[i]<<" ";
        cout<<endl;*/
    cin>>size_alice;
    int alice[size_alice];
    for(int i=0;i<size_alice;i++)
    {
        cin>>alice[i];
    }
climbingTheLadder(scores1,alice,k,size_alice);

}

/*int rank[size_alice],scores1[size_scores],k=0;
    for(int i=0;i<size_scores;i++)
    {
        if(scores[i]!=scores[i+1])
        {
            scores1[k]=scores[i];
            k++;
        }
    }
    for(int i=0;i<size_scores;i++)
        cout<<scores1[i];*/
