#include "obstacle.h"

void Obstacle::creat_SDLPoint()
{
    int x;
    int y;
    SDL_Point point;

    for (int i = 0; i < grid_width / 3; i++)
    {
        x = i;
        y = grid_height / 3;

        point.x = x+grid_width/3;
        point.y = y;

        object.push_back(point);
    }

    for (int i = 0; i < grid_width / 3; i++)
    {
        x = i;
        y = grid_height / 3;

        point.x = x+grid_width/3;
        point.y = y*2;

        object.push_back(point);
    }


}

std::vector<SDL_Point> Obstacle::Get_Object()
{
    return object;
}

// Inefficient method to check if cell is occupied by object.
bool Obstacle::ObstacleCell(int x, int y) {

  for (auto const &item : object) {
    if (x == item.x && y == item.y) {
      return true;
    }
  }
  return false;
}