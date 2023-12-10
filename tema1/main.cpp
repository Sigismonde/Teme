#include "Vehicul.h"
#include "Vapor.h"
#include "Avion.h"

int main() {
    aeronave::Avion A = aeronave::Avion("Boeing747",1000);
    ambarcatiuni::Vapor B = std::move(ambarcatiuni::Vapor("Bismarck",2000));
    aeronave::Avion C("ATR72",100);
    A = C;
    C = std::move(A);
    B.sunet();
    C.sunet();
    return 0;
}