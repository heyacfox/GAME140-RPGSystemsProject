#include "Player.h"
#include "SomeSystem.h"
#include <stdio.h>


Player::Player(SomeSystem& newSomeSystem) :
	someSystem(newSomeSystem)
{

}


void Player::SayHello() {
	printf("Hello\n");
}
