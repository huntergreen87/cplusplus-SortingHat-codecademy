#include <iostream>

int main() {
 // define your variables first. I added 'choice' to mimick Harry's choice surpassing the sorting hat! B-)
 
 int choice = 0;
 
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n";
 
//Every Wizard has the choice to choose their house!!
 
  std::cout << "What house do you want to be in?\n";
  std::cout << "1) Gryffindor\n";
  std::cout << "2) Hufflepuff\n";
  std::cout << "3) Ravenclaw\n";
  std::cout << "4) Slytherin\n";
  std::cout << "5) I'm not sure\n";
  
  std::cin >> choice;

 //Add the value to the chosen house. Must have a value of 5 to surpass the max no matter the options
  if (choice == 1) {

    gryffindor = 5;
  }
  else if (choice == 2) {

    hufflepuff = 5;
  }
  else if (choice == 3) {

    ravenclaw = 5;
  }
  else if (choice == 4) {

    slytherin = 5;
  }
  else if (choice == 5) {

    std::cout << "Don't Worry. We'll help you figure it out!\n";
    std::cout << "\n";
    std::cout << "\n";
  }
  else {

    std::cout << "Invalid option.\n";
  }

/*std::cout << "G: " << gryffindor << "\n";
std::cout << "H: " << hufflepuff << "\n";
std::cout << "R: " << ravenclaw << "\n";
std::cout << "S: " << slytherin << "\n";*/

  //Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
  std::cout << "1) The Good \n";
  std::cout << "2) The Great \n";
  std::cout << "3) The Wise \n";
  std::cout << "4) The Bold \n";

  std::cin >> answer1;

  //add the points to the house
  if (answer1 == 1) {

    hufflepuff++;
  }
  else if (answer1 == 2) {
    
    slytherin++;
  }
  else if (answer1 == 3) {
    
    ravenclaw++;
  }
  else if (answer1 == 4) {
    
    gryffindor++;
  }
  else {

    std::cout << "Invalid input.\n";
  }

//Question 2
  std::cout << "Q2) Dawn or Dusk? \n";
  std::cout << "1) Dawn \n";
  std::cout << "2) Dusk \n";

  std::cin >> answer2;

if (answer2 == 1) {

  gryffindor++;
  ravenclaw++;
}
else if (answer2 == 2) {

  hufflepuff++;
  slytherin++;
}
else {

  std::cout << "Invalid input.\n";
}

  //Question 3
  std::cout << "Q3) What kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin \n";
  std::cout << "2) The trumpet \n";
  std::cout << "3) The piano \n";
  std::cout << "4) The drum \n";

  std::cin >> answer3;

//add the points to the house
  if (answer3 == 1) {

    slytherin++;
  }
  else if (answer3 == 2) {
    
    hufflepuff++;
  }
  else if (answer3 == 3) {
    
    ravenclaw++;
  }
  else if (answer3 == 4) {
    
    gryffindor++;
  }
  else {

    std::cout << "Invalid input.\n";
  }

  //Question 4
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane \n";
  std::cout << "2) The narrow, dark, lantern-lit alley \n";
  std::cout << "3) The twisting, leaf-strewn path through woods \n";
  std::cout << "4) The cobbled street lined (ancient buildings) \n";

  std::cin >> answer4;

//add the points to the house
  if (answer4 == 1) {

    hufflepuff++;
  }
  else if (answer4 == 2) {
    
    slytherin++;
  }
  else if (answer4 == 3) {
    
    gryffindor++;
  }
  else if (answer4 == 4) {
    
    ravenclaw++;
  }
  else {

    std::cout << "Invalid input.\n";
  }




//Highest houses
int max = 0;
std::string house;

if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}

 
std::cout << house << "!\n";

std::cout << "G: " << gryffindor << "\n";
std::cout << "H: " << hufflepuff << "\n";
std::cout << "R: " << ravenclaw << "\n";
std::cout << "S: " << slytherin << "\n";

}

