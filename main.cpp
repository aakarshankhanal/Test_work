#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include "file1.h"
#include "file2.h"
#include "file3.h"
#include "file4.h"
#include "file5.h"

using json = nlohmann::json;

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <config.json>\n";
        return 1;
    }

    std::ifstream configFile(argv[1]);
    if (!configFile.is_open()) {
        std::cerr << "Could not open config file: " << argv[1] << "\n";
        return 1;
    }

    json config;
    configFile >> config;

    int a = config["a"];
    int b = config["b"];
    std::string operation = config["operation"];

    int result = 0;
    try {
        if (operation == "add") {
            result = addNumbers(a, b);
        } else if (operation == "subtract") {
            result = subtractNumbers(a, b);
        } else if (operation == "multiply") {
            result = multiplyNumbers(a, b);
        } else if (operation == "divide") {
            result = divideNumbers(a, b);
        } else {
            std::cerr << "Unknown operation: " << operation << "\n";
            return 1;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    printResult(operation, result);
    return 0;
}
