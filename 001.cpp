#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int x,y;
    int n[100];
    ifstream in("D:\\data\\data.txt");
    for(int i = 0; i<100; ++i)
    {
        in>>n[i];
    }
    in.close();
	for(x=0,y=0;x<100;x++)
	{
		y=y+n[x];
	}
    cout<<"前100个数的和为"<<y<<endl;
    return 0;
}