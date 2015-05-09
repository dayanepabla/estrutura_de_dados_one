#include "list.h"

template <class Object>
List<Object>::List()
    : _size(0), head(new Node(Object(), nullptr, nullptr)), tail(new Node(Object(), nullptr, nullptr)) {}

template <class Object>
List<Object>::List(const List & list)
    : _size(list._size), head(list.head), tail(list.tail) {}

template <class Object>
List<Object>::~List()
{
    delete head;
    delete tail;
}

template <class Object>
const List<Object> &
List<Object>::operator=(const List & list)
{
    _size = list._size;
    head = list.head;
    tail = list.tail;

    return *this;
}

template <class Object>
typename List<Object>::iterator List<Object>::begin()
{
    return List<Object>::iterator(this->head);
}

template <class Object>
typename List<Object>::const_iterator
List<Object>::begin() const
{
    return List<Object>::const_iterator(this->head);
}

template <class Object>
typename List<Object>::iterator
List<Object>::end()
{
    return List<Object>::iterator(this->tail);
}

template <class Object>
typename List<Object>::const_iterator
List<Object>::end() const
{
    return List<Object>::const_iterator();
}

template <class Object>
int List<Object>::size() const
{
    return _size;
}

template <class Object>
bool List<Object>::empty() const
{
    return _size == 0;
}

template <class Object>
void List<Object>::clear()
{
    delete head;
    delete tail;

    head = nullptr;
    tail = nullptr;
    _size = 0;
}

template <class Object>
typename List<Object>::iterator
List<Object>::insert(List<Object>::iterator itr, const Object & x)
{
    Node itr_node = *itr;
    Node new_node = Node();

    _size++;

    new_node.data = x;
    new_node.prev = itr_node.prev;
    new_node.next = &itr_node;
    itr_node.prev = &new_node;

    if(empty())
        *head = new_node;

    return List<Object>::iterator(&new_node);
}

template <class Object>
typename List<Object>::iterator
List<Object>::erase(List<Object>::iterator itr)
{
    return nullptr;
}

template <class Object>
typename List<Object>::iterator
List<Object>::erase(List<Object>::iterator start, List<Object>::iterator end)
{
    return nullptr;
}

template <class Object>
typename List<Object>::const_iterator
List<Object>::find(const Object & x) const
{
    return nullptr;
}

template <class Object>
typename List<Object>::iterator
List<Object>::find(const Object & x)
{
    return nullptr;
}


// const_iterator
// ----------------------------------------------------------------------------

template <class Object>
List<Object>::const_iterator::const_iterator()
    : current(nullptr) {}


template <class Object>
const Object &
List<Object>::const_iterator::operator*() const
{
    return nullptr;
}

template <class Object>
typename List<Object>::const_iterator &
List<Object>::const_iterator::operator++()
{
    return nullptr;
}

template <class Object>
typename List<Object>::const_iterator &
List<Object>::const_iterator::operator++(int)
{
    return nullptr;
}

template <class Object>
typename List<Object>::const_iterator
List<Object>::const_iterator::operator--()
{
    return nullptr;
}

template <class Object>
typename List<Object>::const_iterator
List<Object>::const_iterator::operator--(int)
{
    return nullptr;
}

template <class Object>
List<Object>::const_iterator::const_iterator(List<Object>::Node* p)
    : current(p) {}


// iterator
// ----------------------------------------------------------------------------

template <class Object>
const Object &
List<Object>::iterator::operator*() const
{
    return nullptr;
}

template <class Object>
Object &
List<Object>::iterator::operator*()
{
    return this->current->data;
}

template <class Object>
typename List<Object>::iterator &
List<Object>::iterator::operator++()
{
    return nullptr;
}

template <class Object>
typename List<Object>::iterator
List<Object>::iterator::operator++(int)
{
    return nullptr;
}

template <class Object>
typename List<Object>::iterator &
List<Object>::iterator::operator--()
{
    return nullptr;
}

template <class Object>
typename List<Object>::iterator
List<Object>::iterator::operator--(int)
{
    return nullptr;
}

template <class Object>
List<Object>::iterator::iterator(List<Object>::Node* p)
{}
