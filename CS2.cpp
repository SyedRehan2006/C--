#include <iostream>
using namespace std;
class player
{
public:
    string userName;
    int health;
    string team;
    string armor;
    string primaryWeapon;
    string secondaryWeapon;
    player(string userName, string team)
    {
        this->userName = userName;
        this->health = 100;
        this->team = team;
        if (team == "CT")
        {
            secondaryWeapon = "USP-5";
        }
        if (team == "T")
        {
            secondaryWeapon = "Glock";
        }

        displayPlayerInfo();
    }
    void buyWeapon()
    {
        // string M4A1;
        cout << "buyWeapon" << endl;
        cout << "Press 1 for M4A1" << endl;
        cout << "Press 2 for AUG" << endl;
        cout << "Press 3 for AWP" << endl;
        cout << "Press 4 for SCOUT" << endl;
        int weaponChoice;
        cin >> weaponChoice;
        if (weaponChoice == 1)
        {
            primaryWeapon = "M4A1";
        }
        if (weaponChoice == 2)
        {
            primaryWeapon = "AUG";
        }
        if (weaponChoice == 3)
        {
            primaryWeapon = "AWP";
        }
        if (weaponChoice == 4)
        {
            primaryWeapon = "SCOUT";
        }
        displayPlayerInfo();
    }
    void displayPlayerInfo()
    {
        cout << "Player Name: " << userName << endl;
        cout << "Team: " << team << endl;
        cout << "Health: " << health << endl;
        cout << "Armor: " << armor << endl;
        cout << "Primary Weapon: " << primaryWeapon << endl;
        cout << "Secondary Weapon: " << secondaryWeapon << endl;
    }
};
int main()
{
    player p1("rehan", "CT");
    player p2("wdawda", "CT");
    player p3("rebngfbfhan", "T");
    player p4("reh23123342an", "T");
    p1.buyWeapon();
    p2.buyWeapon();
    p3.buyWeapon();
    p4.buyWeapon();
}
