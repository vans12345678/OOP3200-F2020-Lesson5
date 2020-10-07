#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__
#include "Vector2D.h"

class GameObject
{
public:

	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);
	// GameObject(Vector2D position);

	//Rule of three
	~GameObject();
	GameObject(const GameObject& other_object); // copy constructor
	GameObject &operator=(const GameObject& other_object);// Assignment operator

	//Accessors
	Vector2D GetPosition() const;
	int GetId()const;
	

	//Mutator
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	//Utility Functions

	std::string ToString() const;

	
private:

	int m_id;
	Vector2D m_position;
};

#endif // defined (__GAME_OBJECT__)
