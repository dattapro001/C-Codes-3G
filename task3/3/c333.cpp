#include<iostream>
#include <list>
#include <algorithm>
using namespace std;
struct Player
{
    int id;
    std::string name;
    Player(int playerId, std::string playerName) :
            id(playerId), name(playerName)
    {
    }
    bool operator <(const Player &  playerID) const
    {
        return id < playerID.id;
    }
};
struct compareid
{
    bool operator ()(const Player & player1, const Player & player2)
    {
        if(player1.name == player2.name)
            return player1 < player2;
        return player1.name < player2.name;
    }
};
int main()
{
    std::list<Player> playerlist = { Player(10, "PELE"),
                                     Player(7, "MESSI"),
                                     Player(53, "NAYMER"),
                                     Player(42, "RONALDO"),
                                     Player(11, "KAKA"),
                                     Player(23, "XEVI"),
                                     Player(14, "ANDRES INIESTA"),
                                     Player(26, "WILLIAN"),
                                     Player(31, "MARCO REUS"),
                                     Player(9, "OSCAR"),
                                        };
    std::cout<<"Name OF the Players"<<std::endl;
    for(Player & player : playerlist)
        std::cout<<player.id<< " :: "<<player.name<<std::endl;
    playerlist.sort();
    std::cout<<"Name OF the sorting Players"<<std::endl;
    for(Player & player : playerlist)
        std::cout<<player.id<< " :: "<<player.name<<std::endl;

    return 0;
}
