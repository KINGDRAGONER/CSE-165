#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "display.h

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
//https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus#:~:text=The%20cin.,characters%20from%20the%20input%20buffer.
    vector<Animal *> animals; //vector of Animal object pointers

    for (int i = 0; i < N; i++)
    {
        char animalType;
        string name;
        int age;

        cin >> animalType >> name >> age;
        cin.ignore();

        if (animalType == 'A')
        {
            Animal *animal = new Animal();
            animal->setName(name);
            animal->setAge(age);
            animals.push_back(animal);
        }
        else if (animalType == 'D')
        {
            Dog *dog = new Dog(name, age);
            animals.push_back(dog);
        }
    }
    display(animals);
    // Clean up and delete the dynamically allocated objects
    for (int i = 0; i < animals.size(); i++)
    {
        delete animals[i];
    }

    return 0;
}
