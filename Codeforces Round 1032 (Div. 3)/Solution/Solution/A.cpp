#include <iostream>
#include <vector>

int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		int s;
		std::cin >> n >> s;

		std::vector<int> pos(n);

		for (int i = 0; i < n; i++)
			std::cin >> pos[i];

		int steps = 0;

		if (s >= pos[n - 1])
		{
			steps = s - pos[0];
		}
		else if (s <= pos[0])
		{
			steps = pos[n - 1] - s;
		}
		else if (s == pos[0])
		{
			steps = pos[n - 1] - pos[0];
		}
		else if ((s - pos[0]) < (pos[n - 1] - s))
		{
			steps = s - pos[0] + (pos[n - 1] - pos[0]);
		}
		else
		{
			steps = (pos[n - 1] - s) + (pos[n - 1] - pos[0]);
		}
		
		std::cout << steps << std::endl;
	}
}
