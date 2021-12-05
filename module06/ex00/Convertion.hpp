#ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <limits>

#define NON_DISPLAYABLE "Non displayable"
#define NAN "nan"
#define NANF "nanf"
#define IMPOSSIBLE "impossible"

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

    void cast_from_char();
    void cast_from_int();
    void cast_from_float();
    void cast_from_double();

public:
    Convertion(std::string const &arg);
    ~Convertion();

    void parseArg();
    void cast();
    void printAll() const;

    std::string getType() const;

    int getInt() const;
    float getFloat() const;
    double getDouble() const;
    char getChar() const;
};

#endif