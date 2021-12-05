#include "Convertion.hpp"

Convertion::Convertion(std::string const &arg) : _arg(arg)
{
}

Convertion::~Convertion()
{
}

void Convertion::parseArg()
{
    if (!this->argIsChar() && !this->argIsInt() && !this->argIsFloat() && !this->argIsDouble())
        this->_type = "type unknown";
    std::cout << this->getType() << std::endl;
}

int Convertion::getInt() const
{
    return (_int);
}

float Convertion::getFloat() const
{
    return (_float);
}
double Convertion::getDouble() const
{
    return (_double);
}
char Convertion::getChar() const
{
    return (_char);
}

std::string Convertion::getType() const
{
    return (_type);
}

bool Convertion::argIsInt()
{
    char *end_ptr;
    double num = std::strtol(_arg.c_str(), &end_ptr, 10);

    if (*end_ptr == '\0' && (_arg.find('.')) == std::string::npos)
    {
        this->_type = "int";
        this->_int = static_cast<int>(num);
        return (true);
    }
    return (false);
}

bool Convertion::argIsFloat()
{
    char *end_ptr;
    double num = std::strtod(_arg.c_str(), &end_ptr);

    if (*end_ptr == 'f' && *(++end_ptr) == '\0' && (_arg.find('.')) != std::string::npos)
    {
        this->_type = "float";
        this->_float = static_cast<float>(num);
        return (true);
    }
    return (false);
}
bool Convertion::argIsDouble()
{
    char *end_ptr;
    double num = std::strtod(_arg.c_str(), &end_ptr);
    if (*end_ptr != '\0' || (_arg.find('.')) == std::string::npos)
        return (false);
    this->_type = "double";
    this->_double = static_cast<double>(num);
    return (true);
}
bool Convertion::argIsChar()
{
    char *end_ptr;
    if (_arg.length() != 1)
        return (false);
    this->_type = "char";
    this->_char = static_cast<char>(std::strtod(_arg.c_str(), &end_ptr));
    return (true);
}

void Convertion::cast()
{
    if (this->_type == "char")
        cast_from_char();
    else if (this->_type == "int")
        cast_from_int();
    else if (this->_type == "float")
        cast_from_float();
    else
        cast_from_double();
}

void Convertion::cast_from_char()
{
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
    this->_double = static_cast<double>(this->_char);
}
void Convertion::cast_from_int()
{
    this->_char = static_cast<char>(this->_int);
    this->_float = static_cast<float>(this->_int);
    this->_double = static_cast<double>(this->_int);
}
void Convertion::cast_from_float()
{
    this->_char = static_cast<char>(this->_float);
    this->_int = static_cast<int>(this->_float);
    this->_double = static_cast<double>(this->_float);
}
void Convertion::cast_from_double()
{
    this->_char = static_cast<char>(this->_double);
    this->_int = static_cast<int>(this->_double);
    this->_float = static_cast<float>(this->_double);
}

void Convertion::printAll() const
{
    std::cout << "char: " << this->getChar() << std::endl;
    std::cout << "int: " << this->getInt() << std::endl;
    std::cout << "float: " << this->getFloat() << "f" << std::endl;
    std::cout << "double: " << this->getDouble() << std::endl;
}
