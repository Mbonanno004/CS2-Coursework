// assembler.cpp main file for Project 3 Milestone 3
//
// Michael Bonanno

#include "utilities.hpp"

int main(int argc, char *argv[]) {
    std::vector<String> option(3);
    option[0] = "program";
    option[1] = "input";
    option[2] = "output";

    if (argc < 2) {
        std::cerr << "Error with files:" << std::endl;
        std::cerr << "[ " << option[0] << " | " << option[1] << " | " << option[2] << " ]" << std::endl;
        exit(1);
    }

    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Error: Couldn't open in file: " << argv[1] << std::endl;
        exit(2);
    }

    std::vector<String> expressions;
    int bufferSize = 1024;
    char buffer[bufferSize];
    

    while (in.getline(buffer, bufferSize)) {
        String temp(buffer);
        expressions.push_back(temp);
    }

    in.close(); 

    int i = 0;
    int size = expressions.size();

    if (argc < 3) {
        while (i < size) {
            std::cout << "Infix Expression: " << expressions[i] << std::endl;
            String result = infixToPostfix(expressions[i]);
            std::cout << "Postfix Expression: " << result << std::endl;
            std::cout << std::endl;
            std::vector<String> assembly = postfixToAssembly(result);
            int assemblyLength = assembly.size();
            for (int j = 0; j < assemblyLength; ++j) {
                std::cout << assembly[j] << std::endl;
            }
            std::cout << std::endl;
            ++i;
        }
    } else {
        std::ofstream out(argv[2]);
        if (!out) {
            std::cerr << "Error: Couldn't open out file: " << argv[2] << std::endl;
            exit(3);
        }

        while(i < size) {
            String result = infixToPostfix(expressions[i]);
            out << "Postfix Expression: " << result << std::endl;
            std::cout << std::endl;
            std::vector<String> assembly = postfixToAssembly(result);
            int assemblyLength = assembly.size();
            for (int j = 0; j < assemblyLength; ++j) {
                out << assembly[j] << std::endl;;
            }
            std::cout << std::endl;
            ++i;
        }

        out.close();
    }



    return 0;

}