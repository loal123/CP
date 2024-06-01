#include <iostream>
#include <map>

int main()
{
    // Map of decimal codes to the number of legs
    std::map<int, int> animalLegs = {
        {128000, 4}, // Rat
        {128057, 4}, // Hamster Face
        {128048, 4}, // Rabbit Face
        {128007, 4}, // Rabbit
        {128063, 4}, // Chipmunk
        {129428, 4}, // Hedgehog
        {129415, 2}, // Bat
        {128059, 4}, // Bear Face
        {128040, 4}, // Koala
        {128060, 4}, // Panda Face
        {129432, 4}, // Kangaroo
        {129441, 4}, // Badger
        {128062, 4}, // Paw Prints
        {128053, 4}, // Monkey Face
        {128018, 4}, // Monkey
        {129421, 4}, // Gorilla
        {128054, 4}, // Dog Face
        {128021, 4}, // Dog
        {128041, 4}, // Poodle
        {128058, 4}, // Wolf Face
        {129418, 4}, // Fox Face
        {129437, 4}, // Raccoon
        {128049, 4}, // Cat Face
        {128008, 4}, // Cat
        {129409, 4}, // Lion Face
        {128047, 4}, // Tiger Face
        {128005, 4}, // Tiger
        {128006, 4}, // Leopard
        {128052, 4}, // Horse Face
        {128014, 4}, // Horse
        {129412, 4}, // Unicorn Face
        {129427, 4}, // Zebra
        {129420, 4}, // Deer
        {128046, 4}, // Cow Face
        {128002, 4}, // Ox
        {128003, 4}, // Water Buffalo
        {128004, 4}, // Cow
        {128055, 4}, // Pig Face
        {128022, 4}, // Pig
        {128023, 4}, // Boar
        {128061, 4}, // Pig Nose
        {128015, 4}, // Ram
        {128017, 4}, // Ewe
        {128016, 4}, // Goat
        {128042, 4}, // Camel
        {128043, 4}, // Two-Hump Camel
        {129433, 4}, // Lama
        {129426, 4}, // Giraffe
        {128024, 4}, // Elephant
        {129423, 4}, // Rhinoceros
        {129435, 4}, // Hippopotamus
        {128045, 4}, // Mouse Face
        {128001, 4}  // Mouse
    };
    int t;
    std::cin >> t;
    while (t--)
    {

        int decimalCode;

        std::cin >> decimalCode;

        auto it = animalLegs.find(decimalCode);
        if (it != animalLegs.end())
        {
            std::cout << it->second << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}