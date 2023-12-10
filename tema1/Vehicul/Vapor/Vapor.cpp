#include <cstring>
#include "Vapor.h"

using namespace ambarcatiuni;

Vapor::Vapor(const char* model,int capacitate) 
: capacitate(capacitate) {
    this->model = new char[strlen(model)];
    strcpy(this->model,model);
    std::cout << "Eu sunt constructorul de vapoare!\n";
}

Vapor::Vapor(const Vapor& copyVapor) 
: capacitate(copyVapor.capacitate)  {
    model = new char[strlen(copyVapor.model)];
    strcpy(model,copyVapor.model);
    std::cout << "Eu sunt copy constructorul de vapoare!\n";
}

Vapor::Vapor(Vapor&& moveVapor) 
: capacitate(moveVapor.capacitate) {
    model = moveVapor.model;
    moveVapor.model = NULL;
    std::cout << "Eu sunt move constructorul de vapoare!\n";
}

Vapor& Vapor::operator=(const Vapor& copyVapor) {
    delete [] model;
    model = new char[strlen(model)];
    strcpy(this->model,model);
    capacitate = copyVapor.capacitate;
    std::cout << "Eu sunt copy assignment operatorul de vapoare!\n";
    return *this;
}

Vapor& Vapor::operator=(Vapor&& moveVapor) {
    delete [] model;
    model = moveVapor.model;
    moveVapor.model = NULL;
    std::cout << "Eu sunt move assignment operatorul de vapoare!\n";
    return *this;
}

Vapor::~Vapor() {
    delete [] model;
    std::cout << "Eu sunt destructorul de vapoare!\n";
}

void Vapor::sunet() {
    std::cout << "VUUUUMMM VUUUUMM\n";
}