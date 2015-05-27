#include "list.h"

using namespace Elis;

List::List()
    : elements(0), head(nullptr), tail(nullptr) {}

List::~List()
{
    delete this->head;
    delete this->tail;
}

int List::size()
{
    return this->elements;
}

bool List::is_empty()
{
    return this->elements == 0;
}

std::string List::pop()
{
    if (is_empty())
        return "";

    std::string data;

    data = head->data;
    head = head->next;

    return data;
}

std::string& List::first()
{
    return head->data;
}

void List::push_front(std::string &str)
{
    Node* node = new Node(str, head);

    head = node;
    elements++;
}
