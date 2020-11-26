#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"<html>"<<endl;
	cout<<"	<head>"<<endl;
	cout<<"     <title>"<<endl;
	cout<<"         Git ¼Ò°³"<<endl;
	cout<<"     </title>"<<endl;
	cout<<"	</head>"<<endl;
	cout<<"	<body>"<<endl;
	cout<<"		<header>"<<endl;
	cout<<"			<h1>Git</h1>"<<endl;
	cout<<"		<header>"<<endl;
	cout<<"	</body>"<<endl;
	cout<<"</html>"<<endl;

	getchar();
	return 0;
}
