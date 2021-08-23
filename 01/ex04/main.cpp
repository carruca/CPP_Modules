#include <iostream>
#include <fstream>
#include <string>

int	main( int argc, char **argv ) {

	std::ifstream	ifs(argv[1], std::ifstream::in);
	std::ofstream	ofs("FILENAME.replace", std::ofstream::out);
	std::string		nextLine;
	int				pos = 0;

	if (argc == 4) {

		while (std::getline(ifs, nextLine)) {

			pos = nextLine.find(argv[2]);
			if (pos != -1) {

				nextLine.erase(pos, strlen(argv[2]));
				nextLine.insert(pos, argv[3]);
			}
			ofs << nextLine;
			if (!ifs.eof())
				ofs << std::endl;
		}
	}
	ifs.close();
	ofs.close();
	return 0;
}
