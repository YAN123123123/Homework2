#include <iostream>
using namespace std;
int main()
{
	int a=15;
	int b=15;
	for(a=15;a<105;a+=10)
	{
		for(b=15;b<=a;b+=10)
		{
			cout<<b<<"*"<<a<<"="<<b*a<<"\t";
		
		}	
		cout<<endl;
	}
	system("pause");
	return 0;
}
