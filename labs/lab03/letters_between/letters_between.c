//
//  letters_between.c
//  labs
//
//  Created by Jimmy Yau (z5644038) on 9/3/2025.
//

#include <stdio.h>

int main(void) {
	char start, target;
	int forward_distance, backward_distance;
	char current;

	printf("Please enter starting letter: ");
	scanf(" %c", &start);
	printf("Please enter target letter: ");
	scanf(" %c", &target);

	// Calculate forward distance
	forward_distance = (target - start + 26) % 26;

	// Calculate backward distance
	backward_distance = (start - target + 26) % 26;

	// Print the shortest path
	if (forward_distance <= backward_distance) {
		current = start;
		while (current != target) {
			printf("%c", current);
			current++;
			if (current > 'z') {
				current = 'a';
			}
		}
		printf("%c\n", target);
	} else {
		current = start;
		while (current != target) {
			printf("%c", current);
			current--;
			if (current < 'a') {
				current = 'z';
			}
		}
		printf("%c\n", target);
	}

	return 0;
}
