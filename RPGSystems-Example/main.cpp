#include <stdlib.h>
#include <stdio.h>
#include "Player.h"
#include "SomeSystem.h"


int main() {


	//GIVEN the player has a SomeSystem
	SomeSystem newSomeSystem = SomeSystem();
	Player newPlayer = Player(newSomeSystem);
	
	newPlayer.SayHello();

	//WHEN the player performs a system check
	newPlayer.someSystem.SystemCheck();

	//THEN
	//The system will show with an int of 1
	//

	system("pause");
}