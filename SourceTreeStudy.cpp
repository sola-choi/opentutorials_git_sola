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
    cout<<"		<meta chatset="UTF-8"/>"<<endl;
	cout<<"     <title>"<<endl;
	cout<<"         introduce Git"<<endl;
	cout<<"     </title>"<<endl;
	cout<<"	</head>"<<endl;
	cout<<"	<body>"<<endl;
	cout<<"		<header>"<<endl;
	cout<<"			<h1>Git</h1>"<<endl;
	cout<<"		<header>"<<endl;
	cout<<"		<ul>"<<endl;
	cout<<"         <li>sync.egoinh</li>"<<endl;
	cout<<"         <li>Git이란?</li>"<<endl;
	cout<<"         <li>버전</li>"<<endl;
	cout<<"         <li>Branch</li>"<<endl;
	cout<<"         <li>브랜치</li>"<<endl;
	cout<<"         <li>충돌</li>"<<endl;
	cout<<"         <li>충돌 해결</li>"<<endl;
	cout<<"         <li>원격저장소</li>"<<endl;
	cout<<"         <li>push</li>"<<endl;
	cout<<"         <li>pull</li>"<<endl;
	cout<<"         <li>push</li>"<<endl;
	cout<<"         <li>pull.clone</li>"<<endl;
	cout<<"         <li>comflict.egoing</li>"<<endl;
	cout<<"         <li>conflict.clone</li>"<<endl;
	cout<<"         <li>스태시</li>"<<endl;
	cout<<"         <li>stas</li>"<<endl;
	cout<<"         <li>ignore</li>"<<endl;
	cout<<"		</ul>"<<endl;
	cout<<"	</body>"<<endl;
	cout<<"</html>"<<endl;

	getchar();
	return 0;
}
