#include "translateFile.h"

std::string getFileData(const char *filename) {
    std::ifstream file;
    file.open(filename);

    if (!file) {
        std::cout << "[COTRIPP] There's no file named " << filename << std::endl;
        exit(1);
    }

    std::string data; char file_char;

    while (!file.eof()) {
        file.get(file_char);
        data.push_back(file_char);
    }

    file.close();

    return data;
};

void writeFileData(const char *filename, std::string data) {
    std::ofstream file;
    file.open(filename);

    if (!file) {
        std::cout << "[COTRIPP] Can't open file. Exiting\n";
        exit(1);
    }

    file << data << std::endl;

    file.close();
}