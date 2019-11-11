#ifndef __CIRCLELIST_H__
#define __CIRCLELIST_H__

typedef struct Cnodes 
{
    int data;
    struct Cnodes * next;
}Cnode;


class CircleList
{
private:
    Cnode* cursor;
public:
    CircleList(/* args */);
    ~CircleList();
    bool empty()const;
    const int & front()const;
    const int & back() const;
    void advance();
    void add(const int & e);
    void remove();
    
};





#endif