#include "Zombie.hpp"

int main(void)
{
    Zombie zombie("Wally");
    zombie.annouce();

    Zombie *HeapZombie = newZombie("Heapie");
    HeapZombie->annouce();

    randomChump("Stackie");

    delete  HeapZombie;
}

// Stack: Objects are destroyed when they go out of scope (when the function returns).
// Heap: Objects are destroyed manually when you call delete on the pointer.