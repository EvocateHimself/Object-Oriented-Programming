#include <iostream>
#include <fstream>
#include <string>

#define FILE_IN "C:/Users/kevin/OneDrive/#HKU/#JAAR_2/Object Oriented Programming/Les4/Les4/jabberwocky.txt"
#define FILE_OUT "C:/Users/kevin/OneDrive/#HKU/#JAAR_2/Object Oriented Programming/Les4/Les4/jabberwocky-reversed.txt"

int main() {
	std::ifstream in_stream;

	in_stream.open(FILE_IN);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(FILE_OUT);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	in_stream.seekg(0, in_stream.end);
	int length = in_stream.tellg();

	for (int i = 1; i < length + 1; i++)
	{
		in_stream.seekg(-i, in_stream.end);
		char ch = in_stream.peek();
		out_stream.put(ch);
	}

	in_stream.close();
	out_stream.close();

	std::cin.get();
	return 0;
}