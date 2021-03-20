#pragma once
#include "PlayableCharacter.h"

class Bob : public PlayableCharacter
{
public:
	// A constructor specific to Bob
	Bob();

	bool virtual handleInput();
};