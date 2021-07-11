#include <iostream>

struct Player
{
    string name;
    int hp;
    Vector position;
};
int main()
{
    Player me;
    me.name="William";
    me.hp=100;
    
    return 0;
}