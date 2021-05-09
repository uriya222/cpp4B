#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <string>

namespace pandemic
{
    class Scientist : public Player
    {
    private:
        int n;

    public:
        Scientist(Board &b, City c, int num) : Player(b, c), n((num < 5) ? num : 5) {}
        virtual Player &discover_cure(Color c) override;
        virtual std::string role() const override;
    };
}