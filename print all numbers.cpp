#include <iostream>
using namespace std;
char A[4];
void Kstring(int n,int k)
{
	if(n<1)
		printf("%s, ",A);
	else
	{
		for(int j=0;j<k;j++)
		{
			A[n-1] = j+48; //Unfortunately this is not mentioned in the book;
			Kstring(n-1,k);
		}
	}
}
int main(void) {
	Kstring(4,4);
	return 0;
}
