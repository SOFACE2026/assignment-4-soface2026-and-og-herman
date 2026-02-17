#include "monkey.cpp"
#include "fish.cpp"
#include "tiger.cpp"
#include "visitor.hpp"
#include "tourist.cpp"
#include <assert.h>


/*
Endnu en gang virkede testene ikke med catch, så jeg har skrevet dem om til at køre med en main-funktion
og ved brug af assert.
*/

class VisitorSpy : public Visitor
{
public:
    VisitorSpy() : monkeys_visited(0), tigers_visited(0), fish_visited(0)
    {
    }

    void visit(Monkey &monkey) override
    {
        monkeys_visited += 1;
    }
    void visit(Tiger &tiger) override
    {
        tigers_visited += 1;
    }
    void visit(Fish &fish) override
    {
        fish_visited += 1;
    }

    int monkeys_visited;
    int tigers_visited;
    int fish_visited;
};

int main(){
    Monkey m;
    Tiger t;
    Fish f;

    VisitorSpy spy;
    Tourist tourist;

    std::vector<Animal *>
        animals;
    animals.push_back(&m);
    animals.push_back(&t);
    animals.push_back(&f);

    for (auto const animal : animals)
    {
        animal->accept(spy);
        animal->accept(tourist);
    }

    assert(spy.monkeys_visited == 1);
    assert(spy.tigers_visited == 1);
    assert(spy.fish_visited == 1);

    std::vector<std::string> expected{"monkey", "tiger", "fish"};
    auto visited = tourist.list_visited();

    assert(visited == expected);
    printf("Succes");
}
