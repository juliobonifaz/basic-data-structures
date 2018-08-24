//
//  circularLinkedList.h
//  Circular Linked List
//
//  Created by Bryan Gonzales Vega on 8/23/18.
//  Copyright © 2018 UTEC. All rights reserved.
//

#ifndef circularLinkedList_h
#define circularLinkedList_h

#include <iostream>
#include "../List/list.h"

namespace cs2100 {
    template <class AnyObject>
    class CircularLinkedList final : List<AnyObject> {
    private:
        struct Node {
            AnyObject value;
            Node * next_pointer;
            Node * previous_pointer;
        };
        
        Node * head = nullptr;
        
    public:
        CircularLinkedList() = default;
        ~CircularLinkedList() = default;
        
        Node * getHead () { return head; }
        
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
            
            /* Complete this function */
        }
    };
}

template <class AnyObject>
using CircularLinkedList = cs2100::CircularLinkedList<AnyObject>;

#endif /* circularLinkedList_h */
