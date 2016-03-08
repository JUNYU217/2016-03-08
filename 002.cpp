#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int ArraySum(int n[],int *max)
{
	int x,y;
	for(x=0,y=0;x<*max;x++)
	{
		y=y+n[x];
	}
	return y;
}
int main()
{
	int max;
	
	cin>>max;
    int *n=new int[max];
    ifstream in("D:\\data\\data.txt");
    for(int i = 0; i<max; ++i)
    {
        in>>n[i];
    }
    in.close();
    cout<<"前"<<max<<"个数的和为"<<ArraySum(n,&max)<<endl;
    return 0;
}