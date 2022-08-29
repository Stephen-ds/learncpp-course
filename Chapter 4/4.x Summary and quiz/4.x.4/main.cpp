//Extra credit : This one is a little more challenging.

//Write a short program to simulate a ball being dropped off of a tower.
//To start, the user should be asked for the height of the tower in meters.
//Assume normal gravity(9.8 m / s2), and that the ball has no initial
//velocity(the ball is not moving to start).Have the program output the height
//of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
//The ball should not go underneath the ground(height 0).

//Use a function to calculate the height of the ball after x seconds.
//The function can calculate how far the ball has fallen after x seconds using
//the following formula : distance fallen = gravity_constant * x_seconds2 / 2

//Note: Depending on the height of the tower, the ball may not reach the ground
//in 5 seconds -- that’s okay.
//We’ll improve this program once we’ve covered loops.

//Note: The^ symbol isn’t an exponent in C++.Implement the formula using
//multiplication instead of exponentiation.

//Note: Remember to use double literals for doubles, eg. 2.0 rather than 2.

#include <iostream>

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in metres: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

//distance from starting point - not height
double calculateDistance(int seconds)
{
    constexpr double gravity{ 9.8 };

    return gravity * seconds * seconds / 2.0;
}

void printHeight(int seconds, double towerHeight)
{
    const double distance{ calculateDistance(seconds) };
    if (distance <= towerHeight)
        std::cout << "At " << seconds << " seconds, the ball is at height: "
        << towerHeight - distance << '\n';
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.";
}

int main()
{
    const double towerHeight{ getTowerHeight() };

    printHeight(0, towerHeight);
    printHeight(1, towerHeight);
    printHeight(2, towerHeight);
    printHeight(3, towerHeight);
    printHeight(4, towerHeight);
    printHeight(5, towerHeight);

    return 0;
}