#ifndef LEXER_H
#define LEXER_H
#include <iostream>
#include <fstream>
#include <vector>

class Token{ //Expect to be moved to it's own header file
public:
    enum Type{
        eof         = 1,
        eol         = 2,
        indentation = 3,
        identifier  = 4,
        def         = 5,
        symbol      = 6,
        _class      = 7,
        _import     = 8,
        _return     = 9,
        _if         = 10,
        _else       = 11,
        _elif       = 12,
        _and        = 13,
        _or         = 14,
        _while      = 15,
        _int        = 16,
        _string     = 17,
        _operator   = 18,
        UNKNOWN     = 19,
        lComment    = 20,
        bComment    = 21,
        _scope      = 22

    };

    Token();

    std::string TypeToString(Type token);
};

struct Errors{ //Also expect to be moved to it's own header file

};

class InputSource{
protected:
    int marker = 0;

public:
    virtual std::string GetFileName()         = 0;
    virtual bool HasNextFile()                = 0;
    virtual bool DoGetLine(std::string* line) = 0;
    virtual bool OpenNextFile()               = 0;
    void RestorePoint(int position);
    bool GetLine(std::string* line);
    int GetLineNo();
};

class StandardInputSource : InputSource {
private:

public:

};

class FileInputSource : public InputSource {
private:
    std::ifstream inputStream;
    std::vector<std::string> fileNames;

public:
    FileInputSource(){};
    ~FileInputSource();
    void AddFile(const std::string& filePath);
    bool OpenNextFile() override;
    bool HasNextFile() override;




};

class Lexor {
private:
    std::ifstream inputStream;
    std::vector<std::string> fileNames;
    int lineMarker;
    int charMarker;
    Errors errorList;
    Token::Type tokenList;

public:
    Lexor(std::string source, Token::Type conToken, Errors conError);
    void AddFile(std::string filePath);
    bool OpenNextFile();
    bool HasNextFile();
    void RestorePoint(int position);
    bool GetLine(std::string* line);
    int GetLineNo();

};





#endif