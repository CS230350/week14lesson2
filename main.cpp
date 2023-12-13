//
//  main.cpp
//  week14lesson1
//
//  Created by Dmitriy Taldonov on 13/12/23.
//

#include <iostream>
#include <string>
using namespace std;
//1
class Vehicle {
public:
    double speed;
    string color;
};

class Car : public Vehicle{
public:
    int numberOfDoors;
    int tires;
    void display(){
        cout << "Speed Of The Car: " << speed << endl;
        cout << "Color Of The Car: " << color << endl;
        cout << "numberofdoors: " <<numberOfDoors<< endl;
    
    }
    
};
//2
class Shape {
public:
    float calculateArea();
};
class Rectangle : public Shape{
public:
    float weight;
    float height;
    float calculateArea(){
        return weight * height;
    }
    
};
class Cuboid : public Rectangle{
public:
    float depth;
   void calculateVolume(){
    cout << weight*height*depth;
    }
    
};




int main (){
  //1
    Car car1;
    car1.speed=200;
    car1.numberOfDoors=4;
    car1.color="Black";
    car1.display();
  //2
    Rectangle shape1;
    shape1.weight=20;
    shape1.height=30;
    
    Cuboid shape1in3class;
    shape1in3class.depth=10;
    shape1in3class.height=12;
    shape1in3class.weight=11;
    shape1in3class.calculateVolume();
    return 0;
}
