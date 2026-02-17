#include "subject.hpp"

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    // vi får en ny subscriber på whatever subjekt vi har med at gøre, fx dem der følger med i om dyrene får mad
    this->subscribers.push_back(subscriber);
}

// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{   
    // vi fjerner en subscriber på whatever subjekt vi har med at gøre, fx dem der følger med i om dyrene får mad
    // dette gøres ved at loope igennem vektoren og finde subscriberen der er givet som argument. (sættes til null)
    // Bemærk at dette vil give en masse "huller" i listen, som vil gøres listen unødvendigt lang, men da det ikke er målet med opgaven er det ikke fikset:)
    int i= 0;
    for (Observer * o : this->subscribers){
        if (o == subscriber){
            this->subscribers[i] = NULL;
        }
        i++;
    }
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{   
    /*
    Vi har en liste med observatører. Så når vi får et event, altså et en af dyrene spiser eller lign,
    så går vi igennem alle observatørerne som er subscribed til dette subjekt og giver dem en opdatering om det er sket
    */
    for (Observer * s : this->subscribers){
        s->update(event);
    }
}