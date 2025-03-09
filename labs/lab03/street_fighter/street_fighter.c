
//  Created by Jimmy Yau (z5644038) on 10/3/2025.

#include <stdio.h>

#define MAX_HEALTH 50.0
#define MAX_ATTACK 10

struct fighterStats{
	int atk;
	double hp;
	char keybind;
};


void dealDamage(struct fighterStats *attacker, struct fighterStats *defender);

int main (void){
	
	struct fighterStats p1 = {0,MAX_HEALTH,'\0'}; //fighter 1 = player 1 = p1
	struct fighterStats p2 = {0,MAX_HEALTH,'\0'};
	
	
	printf("Welcome to Street Fighter!\n\n");
	
	
	printf("Enter Fighter 1's attack power (1-10): "); //atk
	scanf("%d", &p1.atk);
	
	printf("Enter an ascii character for Fighter 1's attack command: "); //keybind
	scanf(" %c", &p1.keybind);
	
	
	printf("Enter Fighter 2's attack power (1-10): ");
	scanf("%d", &p2.atk);
	
	printf("Enter an ascii character for Fighter 2's attack command: ");
	scanf(" %c", &p2.keybind);
	
	printf("Fight!\n\n");
	
	char p1_input = '\0';
	char p2_input = '\0';
	
	while (p1.hp > 0 || p2.hp > 0 ) {
		
		printf("Fighter 1, press %c to attack: ", p1.keybind); //I wonder if this part can be less repetitive using functions?
		scanf(" %c", &p1_input);
		
		if (p1_input == p1.keybind) {
			
			if (p1.atk < MAX_ATTACK*1.5){
				
				dealDamage(&p1, &p2);
			}
		}
		
		printf("Fighter 1 attacks!\n");
		
		printf("Fighter 2, press %c to attack: ", p2.keybind);
		scanf(" %c", &p2_input);
		
		if (p2_input == p2.keybind) {
			
			if (p2.atk < MAX_ATTACK*1.5) {
				
				dealDamage(&p2, &p1);
			}
		}
		
		printf("Fighter 2 attacks!\n\n");
		
		printf("Fighter 1's health: %.1lf\n", p1.hp);
		printf("Fighter 2's health: %.1lf\n", p2.hp);
	}
	
	printf("\n\n");
	
	if (p1.hp >= 0) { //Assignment didn't specify what happens at 0 hp
		printf("Player 1 Wins!");
	} else if (p2.hp >= 0) {
		printf("Player 2 Wins!");
	} else {
		printf("It's a draw!\n");
	}
	
	printf("GAME OVER\n");
	
	return 0;
}

void dealDamage(struct fighterStats *attacker, struct fighterStats *defender) {
	
	double damage = attacker->atk;

	if (attacker->hp < MAX_HEALTH / 2) {
		damage *= 1.5;
	}

	defender->hp -= damage;
}
