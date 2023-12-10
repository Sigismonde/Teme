#pragma once

#include <string.h>
#include <iostream>
#include "Vehicul.h"

namespace ambarcatiuni {
    class Vapor : public Vehicul{
    private:
        char* model;
        int capacitate;
        
    public:
    
        Vapor() ;
        Vapor(const char* model, int capacitate);
        Vapor(const Vapor& other) ;
        Vapor(Vapor&& other);
        ~Vapor();
        Vapor& operator=(const Vapor& copyVapor);
        Vapor& operator=(Vapor&& moveVapor);
        void sunet() override;
    };
}