#ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <limits>
#include <iomanip>

class Convertion
{
private:
    std::string _arg;
    std::string _type;
    char _char;
    int _int;
    float _float;
    double _double;
    bool _print_int;

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
    Convertion();

public:
    Convertion(std::string const &arg);
    Convertion(Convertion const &obj);
    Convertion &operator=(Convertion const &obj);
    ~Convertion();


};

#endif