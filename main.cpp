#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    Guild myGuild("souls"); // creating a guild object

    int choice;

    do
    {
        cout << " add Hero\n";
        cout << " show Guild\n";
        cout << " show Guild Stats\n";
        cout << " exit\n";
        cout << " enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            string name;
            int health, power;

            cout << "enter hero name: ";
            cin >> name;

            cout << "enter health: ";
            cin >> health;

            cout << "enter power: ";
            cin >> power;

            Hero* h = new Hero(name, health, power);

            myGuild += h;

            cout << "hero added to guild.\n";
        }

        else if(choice == 2)
        {
            cout << endl;
            cout << myGuild;
        }

        else if(choice == 3)
        {
            cout << endl;
            myGuild.displayGuildStats();
        }

    } while(choice != 4);

    cout << " exit.\n";

    return 0;
}