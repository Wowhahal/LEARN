#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <set>
#include <stdio.h>
using namespace std;
multiset<char> st;
 
int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		st.insert(str[i]);
		int k;
		cin >> k;
		if (k > str.size())
		{
			auto it = st.rbegin();
			int e = *it;
			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i] == e)
				{
					cout << i << endl;
					break;
				}
			}
		}
		else
		{
			int cnt = 0;
			char c;
			for (auto it = st.begin(); it != st.end(); ++it)
			{
				cnt++;
				if (cnt == k)
					c = *it;
				break;
			}
		}
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == c)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}