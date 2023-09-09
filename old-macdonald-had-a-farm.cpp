#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Template class for the poem
template <typename T>
class OldMacDonald {
public:
    OldMacDonald(const string& farmName, const string& animalName, const T& sound)
        : farmName(farmName), animalName(animalName), sound(sound) {}

    void sing() const {
        cout << farmName << " had a farm" << endl;
        cout << "Ee i ee i o" << endl;
        cout << "And on his farm he had some " << animalName << endl;
        cout << "E-I-E-I-O!" << endl;
        cout << "With a " << sound << "-" << sound << " here" << endl;
        cout << "And a " << sound << "-" << sound << " there" << endl;
        cout << "Here a " << sound << " there a " << sound << endl;
        cout << "Everywhere " << sound << "-" << sound << endl << endl;
    }

private:
    string farmName;
    string animalName;
    T sound;
};

// Base class for farm animals
class FarmAnimal {
public:
    FarmAnimal(const string& name, const string& sound)
        : name(name), sound(sound) {}

    virtual void sing() const {
        OldMacDonald<string> poem("Old MacDonald", name, sound);
        poem.sing();
    }

protected:
    string name;
    string sound;
};

// Derived classes for specific animals
class Cow : public FarmAnimal {
public:
    Cow() : FarmAnimal("Cows", "moo") {}
};

class Chicken : public FarmAnimal {
public:
    Chicken() : FarmAnimal("Chicks", "cluck") {}
};

class Pig : public FarmAnimal {
public:
    Pig() : FarmAnimal("Pigs", "oink") {}
};

class Duck : public FarmAnimal {
public:
    Duck() : FarmAnimal("Ducks", "quack") {}
};

int main() {
    vector<FarmAnimal*> animals;

    // Create instances of specific animal classes
    Cow cow;
    Chicken chicken;
    Pig pig;
    Duck duck;

    // Store the animals in a vector
    animals.push_back(&cow);
    animals.push_back(&chicken);
    animals.push_back(&pig);
    animals.push_back(&duck);

    // Sing the Old MacDonald poem for each animal
    for (const FarmAnimal* animal : animals) {
        animal->sing();
    }

    return 0;
}
