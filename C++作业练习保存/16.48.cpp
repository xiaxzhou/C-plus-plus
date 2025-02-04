// test.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <deque>
#include <iostream>
#include <list> 
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
#include <forward_list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <time.h>
#include <utility>
//#include <initalizer_list.h>
#include <stdexcept>
#include <new>

using namespace std;
using namespace std::placeholders;


template<typename T>
string debug_rep(const T &t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}


template<typename T> string debug_rep(T *p)
{
	ostringstream ret;
	ret << "pointer: " << p;
	if (p)
		ret << " " << debug_rep(*p);
	else{
		ret << " null pointer";
	}
	return ret.str();
}

string debug_rep(const string &s)
{
	return  '"' + s + '"';
}

string debug_rep(char *p)
{
	return debug_rep(string(p));
}
string debug_rep(const char *p)
{
	return debug_rep(string(p));
}

void main()
{
	string s("hi");
	cout << debug_rep(&s) << endl;

	cout << debug_rep(s) << endl;

	system("PAUSE");
	return;
}