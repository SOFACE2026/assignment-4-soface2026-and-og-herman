#include "tourist.hpp"

// Implement this (visitor pattern)
void Tourist::visit(Monkey &monkey)
{
    // Vi har for alle dyrene at hver gang en turist besøger et dyr (argumentet) så lægger vi 
    // en streng ind i turistens visited vector med det pågældende navn
    this->visited.push_back("monkey");
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
    this->visited.push_back("tiger");

}

// Implement this (visitor pattern)
void Tourist::visit(Fish &monkey)
{
    this->visited.push_back("fish");

}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}