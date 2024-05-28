#include "FileManager.h"


void FileManager::createFile(string target) {
	string fileName;
	cout << "Type file name: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, fileName);
	string filePath = target + fileName;
	fstream file;
	file.open(filePath, ios::out);
	if (file) {
		cout << "File created succesful...\n\n";
	}
	else {
		cout << "Failed to create file...\n\n";
	}
	file.close();

}

void FileManager::typeFile(string target) {
	string fileName;
	cout << "Type file name: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, fileName);
	string filePath = target + fileName;
	fstream file;
	file.open(filePath, ios::out);
	if (file.is_open()) {
		string text;
		cout << "Type your text: ";
		getline(cin, text);
		file << text;
		file.close();
	}
	else {
		cout << "File cannot be opened...\n\n";
	}

}

void FileManager::readFile(string target) {
	string fileName;
	cout << "Type file name: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, fileName);
	string filePath = target + fileName;
	fstream file;
	file.open(filePath, ios::in);
	if (file.is_open()) {
		cout << endl;
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
		cout << "\n\nFile read successfully.\n";
	}
	else {
		cout << "File cannot be opened...\n\n";
	}

}

void FileManager::removeFile(string target) {
	string fileName;
	cout << "Type file name: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, fileName);
	string filePath = target + fileName;

	int sum = remove(filePath.c_str());

	if (sum == 0) {
		cout << "File deleted successfully...\n";
	}
	else {
		cout << "Error: File could not be deleted.\n";
	}

}
