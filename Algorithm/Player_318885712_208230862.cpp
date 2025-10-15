#include "Player_318885712_208230862.h"
#include "TankAlgorithm_318885712_208230862.h"
#include "UserCommon/GameBoard.h"
#include "common/TankAlgorithm.h"
#include "UserCommon/Position.h"
#include "common/PlayerRegistration.h"
#include <set>
#include <vector>

namespace Algorithm_318885712_208230862
{
    using namespace UserCommon_318885712_208230862;
    using namespace std;

    Player_318885712_208230862::Player_318885712_208230862(int player_index, size_t x, size_t y, size_t max_steps, size_t num_shells)
        : index(player_index), x(x), y(y), max_steps(max_steps), num_shells(num_shells)
    {
    }

    void Player_318885712_208230862::updateTankWithBattleInfo(TankAlgorithm &tank, SatelliteView &satellite_view)
    {
        set<Position> walls;
        set<Position> mines;
        vector<tuple<int, int, Position>> tanks;
        vector<Position> shells;
        for (size_t i = 0; i < this->x; i++)
        {
            for (size_t j = 0; j < this->y; j++)
            {
                char obj = satellite_view.getObjectAt(i, j);

                if (obj == '#')
                {
                    walls.insert(Position(i, j));
                }
                else if (obj == '*')
                {
                    shells.emplace_back(Position(i, j));
                }
                else if (obj == '@')
                {
                    mines.insert(Position(i, j));
                }
                else if (obj == '1' || obj == '2')
                {
                    tanks.emplace_back(obj - '0', -1, Position(i, j));
                }
                else if (obj == '%')
                {
                    tanks.emplace_back(index, -2, Position(i, j));
                }
            }
        }
        GameBoard board(this->x, this->y, size_t(0), walls, mines, move(tanks));
        tank.updateBattleInfo(board);
    }
}
using Algorithm_318885712_208230862::Player_318885712_208230862;
REGISTER_PLAYER(Player_318885712_208230862)
