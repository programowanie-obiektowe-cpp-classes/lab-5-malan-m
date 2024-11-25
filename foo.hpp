#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
        std::vector< char > result;
        result.reserve(people.size());

        for(auto it=people.rbegin(); it !=people.rend(); ++it)
        {
            it->birthday();
            result.push_back(it->isMonster() ? 'n': 'y');
        }
    return result;
}
