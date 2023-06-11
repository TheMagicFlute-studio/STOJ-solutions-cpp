#include <string>

#include <iostream>

using namespace std;

int main()
{
	
	string s;

	getline(cin, s); //获取整行内容
	
	int count = 0;
	for(int i = 0; i <= s.size(); i++)
	{
		if(s[i] == ' ')
		{
			count += 1;
		}
	}

	cout << count + 1 << endl; // 单词数比空格多1

	return 0;
} 