#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList
{
    struct Node{
        int data;
        Node* next;
    };
    public:
        LinkedList();
        void push(int);
        void insert(int,int position);
        void remove();
        void remove(int position);
        void display();
    private:
        Node *first = nullptr, *last = nullptr;
};

#endif // LINKEDLIST_H
