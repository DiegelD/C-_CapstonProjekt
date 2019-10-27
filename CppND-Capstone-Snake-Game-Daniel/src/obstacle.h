#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "SDL.h"
#include <vector>

class Obstacle{

 public:
  Obstacle(int grid_width, int grid_height){
    this->grid_width=grid_width;
    this->grid_height=grid_height;
    creat_SDLPoint();
}
  bool ObstacleCell(int x, int y);
  std::vector<SDL_Point> Get_Object();

 private:
 int grid_width;
 int grid_height; 
 std::vector<SDL_Point> object;

 void creat_SDLPoint();
 

};

#endif