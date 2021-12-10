#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP
template <typename T>

void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T>
T min(T x, T y)
{
    return (x >= y ? y : x);
}

template <typename T>
T max(T x, T y)
{
    return (x <= y ? y : x);
}

#endif