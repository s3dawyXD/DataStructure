#ifndef __DLINKED_LIST_H__
#define __DLINKED_LIST_H__

//#define NULL (0)
//typedef int Elem;
typedef struct Dnodes
{
    int data;
    struct Dnodes * next ;
    struct Dnodes * prev;
    
}Dnode;

class DlinkedList
{
private:
    Dnode * Head ;/* data */
    Dnode * Tail ;
public:
    DlinkedList();
    ~DlinkedList();
    bool empty() const;
    void addfront(const int & e);
    void addback(const int & e);
    void removefront();
    void removeback();
    const int & front();
    const int & back();
    protected:
    void add(Dnode* v,const int & e);
    void remove(Dnode* v);
};

#endif
