#include "animal_rights_group.hpp"

AnimalRightsGroup::AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish)
    : n_monkeys(n_monkeys), n_tigers(n_tigers), n_fish(n_fish),
      n_monkeys_fed(0), n_tigers_scratched(0), n_fish_teeth_brushed(0)
{
}

// Implement this (Observer part)
void AnimalRightsGroup::update(AnimalEvent event)
{   

    /* 
    Vi skulle tage inspiration fra animals_ok. Her ser vi at der for hvert dyr findes
    2 variable. En der hedder n_animals_fed og en der hedder n_animals. Vi har altså et tal på hvor mange der er 
    blevet fodret og hvor mange vi har, så når vi fodrer en abe kan vi selvfølgelig bare lægge
    1 til n_monkeys_fed.
    
    */
    if (event == AnimalEvent::MonkeyFed)
    { 
        n_monkeys_fed += 1;
    }
    else if (event == AnimalEvent::TigerScratched)
    {
        n_tigers_scratched += 1;
    }
    else if (event == AnimalEvent::FishTeethCleaned)
    {
        n_fish_teeth_brushed += 1;
    }
}

bool AnimalRightsGroup::animals_ok()
{
    // do not modify
    return (n_monkeys == n_monkeys_fed && n_tigers == n_tigers_scratched && n_fish == n_fish_teeth_brushed);
}