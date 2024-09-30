#include <iostream>

void pint_askii() {
	for (int i = 0; i < 256; i++) {
		std::cout << i << ":\t" << (char)i << std::endl;
	}
}


void alpha_upper_lower() {
	for (int i = 0; i < 256; i++) {
		std::cout << i << ":\t" << (char)i << "\t" << (char)(i + 32) << std::endl;
	}
}
char to_upper(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - 32;
	}
	return c;
}

char to_lower(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}
	return c;
}

bool is_alpha(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return true;
	}
	return false;
}

// write code of minecraft game

// write code of minecraft game






void str_to_upper(char* str) {
	int i = 0;
	do
	{
		str[i] = to_upper(str[i]);
		i++;
	} while (str[i] != '\0');
}

void str_to_lower(char* str) {
	int i = 0;
	do
	{
		str[i] = to_lower(str[i]);
		i++;
	} while (str[i] != '\0');
}


int main() {

	char str[] = "Hello, World!";
	char* str_p = new char[25] {"Hello, World!"};

	const int size = strlen(str);


	std::cout << "|";
	for (int i = 0; i < size; i++) {
		std::cout << str_p[i] << "|";
	}


	std::cout << std::endl;
	std::cout << "str: size = " << size << std::endl;

	// call function str_to_upper

	str_to_upper(str_p);

	std::cout << "|";
	for (int i = 0; i < size; i++) {
		std::cout << str_p[i] << "|";
	}

	// function str_to_lower

	str_to_lower(str_p);

	std::cout << std::endl;
	std::cout << "|";
	for (int i = 0; i < size; i++) {
		std::cout << str[i] << "|";
	}



	

	return 0;
}