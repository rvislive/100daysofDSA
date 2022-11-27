#include <iostream>
#include<cstdlib>
using namespace std;

const string red("\033[0;31m");
const string yellow("\033[1;33m");
const string reset("\033[0m");

// to check is game is over or not?
bool isGameOver;

// defining playgroud
const int width = 40;
const int height = 20;

// let define the position of snake and fruit in the (60, 60) coordinaties system
int x, y, fruitX, fruitY, score;

// direction of the snake
enum direction {
  STOP = 0,
  LEFT,
  RIGHT,
  UP,
  DOWN
} dir;

// lets set up the starting of the game
void setup() {
  isGameOver = false;
  dir = STOP;
  x = width / 2;
  y = height / 2;
  fruitX = rand() % width;
  fruitY = rand() % height;
  score = 0;
}

// draw the boundary and snake
void draw () {
  system("cls"); 

  // upper boundary
  for(int i = 0; i <= width + 1; i++) {
    cout<<"+";
  }
  cout<<endl;

  // left and right side boundary
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {

      // draw the left side of the boundary
      if(j == 0) cout<<"+";

      // draw the random fruit and snake head 
      if((i == y) && (j == x)) {
        cout<<red<<"**"<<reset;
      } else if ((i == fruitY) && (j == fruitX)) {
         cout<<yellow<<"*"<<reset;
      } else {
        cout<<" ";
      }

      // draw the right side of the boundary
      if(j == width - 1) cout<<"+";

    }
    cout<<endl;
  }

  // Lower boundary
  for(int i = 0; i <= width + 1; i++) {
    cout<<"+";
  }
  cout<<endl;
}

int main() {
  setup();
  draw();
  while(!isGameOver) {
  }
  return 0;
}
