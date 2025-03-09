//
//  letters_between.c
//  labs
//
//  Created by Jimmy Yau (z5644038) on 9/3/2025.
//

#include <stdio.h>

int main(void) {
	char start, target;

	printf("Enter the starting letter: ");
	scanf(" %c", &start);
	printf("Enter the target letter: ");
	scanf(" %c", &target);

	int forward_distance = calculate_distance_forward(start, target);
	int backward_distance = calculate_distance_backward(start, target);

	if (forward_distance <= backward_distance) {
		char current = start;
		while (current != target) {
			printf("%c", current);
			current++;
			if (current > 'z') {
				current = 'a';
			}
		}
		printf("%c\n", target);
	} else {
		char current = start;
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

int calculate_distance_forward(char start, char target) {
	if (start <= target) {
		return target - start;
	} else {
		return 26 - (start - target);
	}
}

int calculate_distance_backward(char start, char target) {
	if (start >= target) {
		return start - target;
	} else {
		return 26 - (target - start);
	}
}
