#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	for(int i=0;i<5;i++)
	v.push_back(i);
	cout<<"size="<<v.size()<<endl;
	cout<<"capacity="<<v.capacity()<<endl;
	cout<<"max size="<<v.max_size()<<endl;
	
	
	cout<<v.size();
}
