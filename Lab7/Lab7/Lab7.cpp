// Lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iterator>

int main() {
	std::ifstream ifs("f.txt");
	std::ofstream ofs1("c.txt");
	std::ofstream ofs2("n.txt");

	for (auto it = std::istream_iterator<int>(ifs); it != std::istream_iterator<int>(); ++it)
		if (*it % 2) ofs2 << *it << ' ';
		else ofs1 << *it << ' ';

		ifs.close();
		ofs2.close();
		ofs2.close();

		return 0;
}