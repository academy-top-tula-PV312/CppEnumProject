#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

enum WayType
{
    Left,
    Right,
    Up,
    Down,
};

enum SideType
{
    a,
    b,
    c,
    d
};

enum class Colors
{
    Red,
    Blue,
    Green,
    Yellow
};

void Go(WayType wayGo)
{
    char* str = new char[10];
    switch (wayGo)
    {
    case Left: strcpy(str, "west");
        break;
    case Right:strcpy(str, "ost");
        break;
    case Up: strcpy(str, "north");
        break;
    case Down: strcpy(str, "south");
        break;
    default:
        break;
    }

    std::cout << "You go to " << str << "\n";
}

int main()
{
    WayType way;
    way = (WayType)2;
    way = Down;
    way = WayType::Left;

    Go(way);

    Colors color{ Colors::Red };

}
