#include"LinkedList.h"

LinkedList::LinkedList(): Head(NULL)
{}

LinkedList::~LinkedList()
{
    while(!empty())removefront();
}
bool LinkedList::empty()const
{
    return Head==NULL;
}
const int & LinkedList::front()
{
    //if (empty())return;
    return Head->data;
}
void LinkedList::addfront(const int & e)
{
    node * v =new node ;
    v->data=e;
    v->next=Head;
    Head=v;
}
void LinkedList::removefront()
{
    node * old = Head;
    Head = Head->next;
    delete old;
}
