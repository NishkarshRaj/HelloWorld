#include<iostream>
using namespace std;
//Object Oriented Hello World Code in C++
class Hello
{
	public:
	void show()
	{
		cout<<"Hello World";
	}
};
//Main Code
int main()
{
	Hello *h1 = new Hello;
	h1->show();
}
