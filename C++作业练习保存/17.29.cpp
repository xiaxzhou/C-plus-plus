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
//#include <initalizer_list.h>
#include <stdexcept>
#include <new>
#include <tuple>
#include <regex>
#include <random>

using namespace std;
using namespace std::placeholders;


static int randhelp = 0;
unsigned int creat(const int & a = randhelp)
{
	++randhelp;
	default_random_engine e(a);
	uniform_int_distribution<unsigned> u(0, 9);
	return u(e);
}

void main()
{
	for (auto i = 0; i < 10; i++)
	{
		cout << creat() << endl;
	}
	cout << creat(3) << endl;

	system("PAUSE");
	return;
}