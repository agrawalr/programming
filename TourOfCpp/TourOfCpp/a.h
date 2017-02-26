//
//  a.h
//  TourOfCpp
//
//  Created by ragrawal on 22/02/17.
//  Copyright © 2017 ragrawalAgrawal. All rights reserved.
//

#ifndef a_h
#define a_h

#include <iostream>

class base {
public:
    void a() { std::cout << "base\n";}
    virtual void b() { std::cout << "base\n";}
};

class derived: public base {
public:
    void a() { std::cout << "derived\n";}
    void b() { std::cout << "derived\n";}
};

#endif /* a_h */
