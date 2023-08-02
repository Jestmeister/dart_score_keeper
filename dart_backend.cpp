#include <vector>
#include <string>

using namespace std;

// https://www.cplusplus.in/vector-of-class-objects-in-c/ 
// https://www.youtube.com/watch?v=iPlW5tSUOUM 

/*
* ideas:
* handicap multiplier
* click and get points
* 
*/
class Player{
    private:
        int score;
        int wonSets;
        int wonLegs;
        string name;
        // add more stats
    public:
    Player(){
        this->score = 301;
        this->name = "MrGayman12";
        this->wonLegs = 0;
        this->wonSets = 0;
    }
    Player(int score, string name){
        this->score = score;
        this->name = name;
    }
};

class Game{
    private:
        vector<Player> players;
        int nSets;
        int nLegs;
        int nScores;
        int nPlayers;
    public:
    Game(){
        nSets = 1;
        nLegs = 3;
        nScores = 301; // or 501
        nPlayers = 2;
        for (int i=0; i<nPlayers; i++){
            Player player;
            players.push_back(player);
        }
    }
    //add different game types 
    void play(){
        // while player score > 0
    }
};

