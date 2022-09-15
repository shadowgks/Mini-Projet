#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race{
//Members
	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[20];
	char firstPlaceRaceCarColor[20];
};
struct RaceCar{
//Members
	char driverName[20];
	char raceCarColor[20];
	int totalLapTime;
};

// Print functions section
void printIntro(){
    printf("Bienvenue a notre evenement principal, les fans de course numerique !\n");
    printf("J'espere que tout le monde a pris son gouter car nous allons commencer !\n");
    printf("---------------------------------------------------------------------------\n");
}
void printCountDown(){
    printf("\nCoureurs prets ! Dans...\n");
    //Count Down
    int i=5;
    while(i >= 1){
        printf("%d\n",i);
        i--;
    }
    printf("Course !\n");
}

// Logic functions section
void printFirstPlaceAfterLap(struct Race race){
    printf("Apres le tour numero %d \nLa premiere place est occupee par: %s dans la voiture de course %s",race.numberOfLaps,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}
int main()
{
    srand(time(0));
	struct Race R1 = {1,2,"Saad","red"};
	struct Race R2 = {1,2,"Nouhaila","blue"};
	struct RaceCar RC1;


	printIntro();
	printCountDown();
	printFirstPlaceAfterLap(R1)

    return 0;
}

