#ifndef COTRIPP_TRANSLATE_FILE_H
#define COTRIPP_TRANSLATE_FILE_H

#include <iostream>
#include <fstream>
#include <cstdlib>

std::string getFileData(const char *filename);
void writeFileData(const char *filename, std::string data);

#endif /* COTRIPP_TRANSLATE_FILE_H */