//перегрузка операторов
#include"string_.h"
#include<iostream>
#include<string>
using namespace std;
void main()
{
	string_ s("world");

	//s.input();
	//s.setString("ffffff");
	
	//string s2("Hello, world");
	s.insert(2, "Hello");
	//s.input();
	s.print();
	cout << endl;
	system("pause");
	/*string str;
	str = "Hello";
	str += "world.";
	cout << str;
	str[0] = 'h';
	str.clear();*/
	
}
