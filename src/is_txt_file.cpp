#include "is_txt_file.h"

bool isTXT(std::string name) {
    unsigned int len = name.length() - 1;

    if (
        (name[len] == 't') &&
        (name[len - 1] == 'x') &&
        (name[len - 2] == 't') && (name[len - 3] == '.')
    )
    return true; else {
        std::cout <<  "[COTRIPP] That's not a .txt file!\n";       
        return false;
    }
};