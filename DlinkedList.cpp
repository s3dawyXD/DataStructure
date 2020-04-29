#include"DlinkedList.h"

DlinkedList::DlinkedList()
{
    Head = new Dnode;
    Tail = new Dnode;
    Head->next = Tail;
    Tail->prev = Head;
}

DlinkedList::~DlinkedList()
{
    while(!empty())removefront();
    delete [] Tail;
    delete [] Head;
}
bool DlinkedList::empty()const
{
    return Head->next==Tail;
}
const int & DlinkedList::front()
{
    //if (empty())return;
    return Head->next->data;
}
const int & DlinkedList::back()
{
    //if (empty())return;
    return Tail->prev->data;
}
void DlinkedList::addfront(const int & e)
{
    add(Head->next,e);
}
void DlinkedList::addback(const int & e)
{
    add(Tail,e);
}
void DlinkedList::removefront()
{
    remove(Head->next);
}
void DlinkedList::removeback()
{
    remove(Tail->prev);
}
void DlinkedList::add(Dnode* v,const int & e)
{
    Dnode * u = new Dnode; u->data=e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next = v->prev = u;  
}
void DlinkedList::remove(Dnode* v)
{
    v->prev->next=v->next;
    v->next->prev=v->prev;
    delete v ;
}