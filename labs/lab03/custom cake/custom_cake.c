//
//  custom_cake.c
//
//
//  Created by Jimmy Yau on 9/3/2025.
//

#include <stdio.h>


int cake(void) {
	
	int layers;
	
	printf("How many layers: ");
	scanf("%d", &layers);
	
	char input[layers + 1];
	
	printf("Please enter layers: ");
	scanf("%s", input);
	
	
	for (int i = 0; i < layers; i++) {
		
		for (int x = 0; x < layers; x++) {
			
			printf("%c", input[i]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
