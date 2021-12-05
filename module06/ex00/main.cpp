#include "Convertion.hpp"
int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        Convertion num(argv[1]);
        num.parseArg();
        num.cast();
        num.printAll();
    }
    return 0;
}
