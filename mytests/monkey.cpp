#include "monkey.hpp"

// Implement this (visitor pattern)
void Monkey::accept(Visitor &visitor)
{
    // dyret accepterer den besøgende og kalder visit funktionen på visitoren med sig selv som argument
    visitor.visit(*this);
}

// Implement this (Observer part)
void Monkey::feed_banana()
{   
    // dyret bliver fodret eller lign og der sendes en notifikation (et event) til et subjekt og alle observatører 
    // bliver opdateret. 
    notify(AnimalEvent::MonkeyFed);
}