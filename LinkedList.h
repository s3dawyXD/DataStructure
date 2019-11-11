#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
#include <stdint.h>
//#define NULL (0)
typedef struct nodes
{
    int32_t data;
    struct nodes * next ;
    
}node;

class LinkedList
{
private:
    node * Head ;/* data */
public:
    LinkedList();
    ~LinkedList();
    bool empty() const;
    void addfront(const int & e);
    void removefront();
    const int & front();

};

#endif
