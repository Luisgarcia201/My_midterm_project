#include <iostream>
#include <string>
#include <MyClass.h>


int main() {
    VehiclePurchaseSystem system;

    // Adding vehicles
    system.addVehicle("Honda Civic", 20000, Car); 
    system.addVehicle("Toyota Camry", 25000, Car);
    system.addVehicle("Honda CBR600R", 15000, Motorcycle); 
    system.addVehicle("Chevy Silverado", 35000, Truck);
    system.addVehicle("Ducati Monster", 16000, Motorcycle);

    int choice;
    do {
        std::cout << "\nVehicle Purchase System\n";
        std::cout << "1. Display Vehicles\n";
        std::cout << "2. Buy Vehicle\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice; 

        switch (choice) { 
            case 1:
                system.displayVehicles();
                break;
            case 2: {
                int vehicleIndex;
                std::cout << "Enter the number of the vehicle to purchase: ";
                std::cin >> vehicleIndex;
                system.purchaseVehicle(vehicleIndex - 1); // Adjusting for zero-based index
                break;
            }
            case 3:
                std::cout << "Thank you for using the system!" << endl;
                break;

            case 4:
                return 0;
            default:
                std::cout << "Invalid choice!" << endl;
            
        }
    } while (choice != 3); 

    return 0;
}
