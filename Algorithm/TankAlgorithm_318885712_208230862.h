#pragma once
#include "common/TankAlgorithm.h"
#include "common/TankAlgorithmRegistration.h"
#include "UserCommon/Position.h"
#include "UserCommon/GameBoard.h"
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <utility>
#include <cstddef>

namespace Algorithm_318885712_208230862
{

    class TankAlgorithm_318885712_208230862 : public TankAlgorithm
    {
    private:
        std::queue<ActionRequest> path;
        std::vector<std::tuple<int, int, UserCommon_318885712_208230862::Position>> tanks;
        std::string direction;
        int playerIndex, tankIndex;
        UserCommon_318885712_208230862::Position pos;
        int turn_num;
        UserCommon_318885712_208230862::GameBoard board;

        std::set<UserCommon_318885712_208230862::Position> computeDangerZones();
        bool isShootPossible();
        bool isFree(const UserCommon_318885712_208230862::Position &pos);
        int manhattan(const UserCommon_318885712_208230862::Position &a, const UserCommon_318885712_208230862::Position &b);
        UserCommon_318885712_208230862::Position findClosestEnemyTank();
        std::queue<ActionRequest> getActionsToEnemyTank(UserCommon_318885712_208230862::Position pos_other);

    public:
        TankAlgorithm_318885712_208230862(int player_index, int tank_index);
        ~TankAlgorithm_318885712_208230862();
        ActionRequest getAction() override;
        void updateBattleInfo(BattleInfo &info) override;
    };

}