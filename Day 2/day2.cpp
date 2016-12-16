#include <fstream>
#include <iostream>
#include <string>
#include "present.h"
#include <vector>

int main()
{
	std::fstream file;
	std::string line;
	std::vector<Present> vecP;
	file.open("present.txt");
	while (getline(file, line))
	{
		std::string strL, strW, strH;
		int counter=0;
		for (int i = 0; i < (int)line.size(); ++i)
		{
			if(line.at(i) == 'x')
			{
				counter++;
			}
			else
			{
				if (counter == 0)
				{
					strL += line.at(i);
				}
				else if (counter == 1)
				{
					strW += line.at(i);
				}
				else if (counter == 2)
				{
					strH += line.at(i);
				}
			}
		}
		int le = std::stoi (strL);
		int wi = std::stoi (strW);
		int he = std::stoi (strH);
		vecP.push_back(Present(le,wi,he));

	}
	int tot = 0;

	for (std::vector<Present>::iterator itr = vecP.begin(); itr != vecP.end(); ++itr)
	{
		tot += itr->getTotal();
	}
	std::cout << "Total is " << tot << std::endl;
	return 0;
}