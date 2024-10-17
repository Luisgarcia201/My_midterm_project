#include <iostream>
#include <string>
using namespace std;

// Enumerations to represent vehicle types (values)
enum VehicleType {
    Car,
    Motorcycle,
    Truck
};

// Structures to hold vehicle details
struct Vehicle {
    string model;
    double price;
    VehicleType type;
};

// Class for the vehicle purchase system
class VehiclePurchaseSystem {
private:
    Vehicle inventory[5]; // Array to store vehicles
    int numVehicles; // Variable to track vehicles in inventory

// contructor, there are currently no vehicles created in the inventory
public:
    VehiclePurchaseSystem() {
        numVehicles = 0;
    }

    // Function to add a vehicle to inventory
    void addVehicle(string model, double price, VehicleType type) {

        if (numVehicles < 5) {
            inventory[numVehicles] = {model, price, type};
            numVehicles++;
        } else {
            std::cout << "Inventory is full!" << endl;
        }
    }

    // Function to display available vehicles
    void displayVehicles() {
        std::cout << "Available Vehicles:" << endl;
        for (int i = 0; i < numVehicles; i++) { 
            std::cout << i + 1 << ". " << inventory[i].model << " - $" << inventory[i].price;
            switch (inventory[i].type) {
                case Car: std::cout << " (Car)"; break;
                case Motorcycle: std::cout << " (Motorcycle)"; break;
                case Truck: std::cout << " (Truck)"; break; 
            }
            std::cout << endl;
        }
    }

    // Function to purchase a vehicle
    void purchaseVehicle(int index) {
        if (index >= 0 && index < numVehicles) {
            std::cout << "You purchased: " << inventory[index].model << " for $" << inventory[index].price << endl;
            // Removing vehicle from inventory
            for (int i = index; i < numVehicles - 1; i++) {
                inventory[i] = inventory[i + 1]; // overwrites the purchased vehicle.
            }
            numVehicles--;
        } else {
            std::cout << "Invalid choice!" << endl;
        }
    }
};
