#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;


class FileManager {
public:

	void createFile(string target);
	void typeFile(string target);
	void readFile(string target);
	void removeFile(string target);
};