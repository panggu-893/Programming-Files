#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char text[100];

	while(true)
	{
		int count = 1;

		cout << "영문 텍스트 입력> ";
		cin.getline(text, 100);
		
		if (strcmp(text, "exit") == 0)
			break;

		else if (strcmp(text, "") == 0)
			cout << "단어의 개수는 0개입니다.\n";
		
		else
		{
			for (int i = 0;i < strlen(text);i++)
			{
				if (text[i] == '\0')
					break;
				else if (text[i] == ' ')
					count++;
				else
					continue;
			}

			cout << "단어의 개수는 " << count << "개 입니다.\n";
		}


	}

	return 0;
}
