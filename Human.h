#pragma once
#include "Player.h"

class Human :
	public Player
{
public:
	Human();
	~Human();
	int run(Board * board);
};

