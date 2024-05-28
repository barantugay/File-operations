#include <iostream>
#include "FileManager.h"
#include <string>
#include <fstream>
#include <limits>
using namespace std;

int main() {

	

	static string target;
	cout << "Type your target folder: ";
	cin >> target;

	while (true) {
		int num;
		cout << "*** " + target + " ***\n";
		cout << "Change file target: 1\n";
		cout << "Create file: 2\n";
		cout << "Type file: 3\n";
		cout << "Read file: 4\n";
		cout << "Delete file: 5\n";
		cout << "Quit: 6\n";
		cout << "Your choice: ";
		cin >> num;


		switch (num)
		{
		case 1:
			cout << "Type new target: ";
			cin >> target;
			break;

		case 2:
			FileManager newFile;
			newFile.createFile(target);
			break;

		case 3:
			FileManager typeFile;
			typeFile.typeFile(target);
			break;

		case 4:
			FileManager readFile;
			readFile.readFile(target);
			break;

		case 5:
			FileManager removeFile;
			removeFile.removeFile(target);
			break;

		case 6:
			return 1;
		default:
			break;
		}
	}
	


	cout << endl;
	return 0;
}