#include <stdio.h>
#include <stdlib.h>

//Structuer Race declararion
struct Race {
//Members
	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[100];
	char RaceCar[100];
};

//Structuer Race declararion
struct RaceCar  {
//Members
	char driverName[100];
	char raceCarColor[100];
	int totalLapTime;
};

//Create Function printIntro();
void printIntro(){
    printf("Bienvenue à notre événement principal, les fans de course numérique !\n");
    printf("J'espère que tout le monde a pris son goûter car nous allons commencer !\n");
}
int main()
{
	struct Race R1;
	struct RaceCar RC1;


	printIntro();
    return 0;
}
