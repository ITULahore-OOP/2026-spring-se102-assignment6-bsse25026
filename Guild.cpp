#include "Guild.h"

// making a new guild
Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;  // nobody joined yet

}


void Guild::operator+=(Hero* newHero)
{
    // check if we have room first max  15
    if(memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount++;

    }
    else
    {
        // guild is full can't add more
        cout << "Guild is at full capacity!" << endl;
    }
}

// goes through all members and adding their power
int Guild::calculateTotalGuildPower() const
{
    int total = 0;

    // loop through all current members
    for(int i = 0; i < memberCount; i++)
    {
        // make sure pointer isn't null? should be fine since we control adding
        total = total + roster[i]->getPower();
    }

    return total;
}

// shows basic info about the guild
void Guild::displayGuildStats() const
{
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;

    // calculate total power
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

// this is so i can just do cout << myGuild
ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;

    // list out all the heroes
    for(int i = 0; i < g.memberCount; i++)
    {

        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }

    return os;
}

//  when guild is destroyed
Guild::~Guild()
{
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}