//#include "Header.h"
//#include <cstddef>
# include <stdlib.h>

#define MAX 35
#define X_COUNT 3
#define Y_COUNT 3
struct dat
{
	int posX;
	int posY;
	char playerChr;

	char name[MAX];

	struct date {
		int day;
		int month;
		int year;
	}date;


};

int posX;
int posY;

int main(int argc, char* argv) {
	
	call_raster_main();
	input_Buffer_Events_main();


}

int call_raster_main() {

	int xs = X_COUNT + 1;
	int ys = Y_COUNT + 1;

	struct dat lib[X_COUNT + 1][Y_COUNT + 1] = { '\0' };

	char player[2] = { 'X','O' };
	int p = 2;
	int eingabe = 1;
	do
	{
		system("cls");  // Clean the screen!
						//Print the Rastaman!

		for (size_t x = 1; x < xs; x++) {
			printf(" _");
		}
		puts("");
		for (size_t x = 1; x < xs; x++) {
			for (size_t y = 1; y < ys; y++) {
				printf("|");

				printf("%c", ((lib[x][y].posX > 0 && lib[x][y].posY > 0) && (x == lib[x][y].posX && y == lib[x][y].posY)) ? lib[x][y].playerChr : '_');
				//printf("%s", ((lib[x][y].posX >0 && lib[x][y].posY >0) && (x == lib[x][y].posX && y == lib[x][y].posY)) ? "T" :"_" );
				if (y == ys - 1)
					printf("|");
			}
			puts("");
		}


	} while (eingabe != 0);

}

void add_entry(int posX, int posY) 
{}