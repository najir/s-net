#include "lexer.h"
#include <iostream>
#include <fstream>
#include <vector>

    Tokenizer::Tokenizer(int funcType, char* funcLine, int funcPos){

    };

    std::string Tokenizer::GetDescription(){

    }

    std::string Tokenizer::TypeToString(Type Token){

    };

    Lexor::Lexor(std::string source, Tokenizer::Type conToken, Errors conError){

    };
    void Lexor::AddFile(std::string filePath){

    };
    bool Lexor::OpenNextFile(){

    };
    bool Lexor::HasNextFile(){

    };
    void Lexor::RestorePoint(int position){

    };
    bool Lexor::GetLine(std::string* line){

    };
    int Lexor::GetLineNo(){

    };