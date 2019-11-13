#ifndef __ARRAY_STACK_H__
#define __ARRAY_STACK_H__

#define DEF_CAP (100)
//template<typename E>
typedef int E;
class ArrayStack
{
private:
    E* S;
    int t;
    int capacity;
public:
    ArrayStack(int cap = DEF_CAP);
    ~ArrayStack();
    int size()const;
    bool empty()const;
    void push(const E & e);
    void pop();
    const E & top()const;
};




#endif