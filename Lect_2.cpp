//How to  draw a pentagon
#include simplecpp
main_program
{
  turtleSim();
  forward(100); 
  left(90);
  forward(100); 
  left(90);
  forward(100); 
  left(90);
  forward(100);
  wait(5);
}

#include simplecpp
main_program
{
  turtleSim();
  forward(100); 
  left(72);
  forward(100); 
  left(72);
  forward(100); 
  left(72);
  forward(100); 
  left(72);
  forward(100);
  wait(5);
}

//Drawing decagon
#include <simplecpp>
main_program
{
  turtleSim();
  repeat(10)
  {
     forward(100);
     left(36);
     wait(1);
  }
   wait(5);
}

//more with turtle
#include <simplecpp>
main_program
{
  turtleSim();
  left(72);
  repeat(5)
  {
    forward(200);
    wait(1);
    left(144);
  }
  wait(20);
}

//Text only turtle
#include <simplecpp>
main_program
{
  cout << "a";
  repeat(5)
  {
    cout << "b";
    repeat(2){ cout << "c"; }
    cout << "d";
  }
}
