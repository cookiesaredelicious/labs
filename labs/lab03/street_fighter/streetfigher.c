
//  Created by Jimmy Yau (z5644038) on 10/3/2025.

#include <stdio.h>

struct fighterStats{
	int atk;
	double hp;
	char keybind;
};

int main (void){
	
	struct fighterStats fighter1 = {0,50.0,'\0'};
	struct fighterStats fighter2 = {0,50.0,'\0'};
	
	
	printf("Welcome to Street Fighter\n\n");
	printf("Enter Fighter 1's attack power (1-10): \n");
	scanf("%d", &fighter1.atk);
	
	printf("Enter Fighter 2's attack power (1-10): \n");
	scanf("%d", &fighter2.atk);
	
	
	return 0;
}

