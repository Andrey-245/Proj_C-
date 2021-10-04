#include <iostream>

int main()
{
	int x, z;
	z = 0 - x;
	std::cout << "Input x" << std::endl;
	std::cin >> x;


	while (z < 0 ) {
				
		std::string y(x, '*');
		std::cout << y << std::endl;
		
		z = z + 1;
		


	}


}
