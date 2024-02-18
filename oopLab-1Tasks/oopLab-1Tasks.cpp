#include <iostream>
#include <string>
using namespace std;
//class House;
//class Person {
//public:
//    string name;
//    int age;
//
//    
//    Person() : name(""), age(0) {}// Default constructor
//
//   
//    Person(string n, int a) : name(n), age(a) {} // Constructor with parameters
//
//    // Method to introduce the residents living in any house
//    void introduce() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//class House {
//public:
//    string address;
//    Person residents[5]; // An array to store residents in a house 
//    int numResidents; // Number of residents in the house
//
//   
//    House() : address(""), numResidents(0) {} // Default constructor
//   
//    House(string adr) : address(adr), numResidents(0) {} // Constructor with parameter
//
//    void addResident(const Person& person) { // Method to add a resident to the house
//        if (numResidents < 5) {
//            residents[numResidents] = person;
//            numResidents++;
//        }
//        else {
//            cout << "House is full. Cannot add more residents." << endl;
//        }
//    }
//
//    // Method to display details of the house and its residents
//    void displayDetails() {
//        cout << "House Address: " << address << endl;
//        cout << "Residents of this house are :" << endl;
//        for (int i = 0; i < numResidents; ++i) {
//            residents[i].introduce();
//        }
//    }
//};
//
//
//class Neighborhood {
//public:
//    House houses[10]; // Array to store houses in the neighborhood
//    int numHouses; // Number of houses in the neighborhood
//
//    
//    Neighborhood() : numHouses(0) {}// Constructor to initialize numHouses
//
//    
//    void addHouse(const House& house) {// Method to add a house to the neighborhood
//        if (numHouses < 10) {
//            houses[numHouses] = house;
//            numHouses++;
//        }
//        else {
//            cout << "Neighborhood is full. Cannot add more houses." << endl;
//        }
//    }
//
//    void displayDetails() {     // Method to display details of the neighborhood
//
//        cout << "Neighborhood Details:" << endl;
//        for (int i = 0; i < numHouses; ++i) {
//            houses[i].displayDetails();
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Neighborhood neighborhood;
//
//    // adding houses
//    House house1("Street 28 ,House 280/23 , NY city");
//    house1.addResident(Person("Tayyaba Rafique", 19));
//    house1.addResident(Person("Alaina Qadir", 10));
//    neighborhood.addHouse(house1);
//
//    House house2("Street 30,House 22/8 , LA");
//    house2.addResident(Person("Emaan Fatima", 9));
//    neighborhood.addHouse(house2);
//
//    neighborhood.displayDetails();
//
//    return 0;
//}
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;
    int mileage;
public:
    Vehicle(string mk, string mdl, int yr,int mile)
        : make(mk), model(mdl), year(yr),mileage(mile) {}

    // Getter methods used to return values
    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    int getMileage() const { return mileage; }

    // Setter methods use to set the modified values for private members
    void setMake(string mk) { make = mk; }
    void setModel(string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }

    void displayVehicleInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << "Mileage: " << mileage << " miles" << endl;
    }
    // Method to check if the car needs service based on mileage
    bool needsService() const {
        return mileage >= 10000;
    }
};

int main() {
    Vehicle myVehicle("Toyota", "Corolla", 2020,8000);

    // Display original vehicle information
    cout << "Original Vehicle Information:" << endl;
    myVehicle.displayVehicleInfo();

    // Modify the model and year
    myVehicle.setModel("hundai");
    myVehicle.setYear(2021);

    // Display modified vehicle information
    cout << "\nModified Vehicle Information:" << endl;
    cout << "Make: " << myVehicle.getMake() << ", Model: " << myVehicle.getModel() << ", Year: " << myVehicle.getYear() << endl;

    if (myVehicle.needsService()) {
        cout << "The car needs service." << endl;
    }
    else {
        cout << "The car does not need service." << endl;
    }

    return 0;
}
