#include <cstring>
#include "Avion.h"

using namespace aeronave;

Avion::Avion(const char* model,int capacitate) 
: capacitate(capacitate) {
    this->model = new char[strlen(model)];
    strcpy(this->model,model);
    std::cout << "Eu sunt constructorul de avioane!\n";
}

Avion::Avion(const Avion& copyAvion) 
: capacitate(copyAvion.capacitate)  {
    model = new char[strlen(copyAvion.model)];
    strcpy(model,copyAvion.model);
    std::cout << "Eu sunt copy constructorul de avioane!\n";
}

Avion::Avion(Avion&& moveAvion) 
: capacitate(moveAvion.capacitate) {
    model = moveAvion.model;
    moveAvion.model = NULL;
    std::cout << "Eu sunt move constructorul de avioane!\n";
}

Avion& Avion::operator=(const Avion& copyAvion) {
    delete [] model;
    model = new char[strlen(model)];
    strcpy(this->model,model);
    capacitate = copyAvion.capacitate;
    std::cout << "Eu sunt copy assignment operatorul de avioane!\n";
    return *this;
}

Avion& Avion::operator=(Avion&& moveAvion) {
    delete [] model;
    model = moveAvion.model;
    moveAvion.model = NULL;
    std::cout << "Eu sunt move assignment operatorul de avioane!\n";
    return *this;
}

Avion::~Avion() {
    delete [] model;
    std::cout << "Eu sunt destructorul de avioane!\n";
}

void Avion::afiseazaDetalii() const {
    std::cout << "Model: " << model << ", Capacitate: " << capacitate << std::endl;
}

void Avion::sunet() {
    std::cout << "jet jet\n";
}