#pragma once
#include "common/Player.h"
#include "common/PlayerRegistration.h"
#include "UserCommon/GameBoard.h"

namespace Algorithm_318885712_208230862
{

    class Player_318885712_208230862 : public Player
    {
    private:
        int index;
        size_t x, y, max_steps, num_shells;

    public:
        Player_318885712_208230862(int player_index, size_t x, size_t y, size_t max_steps, size_t num_shells);
        ~Player_318885712_208230862() = default;
        void updateTankWithBattleInfo(TankAlgorithm &tank, SatelliteView &satellite_view) override;
    };
}
