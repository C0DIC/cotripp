#include "interperter.h"

std::string usage_message = 
"Usage:\n"\
"       cotripp \"[text]\" [output language]\n" \
"       cotripp \"[text]\" [source language] [target language]\n\n" \
"Translate files:\n" \
"       cotripp [--file || -f] [file] [output language]\n" \
"       cotripp [--file || -f] [file] [source language] [output language]\n" \
"       cotripp [--file || -f] [file] [output language] [output file]\n" \
"       cotripp [--file || -f] [file] [source language] [output language] [output file]\n";

void interpreter(int argc, const char *argv[]) {
    if (argc <= 2) { std::cout << usage_message; exit(1); }

    LibreTranslateAPI translator;

    std::cout << "Translating...\n";

    if (argc == 3 && !(!strcmp(argv[1], "--file") || !strcmp(argv[1], "-f" ))) {
        std::cout << 
            translator.translate(argv[1], "auto", argv[2])["translatedText"]
        << std::endl;
        return;
    } else {
        if(isTXT(argv[2])) {
            std::string fileData = getFileData(argv[2]);

            if (argc < 4) {
                std::cout << "Maybe you missed argument after file name!\n"; exit(1);
            }

            if (argc == 4) {
                std::cout <<
                    translator.translate(fileData, "auto", argv[3])["translatedText"]
                << std::endl;
                return;
            }

            if (argc == 5 && isTXT(argv[4])) {
                std::string translated = translator.translate(fileData, "auto", argv[3])["translatedText"];
                writeFileData(argv[4], translated);
                std::cout << "Successfully translated into " << argv[4] << std::endl; 
                return;
            } else {
                std::cout <<
                    translator.translate(fileData, argv[3], argv[4])["translatedText"]
                << std::endl;
                return;
            }

            if (argc == 6) {
                std::string translated = translator.translate(fileData, argv[3], argv[4])["translatedText"];
                writeFileData(argv[5], translated);
                std::cout << "Successfully translated into " << argv[5] << std::endl; 
                return;
            }
        }
    }
};