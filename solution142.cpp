#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str); // 读入字符串，包括空格

	int word_count = 0;
	bool in_word = false; // 标记是否在单词中
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ') // 遇到空格
		{
			if (in_word) // 如果前面是一个单词
			{
				word_count++;	 // 单词数加一
				in_word = false; // 标记重置为不在单词中
			}
		}
		else if (!in_word) // 如果当前不在单词中
		{
			in_word = true; // 标记为在单词中
		}
	}

	if (in_word) // 处理最后一个单词
	{
		word_count++;
	}

	cout << word_count << endl; // 输出单词数

	return 0;
}
