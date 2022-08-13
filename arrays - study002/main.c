#include <stdio.h>
#include <string.h>

void main() {
	
	char* games[3][2];
	
	//Action
	games[0][0] = "Grand Theft Auto V";
	games[0][1] = "Red Dead Redemption 2";

	//Race
	games[1][0] = "Forza Horizon 5";
	games[1][1] = "The Crew 2";
	
	//Adventure
	games[2][0] = "Raft";
	games[2][1] = "Valheim";
		
	printf("Games order by action genre\n");
	printf("%s\n", games[0][0]);
	printf("%s\n", games[0][1]);
	printf("\n");	
	
	printf("Games order by race genre\n");
	printf("%s\n", games[1][0]);
	printf("%s\n", games[1][1]);
	printf("\n");
	
	printf("Games order by adventure genre\n");
	printf("%s\n", games[2][0]);
	printf("%s\n", games[2][1]);
	printf("\n");
	
}