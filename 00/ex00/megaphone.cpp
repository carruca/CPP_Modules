#include <iostream>

void	print_uppercase(char *str)
{
	while (*str)
		std::cout << (char)std::toupper(*(str++));
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*(++argv))
			print_uppercase(*argv);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
