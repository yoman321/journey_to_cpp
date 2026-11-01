#include <iostream>

constexpr double GRAVITY {9.8};

double getFallenDistance(int time, int initialHeight)
{
    double distanceFallen = GRAVITY * time * time / 2;
    double finalHeight = initialHeight-distanceFallen;

    if (finalHeight < 0)
        return 0;
    return finalHeight;
}

void printHeight(double height, int time)
{
    if (height <= 0)
        std::cout << "At " << time << " seconds, the ball is on the ground." << std::endl;
    else
        std::cout << "At " << time << " seconds, the ball is at height: " << height << " meters\n";
}

int main()
{
    int initialHeight{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> initialHeight;
    printHeight(getFallenDistance(0, initialHeight), 0);
    printHeight(getFallenDistance(1, initialHeight), 1);
    printHeight(getFallenDistance(2, initialHeight), 2);
    printHeight(getFallenDistance(3, initialHeight), 3);
    printHeight(getFallenDistance(4, initialHeight), 4);
    printHeight(getFallenDistance(5, initialHeight), 5);
}
