#include <iostream>
#include <fstream>
#include <string>

int	main( int argc, char **argv ) {

	std::ifstream	ifs(argv[1], std::ifstream::in);
	std::ofstream	ofs("FILENAME.replace", std::ofstream::out);
	std::string		nextLine;

	if (argc == 2) {

		while (std::getline(ifs, nextLine)) {

			ofs << nextLine;
			if (!ifs.eof())
				ofs << std::endl;
		}
	}
	ifs.close();
	ofs.close();
	return 0;
}
