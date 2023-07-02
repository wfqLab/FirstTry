#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	
	cout<<"hello world\n"<<endl;
	cout<<"display number: "<<argc<<endl;
	for(int count=0; count<argc; count++)
	{
		cout<<"argv["<<count<<"]: "<<argv[]<<endl;
	}
}
