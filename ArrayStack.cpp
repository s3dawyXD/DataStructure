#include"ArrayStack.h"

////template<typename E>
ArrayStack::ArrayStack(int cap )
{
    S = new E[cap];
    capacity = cap;
    t=0;
}
//template<typename E>
ArrayStack::~ArrayStack()
{
    delete[] S ;
}
//template<typename E>
int ArrayStack::size()const
{
    return t;
}
//template<typename E>
bool ArrayStack::empty()const
{
    return t<=0;
}
//template<typename E>
void ArrayStack::push(const E & e)
{
    if(t<capacity)
    {
        S[t]=e;
        t++;
    }
}
//template<typename E>
void ArrayStack::pop()
{
    if(t<=0){}
    else
    {
        --t;
    }
}
//template<typename E>
const E & ArrayStack::top()const
{
    if (empty())return __null;
    
    return S[t-1];
}
