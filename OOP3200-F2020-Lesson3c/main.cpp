/*
 * File:main.cpp
 * Name: Andre Agrippa
 * Description: OOP3200 ICE 4 (Lesson 5)
 * Date: 10/07/2020
 */
#include <iomanip>
#include <iostream>
#include <vector>


#include "GameObject.h"
//#include "Vector2D.h"


static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num)
{
	for(int count = 0; count < num; count++)
	{
		int id;
		Vector2D point;
		std::cout << "Enter the gameObject's ID: ";
		std::cin >> id;
		std::cout << "Enter the gameObject Position's (x,y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You entered " << id << " for the gameObject's ID " << std::endl;
		std::cout << "You Entered " << point << " for the gameObject Position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
	}
	
}
static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObect is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first point and second point is: " << Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;

	std::cout << "First Game Object Details:" << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object Details:" << std::endl;
	std::cout << object2->ToString() << std::endl;
}

int main()
{

	std::vector<GameObject*> gameObjects;
	int num_of_GO;
	std::cout << "How many game objects do you need?: ";
	std::cin >> num_of_GO;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	BuildGameObjects(gameObjects, num_of_GO);

	int id1;
	std::cout << "What is the first object Index?: ";
	std::cin >> id1;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	int id2;
	std::cout << "What is the second object Index?: ";
	std::cin >> id2;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	CompareGameObjects(gameObjects[id1], gameObjects[id2]);
	
	//std::cout << gameObjects[1]->ToString() << std::endl;
	
}

