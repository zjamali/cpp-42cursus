#include "Convertion.hpp"

Convertion::Convertion(std::string const &arg) : _arg(arg)
{
}

Convertion::~Convertion()
{
}

void Convertion::parseArg()
{
    if (!this->argIsInt() && !this->argIsChar() && !this->argIsFloat() && !this->argIsDouble())
    {
        std::cout << "argument type unkown" << std::endl;
    }
    else
    {
    this->cast();
    }
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
    long num = std::strtol(_arg.c_str(), &end_ptr, 10);

    if (*end_ptr == '\0' && (_arg.find('.')) == std::string::npos)
    {
        if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
            return (false);
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

    if ((*end_ptr == 'f' && *(++end_ptr) == '\0' && (_arg.find('.')) != std::string::npos) || _arg == "nanf")
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
    if ((*end_ptr != '\0' || (_arg.find('.')) == std::string::npos) && _arg != "nan")
        return (false);
    this->_type = "double";
    this->_double = static_cast<double>(num);
    return (true);
}
bool Convertion::argIsChar()
{
    if (_arg.length() != 1)
        return (false);
    this->_type = "char";
    this->_char = static_cast<char>(_arg[0]);
    return (true);
}

void Convertion::cast()
{
    if (this->_type == "char")
        castFromChar();
    else if (this->_type == "int")
        castFromInt();
    else if (this->_type == "float")
        castFromFloat();
    else if (this->_type == "double")
        castFromDouble();
    else
    {
        return;
    }
    this->printAll();
}

void Convertion::castFromChar()
{
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
    this->_double = static_cast<double>(this->_char);
}
void Convertion::castFromInt()
{
    this->_char = static_cast<char>(this->_int);
    this->_float = static_cast<float>(this->_int);
    this->_double = static_cast<double>(this->_int);
}
void Convertion::castFromFloat()
{
    this->_char = static_cast<char>(this->_float);
    this->_int = static_cast<int>(this->_float);
    this->_double = static_cast<double>(this->_float);
}
void Convertion::castFromDouble()
{
    this->_char = static_cast<char>(this->_double);
    this->_int = static_cast<int>(this->_double);
    this->_float = static_cast<float>(this->_double);
}

void Convertion::printAll() const
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}


void Convertion::printChar() const
{
    if (_arg == "nan" || _arg == "nanf" || std::strtol(_arg.c_str(), nullptr, 10) > 256)
    {
        std::cout << "char: impossible" << std::endl;
    }
    else if ( _char > 127 || _char < 30)
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char: '" << _char << "'" << std::endl;
    }
}

void Convertion::printInt() const
{
    if ((_arg == "nan" || _arg == "nanf") ||
        std::strtol(_arg.c_str(), nullptr, 10) > std::numeric_limits<int>::max()||
        std::strtol(_arg.c_str(), nullptr, 10) < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        std::cout << "int: " << _int << std::endl;
    }
}

void Convertion::printFloat() const
{
    std::cout << "float: " << std::fixed << std::setprecision(1) << this->getFloat() << "f" << std::endl;
}

void Convertion::printDouble() const
{
    std::cout << "double: " << std::fixed << std::setprecision(1) << this->getDouble() << std::endl;
}
