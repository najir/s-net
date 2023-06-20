#ifndef LEXER_H
#define LEXER_H
#include <iostream>
#include <fstream>
#include <vector>

class Tokenizer{
public:
    //List of total characters to tokenize
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

    //Token location data for Error handling
    struct Location{
        const char* file_path;
        size_t row;
        size_t col;
    };
    //Actual character being represented as a token
    struct Token{
        Type typeKind;
        Location loc;
        const char* text;
        size_t len;
    };

    //Build token(Expect parameters to be changed :o )
    Tokenizer(int funcType, char* funcLine, int funcPos);

    //Returns a string of current token type
    std::string TypeToString(Type token);

    //Provides string description of token type
    std::string GetDescription();
};

struct Errors{ //May be moved to it's own file??

};

class Lexor {
private:
    std::ifstream inputStream;
    std::vector<std::string> fileNames;
    int lineMarker;
    int charMarker;
    Errors errorList;
    Tokenizer::Type tokenList;

public:
    Lexor(std::string source, Tokenizer::Type conToken, Errors conError);
    void AddFile(std::string filePath);
    bool OpenNextFile();
    bool HasNextFile();
    void RestorePoint(int position);
    bool GetLine(std::string* line);
    int GetLineNo();

};

#endif