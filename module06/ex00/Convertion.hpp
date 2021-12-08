#ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <limits>
#include <iomanip>

class Convertion
{
private:
    std::string const _arg;
    std::string _type;
    char _char;
    int _int;
    float _float;
    double _double;

    bool argIsInt();
    bool argIsFloat();
    bool argIsDouble();
    bool argIsChar();

    void castFromChar();
    void castFromInt();
    void castFromFloat();
    void castFromDouble();

    void printChar() const ;
    void printInt() const ;
    void printFloat() const ;
    void printDouble() const ;
    void cast();
    void parseArg();
    void printAll() const;

public:
    Convertion(std::string const &arg);
    ~Convertion();


};

#endif