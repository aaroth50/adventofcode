#include <fstream> // read and write files
#include <iostream>
#include <string> //to hold the santa plan in string

int main()
{
	std::fstream Santa;
	std::string line;
	int up=0, down=0, position=0;
	Santa.open ("Santa floor plan.txt");
	while (getline(Santa, line))
	{
		//std::cout << line << std::endl;
		for (int i = 0; i < (int)line.size(); ++i)
		{
			if (line.at(i) == '(')
			{
				up++;
				position++;
			}
			else if (line.at(i) == ')')
			{
				down++;
				position++;
			}
			if (up-down == -1)
			{
				std::cout << "Position is " << position << std::endl;
				break;
			}
		}
	}
	std::cout << "Beep Boop " <<  std::endl;
	//std::cout << "Floor is " << up - down << std::endl;
	return 0;

}
