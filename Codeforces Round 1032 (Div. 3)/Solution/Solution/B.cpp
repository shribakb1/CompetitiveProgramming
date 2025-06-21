#include <iostream>
#include <string>
int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n; 
		std::cin >> n;

		std::string str;
		std::cin >> str;
		
		for (int i = 1; i < n - 1; i++)
		{
			std::string a = str.substr(0, i);
			std::string c = str.substr(i + 1, n - i - 1);

			if (a.find(str[i]) != std::string::npos || c.find(str[i]) != std::string::npos)
			{
				std::cout << "Yes" << std::endl;
				break;
			}
			if (i + 2 == n)
			{
				std::cout << "No" << std::endl;
			}
		}
	}
}