#ifndef TOURIST_HPP
#define TOURIST_HPP

#include <vector>
#include <string>
#include "visitor.hpp"

class Tourist : public Visitor
{
public:
    std::vector<std::string> list_visited();
    virtual void visit(Monkey &monkey) override;
    virtual void visit(Tiger &monkey) override;
    virtual void visit(Fish &monkey) override;
    virtual ~Tourist(){};

private:
    std::vector<std::string> visited;
};

#endif // TOURIST_HPP