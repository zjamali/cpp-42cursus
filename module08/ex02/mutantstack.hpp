#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <deque>
#include <stack>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:
    MutantStack(){}
    MutantStack(MutantStack const &obj){*this = obj;}
    MutantStack &operator=(MutantStack const &obj)
    {
        *(dynamic_cast< std::stack<T, Container> * >(this)) = obj;
    }
    ~MutantStack(){}

public:
    typedef typename Container::iterator iter_type;

public:
    class iterator
    {
    private:
        iter_type _iter;
        iterator(){};
    public:
        iterator(iter_type const &iter) : _iter(iter) {}
        iterator(iterator const &obj) {*this = obj;}
        iterator &operator=(iterator const &obj)
        {
            if (this != &obj)
            {
                this->_iter = obj._iter;
            }
            return (*this);
        }
        ~iterator() {}

    public:
        iterator &operator++()
        {
            this->_iter++;
            return (*this);
        }
        iterator &operator--()
        {
            this->_iter--;
            return (*this);
        }

        iterator &operator++(int)
        {
            iterator tmp = *this;
            this->_iter++;
            return (tmp);
        }

        iterator &operator--(int)
        {
            iterator tmp = *this;
            this->_iter--;
            return (tmp);
        }

        T &operator*()
        {
            return (*this->_iter);
        }

        bool operator==(const iterator &obj) const
        {
            return (this->_iter == obj._iter);
        }

        bool operator!=(const iterator &obj) const
        {
            return (this->_iter != obj._iter);
        }
    };
    iterator begin()
    {
        return (MutantStack<T, Container>::iterator(this->c.begin()));
    }
    iterator end()
    {
        return (MutantStack<T, Container>::iterator(this->c.end()));
    }
};

#endif