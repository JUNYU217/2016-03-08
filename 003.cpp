#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int ArraySum(int n[],int *bottom,int *top)
{
	int x,y;
	for(x=0,y=0;x<*top;x++)
	{
		if(x>=*bottom-1&&x<=*top)
		y=y+n[x];
	}
	return y;
}
int main()
{
	int bottom,top;
	cout<<"请输入所求和的范围";
	cout<<"bottom:";cin>>bottom;
	cout<<"top:";cin>>top;
    int *n=new int[top];
    ifstream in("D:\\data\\data.txt");
    for(int i=0; i<top;++i)
    {
        in>>n[i];
    }
    in.close();
    cout<<"第"<<bottom<<"至第"<<top<<"数之和为"<<ArraySum(n,&bottom,&top)<<endl;
    return 0;
}