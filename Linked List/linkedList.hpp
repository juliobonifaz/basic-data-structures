//
//  linkedList.hpp
//  Linked List
//
//  Created by Bryan Gonzales Vega on 8/23/18.
//  Copyright © 2018 UTEC. All rights reserved.
//

#ifndef linkedList_h
#define linkedList_h

#include <iostream>
#include "../List/list.h"

namespace cs2100 {
    template <class AnyObject>
    class LinkedList final : List<AnyObject> {
    private:
        struct Node {
            AnyObject value;
            Node * pointer;
        };
        
        Node * head = nullptr;
        Node * tail = nullptr;
        
    public:
        LinkedList() = default;
        ~LinkedList() = default;
        
        Node * getHead () { return head; }
        Node * getTail () { return tail; }
        
        void push_front (AnyObject value) {
             /* se crea un nuevo nodo temporal
            este nodo apunta la cabeza
            el vector que apuntaba a la cabeca ahora apunta al nuevo nodo
            */
        }
        
        void push_back (AnyObject value) {
            /* se crea un nuevo nodo temporal
            este nodo apunta la cola
            el vector que apuntaba a la cola ahora apunta al nuevo nodo
            */
        }
        
        void pop_front() {
            /* cout a la cabeza
            se crea un puntero temporal que apunta a la cabeza 
            el puntero que apuntaba a la cabeza apunta a la cabeza +1
            se elimna la cabeza previa
            */
        }
        
        void pop_back() {
            /* cout a la cola
            se crea un puntero temporal que apunta a la cola
            el puntero que apuntaba a la cabeza apunta a la cabeza -1 esto se consuige recoriendo toda la lista hasta que se llega a este punto
            se elimna la cola previa
            */
        }
        
        inline void describe () {
            std::cout << "List:" << ((!head) ? " (empty)": " ");
            for ( Node * current = head ; current != nullptr ; current = current->pointer ) {
                std::cout << current->value << " ";
            }
            std::cout << "\n";
        }
    };
}

template <class AnyObject>
using LinkedList = cs2100::LinkedList<AnyObject>;

#endif /* linkedList_h */
