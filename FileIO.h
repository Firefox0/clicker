#pragma once

#include "Clicker.h"

#include <Windows.h>
#include <fstream>
#include <string>

class FileIO {
public:
	static POINT read_from_file(const char* file_name);
	static void write_pos(const char* file_name);
	static void write_2d_char_array(const char* file_name, char** array, int length);
	static void write_to_file(const char* file_name, char* output);
};