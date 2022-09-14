#include <stdio.h>
#include <stdlib.h>

//Structer Race declararion
struct Race {
//Members
	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[100];
	char RaceCar[100];
};

//Structer Race declararion
struct RaceCar  {
//Members
	char driverName[100];
	char raceCarColor[100];
	int totalLapTime;
};
int main()
{
	struct Race R1;
	struct RaceCar RC1;

    return 0;
}
