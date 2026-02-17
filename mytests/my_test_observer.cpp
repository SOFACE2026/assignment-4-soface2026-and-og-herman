#include "monkey.cpp"
#include "fish.cpp"
#include "tiger.cpp"
#include "visitor.hpp"
#include "tourist.cpp"
#include <assert.h>
#include "keeper.cpp"
#include "animal_rights_group.cpp"

/*
Endnu en gang virkede testene ikke med catch, så jeg har skrevet dem om til at køre med en main-funktion
og ved brug af assert.
*/
int main(){
    Keeper keeper;

    Monkey m;
    Tiger t;
    Fish f;
    std::vector<Animal *> animals{&m, &t, &f};

    AnimalRightsGroup peta(1, 1, 1);
    Observer *obs = &peta;

    for (auto animal : animals)
    {
        animal->attach(&peta);
    }

    assert(!peta.animals_ok());

    for (auto animal : animals)
    {
        animal->accept(keeper);
    }

    assert(peta.animals_ok());
    printf("Succes");
}