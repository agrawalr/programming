//
//  main.cpp
//  TourOfCpp
//
//  Created by ragrawal on 20/02/17.
//  Copyright © 2017 ragrawalAgrawal. All rights reserved.
//

#include "a.h"

struct vector {
    int size;
    double* elem;
};

void function(base* a) {}
void function1(base& a) {}

int main() {
    
    derived* A = new derived();
    A->a();
    A->b();
    
    base* B = new base();
    B->a();
    B->b();
    
    base* C = new derived();
    C->a();
    C->b();
    
    function(A);
    function(B);
    function(C);
    
    function1(*A);
    function1(*B);
    function1(*C);
    
    //base& aaam = dynamic_cast<base&>(*A);
    std::cout << "OK\n";
    
}
