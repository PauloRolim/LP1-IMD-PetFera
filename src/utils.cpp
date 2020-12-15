#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

#include "utils.hpp"

void utils::printTitle(std::string title, int largura) {
	int spaceOnLeft = (largura-title.length())/2;
	int spaceExtra = title.length()%2;
	std::cout << std::setfill('*') << std::setw(largura) << ""<< std::endl;
	std::cout << "**" 
		<< std::setfill(' ') << std::setw(spaceOnLeft-2) << ""
		<< title 
		<< std::setfill(' ') << std::setw(spaceOnLeft-2+spaceExtra) << ""
		<< "**" << std::endl;
	std::cout << std::setfill('*') << std::setw(largura) << "" << std::endl;
}

void utils::limpaTela() {
	#if defined _WIN32
	    system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	    system("clear");
	#elif defined (__APPLE__)
	    system("clear");
	#endif
}

void utils::pausar() {
	std::cout << "Pressione enter para continuar...";
	std::cin.get();
	std::cin.ignore();
}
