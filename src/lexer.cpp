#include "lexer.h"
#include <iostream>
#include <fstream>
#include <vector>

    Token::Token(){

    };

    std::string Token::TypeToString(Type Token){

    };

    Lexor::Lexor(std::string source, Token::Type conToken, Errors conError){

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