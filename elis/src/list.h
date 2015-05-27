#ifndef _LIST_H_
#define _LIST_H_

#include <iostream>

namespace Elis
{
    class List
    {
        private:
            struct Node {
                std::string data;
                Node *next;

                Node(const std::string &d, Node* n = nullptr):
                    data(d), next(n) {}
            };

        public:
            List();
            ~List();

            int size();
            bool is_empty();
            std::string pop();
            std::string& first();
            void push_front(std::string &str);

        private:
            int elements;
            Node* head;
            Node* tail;
    };
}

#endif
