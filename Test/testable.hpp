//
//  test.hpp
//  Basic Data Structures
//
//  Created by Bryan Gonzales Vega on 8/23/18.
//  Copyright © 2018 UTEC. All rights reserved.
//

#ifndef test_hpp_h
#define test_hpp_h

#include <cassert>
#include <iostream>
#include <functional>
#include <map>
#include <ostream>

#define ASSERT(condition) void((condition) ? 0 : throw Failure( { "ASSERT(" #condition ")", __LINE__ } ))

enum class TestLevel {
    easy, tricky, hard
};

std::ostream& operator << (std::ostream& os, const TestLevel& level) {
    if (level == TestLevel::easy ) {
        os << "easy";
    } else if (level == TestLevel::tricky){
        os << "tricky";
    } else if (level == TestLevel::hard) {
        os << "hard";
    }

    return os;
}

typedef std::map<TestLevel, std::function<void()> > TestCases;

struct Failure {
    std::string expression;
    int line;
};

struct Testable {
    static void run(TestCases tests, TestLevel level) {
        try {
            std::cout << "Testing " << level << " case ... ";
            tests[level]();
            std::cout << "\t PASSED!" << std::endl;
        } catch ( Failure &caught ) {
            std::cout << "\t FAILED!";
            std::cout << "\n\tTest failed: " << caught.expression << " at line " << caught.line << "\n";
        }
    };
};


#endif /* test_hpp */
