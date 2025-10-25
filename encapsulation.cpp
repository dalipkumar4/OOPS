#include <iostream>
using namespace std;


class GTA5Player{
    private: 
        // Private DATA MEMBERS - hidden from the outside world
        string playerName;
        int health;
        int money;
    
    public: 

        // Setter functions
        void setPlayerData(string name,int h,int m){
            playerName = name;

            // Validation to ensure health doesn't exceed 100 
            if(h >= 0 && h<=100)
                health = h;
            else
                health = 100;

            // Validation to ensure money is not negative
            if(m >= 0)
                money = m;
            else   
                money = 0;
        }

        // Getter Functions
        void displayStatus(){
            cout << "\n==== GTA 5 PLAYER STATS ====\n";
            cout << "Player Name : " << playerName << endl;
            cout << "Health      : " << health << endl;
            cout << "Money       : $" << money << endl;
        }

        // Method to modify data internally

        void takeDamage(int damage){
            if(damage < 0)
                cout << "Invalid damage value!" << endl;
            else{
                health -= damage;
                if(health < 0)
                    health = 0;
                cout << playerName << " took " << damage << " damage! Current health: " << health << endl;
            }
        }

        void earnMoney(int amount){
            if(amount > 0){
                money += amount;
                cout << playerName << " earned $" << amount << "! Total Moneey: $"<< money << endl;

            }
            else{
                cout << "Invalid money amount!" << endl;
            }
        }
};


int main(){
    // Creating a player object
    GTA5Player player1;

    player1.setPlayerData("Micheal",500,50000);

    player1.displayStatus();
    
    
    player1.takeDamage(25);
    player1.earnMoney(45000);
    
    player1.displayStatus();
}
