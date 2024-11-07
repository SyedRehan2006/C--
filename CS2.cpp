#include <iostream>
using namespace std;
class player
{
public:
    int health;
    int money;
    string userName;
    string team;
    string armor;
    string primaryWeapon;
    string secondaryWeapon;
    int kills = 0;
    int deaths = 0;
    int assists = 0;
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
        cout << "buyWeapon" << endl;
        cout << "Press 1 for M4A1" << endl;
        cout << "Press 2 for AUG" << endl;
        cout << "Press 3 for AWP" << endl;
        cout << "Press 4 for SCOUT" << endl;
        cout << "Press 5 for Kelvar Helmet" << endl;
        cout << "Press 6 for Kelvar Helmet and Vest" << endl;
        int weaponChoice, armorChoice;
        cin >> weaponChoice >> armorChoice;
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
        if (armorChoice == 5)
        {
            armor = "Kelvar Helmet";
        }
        // if (armorChoice == 0)
        // {
        //     armor = "Armor Not Purchased";
        // }
        if (armorChoice == 6)
        {
            armor = "Kelvar Vest and Helmet";
        }
        if (armorChoice == 0)
        {
            armor = "Armor Not Purchase";
        }

        displayPlayerInfo();
        // cout << "Press 0 to display Player Score" << endl;
        // int playerScore;
        // cin >> playerScore;
        // if (playerScore == 0)
        // {
        //     displayPlayerScore();
        // }
    }
    void displayPlayerInfo()
    {
        cout << endl;
        cout << "************START************" << endl;
        cout << "Player: " << userName << endl;
        cout << "Team: " << team << endl;
        cout << "Health: " << health << endl;
        cout << "Armor: " << armor << endl;
        cout << "Primary Weapon: " << primaryWeapon << endl;
        cout << "Secondary Weapon: " << secondaryWeapon << endl;
        cout << "Money: " << money << "$" << endl;
        cout << endl;
    }
    // void playerScore()
    // {
    //     int kills = 0;
    //     int deaths = 0;
    //     int assistss = 0;
    // }
    // void displayPlayerScore()
    // {
    //     cout << "Player Score" << endl;
    //     cout << "Player: " << userName << endl;
    //     cout << "Kills: " << kills << endl;
    //     cout << "Deaths: " << deaths << endl;
    //     cout << "Assists: " << assists << endl;
    //     cout << endl;
    // }
};
class gameMode
{
public:
    void gameModes()
    {
        cout << "Choose a game mode" << endl;
        cout << "Press 1 for Wingman" << endl;
        cout << "Press 2 for Competetive" << endl;
        int gameModeChoice;
        cin >> gameModeChoice;
        if (gameModeChoice == 1)
        {
            player p1("KhiladiMiyaBhai", "CT");
            p1.buyWeapon();
            player p2("Phattar pe Phattar", "CT");
            p2.buyWeapon();
            player p3("4quan", "T");
            p3.buyWeapon();
            player p4("rehanchichaa", "T");
            p4.buyWeapon();
        }
        if (gameModeChoice == 2)
        {
            player p1("KhiladiMiyaBhai", "CT");
            player p2("Phattar pe Phattar", "CT");
            player p3("Eldenring", "CT");
            player p4("Ghost", "CT");
            player p5("Rasheed", "CT");
            player p6("4quan", "T");
            player p7("Dark", "T");
            player p8("Nigga", "T");
            player p9("Loki", "T");
            player p10("rehanchichaa", "T");
            p1.buyWeapon();
            p2.buyWeapon();
            p3.buyWeapon();
            p4.buyWeapon();
            p5.buyWeapon();
            p6.buyWeapon();
            p7.buyWeapon();
            p8.buyWeapon();
            p9.buyWeapon();
            p10.buyWeapon();
        }
    }
};
int main()
{
    gameMode g1;
    g1.gameModes();
    // player p1("KhiladiMiyaBhai", "CT");
    // player p2("Phattar pe Phattar", "CT");
    // player p3("4quan", "T");
    // player p4("rehanchichaa", "T");
    // p1.buyWeapon();
    // p2.buyWeapon();
    // p3.buyWeapon();
    // p4.buyWeapon();
}
