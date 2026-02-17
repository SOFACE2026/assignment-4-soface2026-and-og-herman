#include "keeper.hpp"
#include "monkey.hpp"
#include "tiger.hpp"
#include "fish.hpp"


// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{   
    // Hver gang en dyret bliver besøgt af dyrepasseren skal aben fodres. 
    // vi bruger argumentet til at fodre den besøgte abe
    monkey.feed_banana();
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{   
    // samme som de andre 
    tiger.scratch_back();

}

// Implement this (visitor part)
void Keeper::visit(Fish &fish)
{
    // samme som de andre 
    fish.clean_teeth();
}