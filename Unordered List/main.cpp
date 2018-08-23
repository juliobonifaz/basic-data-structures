//
//  main.cpp
//  Linked List
//
//  Created by Bryan Gonzales Vega on 8/22/18.
//  Copyright © 2018 UTEC. All rights reserved.
//

#include <iostream>
#include "list.h"

namespace cs2100 {
    template <class AnyObject>
    class UnorderedList final : List<AnyObject> {
    private:
        struct Node {
            AnyObject value;
            Node * pointer;
        };
        
        Node * head = nullptr;
        
    public:
        UnorderedList() = default;
        ~UnorderedList() = default;
        
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
using UnorderedList = cs2100::UnorderedList<AnyObject>;

int main(int argc, const char * argv[]) {
    
    UnorderedList<std::string> list;
    
    list.push_front("c");
    list.push_front("b");
    list.push_front("a");
    list.describe();
    
    list.push_back("x");
    list.push_back("y");
    list.push_back("z");
    list.describe();
    
    return 0;
}
