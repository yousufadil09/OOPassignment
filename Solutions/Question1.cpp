#include <iostream>

using namespace std;

struct Car
{
    private:
    int petrolLevel; // indicates the petrol level of car and range between 0 - 45 liters

    public:
    void setPetrolLevel (int petrolLevelVal)
    {
        petrolLevel = petrolLevelVal;

        if (petrolLevel < 0 && petrolLevel > 45) // Check for the condition that
                                                // number of liters is not greater than 45
            {
                cout << "\nInvalid number of liters";
                getPetrolLevel();
            }
        else 
            {
                cout << "\nValid numer of liters";
            }
        // setter for petrol level, cannot set value greater than 45.
    }

    int getPetrolLevel ()
    {
        // getter for petrol level
        cout << "\nEnter Petrol Level: ";
        cin >> petrolLevel;

        return petrolLevel;
    }

    Car()
    {
        petrolLevel = 0; //Default Constructor
        cout << "\nDefault petrol level value is " << petrolLevel;
    }
    
    Car (int petrolLevelVal)
    {
        petrolLevel = petrolLevelVal;// a Parameterized Constructor
    }

    // bool MoveCar (int distancdeKM)
    // {
    //     // Function that calculates the movement of car having enough fuel and return true or false
    // }

    // void Refill()
    // {
    //     //refills the car tank to a maximum of petrolLevel 7.
    // }

    // bool isEmpty ()
    // {
    //     // function that tells whether the  petrol tank is empty or not
    // }


};

int main()
{       
    Car levelOne;
    int petrolLe = 0;
    petrolLe = levelOne.getPetrolLevel();
    cout << "\nPetrol Level input by user is "<< petrolLe;
    levelOne.setPetrolLevel(petrolLe);
    
    return 0;
}
