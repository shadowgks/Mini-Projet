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
        sleep(1);
    }
    printf("Course !\n");
    printf("\n---------------------------------------------------------------------------");
}

// Logic functions section
void printFirstPlaceAfterLap(struct Race race){
    printf("\nApres le tour numero %d \nLa premiere place est occupee par: %s dans la voiture de course %s\n",race.numberOfLaps,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}
void printCongratulation(struct Race race){
    printf("\n---------------------------------------------------------------------------");
    printf("\nFelicitons tous %s, dans la voiture de course %s, pour son incroyable performance. C'etait vraiment une belle course et bonne nuit a tous !",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}
int calculateTimeToCompleteLap(){
    int vitesse = rand() % 3 + 1;
    int acceleraion = rand() % 3 + 1;
    int nerves = rand() % 3 + 1;
    switch(nerves){
    case 1:
        nerves = 3;
        break;
    case 2:
        nerves = 2;
        break;
    case 3:
        nerves = 1;
        break;
    }
    vitesse += acceleraion + nerves;
    return vitesse;
}
void updateRaceCar(struct RaceCar *raceCar){
    for(i=0; i<5; i++){
        (*raceCar).totalLapTime = calculateTimeToCompleteLap();
    }
}
void updateFirstPlace(struct Race *race, struct RaceCar *raceCare1, struct RaceCar *raceCare2){
    if(raceCare1.totalLapTime > raceCare2.totalLapTim){
        strcpy((*race).firstPlaceDriverName , (*raceCare1).driverName);
        strcpy((*race).firstPlaceRaceCarColor, (*raceCare1).raceCarColor);
    }else{
        strcpy((*race).firstPlaceDriverName , (*raceCare2).driverName);
        strcpy((*race).firstPlaceRaceCarColor, (*raceCare2).raceCarColor);
    }
}


int main()
{
    srand(time(0));
	struct Race R1 = {1,2,"Saad","red"};
	struct Race R2 = {1,2,"Nouhaila","blue"};
	struct RaceCar RC1;


	printIntro();
	printCountDown();
	printFirstPlaceAfterLap(R1);
	printCongratulation(R2);

    return 0;
}

