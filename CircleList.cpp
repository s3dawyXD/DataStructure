#include"CircleList.h"

CircleList::CircleList(): cursor (NULL)
{}

CircleList::~CircleList()
{
    while(!empty()) remove();
}
bool CircleList::empty()const
{
    return cursor==NULL;
}
const int & CircleList::front() const
{
    return cursor->next->data;
}
const int & CircleList::back() const
{
    return cursor->data;
}
void CircleList::advance()
{
    cursor = cursor->next;
}
void CircleList::add(const int & e)
{
    Cnode * v = new Cnode;
    v->data = e;
    if(cursor==NULL)
    {
        v->next=v;
        cursor = v;
    }
    else
    {
        v->next=cursor->next;
        cursor->next=v;
    }
    
}
void CircleList::remove()
{
    Cnode * old = cursor->next;
    if(old==NULL) 
        cursor=NULL;
    else 
        cursor->next=old->next;
    delete old;
}