#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){}

void LinkedList::push(int value){
    Node *node = new Node;
    node->data = value;
    node->next = nullptr;
    if(first == nullptr){
        first = node;
        last = node;
    }
    else{
        last->next = node;
        last = node;
    }
}

void LinkedList::insert(int value, int position){
    Node *temp = new Node;
    if(first == nullptr)
        push(value);
    else if(position == 0){
        temp->data = value;
        temp->next = first;
        first = temp;
    }
    else{
        Node *previous = new Node, *current = new Node;
        current = first;
        for(int i = 1; i <= position; i++){
            previous = current;
            current = current->next;
            if(current == last){
                push(value);
                return;
            }
        }
        temp->data = value;
        previous->next = temp;
        temp->next = current;
    }
}

void LinkedList::remove(){
    if(first == last){
        delete first;
        delete last;
        first = nullptr;
        last = nullptr;
    }
    else if(last != nullptr){
        Node *current = new Node;
        current = first;
        while(current->next != last){
            current = current->next;
        }
        delete last;
        last = current;
        last->next = nullptr;
    }
}

void LinkedList::remove(int position){
    if(first == nullptr)
        return;
    if(position == 0){
        Node *temp = new Node;
        temp = first;
        first = first->next;
        delete temp;
    }
    Node *previous = new Node, *current = new Node;
    current = first;
    for(int i = 1; i <= position; i++){
        previous = current;
        if(current == last){
            return;
        }
        current = current->next;
    }
    previous->next = current->next;
    delete current;
}

void LinkedList::display(){
    if(first == nullptr)
        std::cout << "List empty." << std::endl;
    else{
        Node *temp = first;
        while(temp != nullptr){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}
