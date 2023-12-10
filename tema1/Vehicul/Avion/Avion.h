#pragma once

#include <string.h>
#include <iostream>
#include "Vehicul.h"

namespace aeronave {
    class Avion : public Vehicul {
    private:
        char* model;
        int capacitate;
        
    public:
        Avion() ;
        Avion(const char* model, int capacitate);
        Avion(const Avion& other) ;
        Avion(Avion&& other);
        ~Avion();
        Avion& operator=(const Avion& copyAvion);
        Avion& operator=(Avion&& moveAvion);
        void sunet() override;
        void afiseazaDetalii() const;
    };
}