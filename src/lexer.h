#ifndef LEXER_H
#define LEXER_H
#include <iostream>
#include <fstream>

struct Tokens{





    std::string type_to_string() const{


    }
};

struct Errors{

};

class InputSource{
protected:
    int marker = 0;

public:
    virtual std::string GetFileName()         = 0;
    virtual bool HasNextFile()                = 0;
    virtual bool DoGetLine(std::string* line) = 0;
    bool OpenNextFile();
    bool GetLine(std::string* line);
    int GetLineNo();
};

class StandardInputSource : InputSource {
private:

public:

};

class FileInputSource : InputSource {
private:
    std::ifstream inputStream;

public:


};

class Lexor {
private:
    std::string source;
    Errors errorList;

public:

    Lexor(std::string conSource, Errors conError){
        source = conSource;
        errorList = conError;
    };


};





#endif