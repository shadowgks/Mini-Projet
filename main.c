#include <stdio.h>
#include <stdlib.h>

//Structuer Race declararion
struct Race {
//Members
	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[20];
	char firstPlaceRaceCarColor[20];
};

//Structuer RaceCar declararion
struct RaceCar  {
//Members
	char driverName[20];
	char raceCarColor[20];
	int totalLapTime;
};

void printIntro();
void printCountDown();


//Create Function printFirstPlaceAfterLap();

int main()
{
	struct Race R1;
	struct RaceCar RC1;


	printIntro();
	printCountDown();
    return 0;
}

//Create Function printIntro();
void printIntro(){
    printf("Bienvenue à notre événement principal, les fans de course numérique !\n");
    printf("J'espère que tout le monde a pris son goûter car nous allons commencer !\n");
    printf("---------------------------------------------------------------------------\n");
}
//Create Function printCountDown();
void printCountDown(){
    printf("\nCoureurs prêts ! Dans...\n");
    //Count Down
    int i=5;
    while(i >= 1){
        printf("%d\n",i);
        i--;
    }
    printf("Course !\n");
}
