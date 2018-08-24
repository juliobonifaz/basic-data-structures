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
            /* Complete this function */
        }
        
        void push_back (AnyObject value) {
            /* Complete this function */
        }
        
        void pop_front() {
            /* Complete this function */
        }
        
        void pop_back() {
            /* Complete this function */
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
