
//  Created by Jimmy Yau (z5644038) on 9/3/2025.

#include <stdio.h>

int upperCase (char c) {
	return (c >= 'A' && c <= 'Z');
}

int lowerCase (char c) {
	return (c >= 'a' && c <= 'z');
}

// Function to print the shortest path between two letters
void print_shortest_path (char start, char end) {
	
	char current_letter;
	
	int forward_dist, backward_dist;

	forward_dist = (end - start + 26) % 26;

	backward_dist = (start - end + 26) % 26;

	if (forward_dist <= backward_dist) {
		
		current_letter = start;
		
		while (current_letter != end) {
			
			printf("%c", current_letter);
			
			current_letter++;
			
			if (upperCase(start)) {
				
				if (current_letter > 'Z') current_letter = 'A';  // WHY IS THIS NOT WRAPPING?????
				
			} else if (lowerCase(start)) {
				
				if (current_letter > 'z') current_letter = 'a';
				
			}
		}
		printf("%c\n", end);
		
	} else {
		
		current_letter = start;
		
		while (current_letter != end) {
			
			printf("%c", current_letter);
			
			current_letter--;
			
			if (upperCase(start)) {
				
				if (current_letter < 'A') current_letter = 'Z';  // THIS IS NOT WRAPPING EITHER!??!?!
				
			} else if (lowerCase(start)) {
				
				if (current_letter < 'a') current_letter = 'z';
				
			}
		}
		printf("%c\n", end);
	}
}

int main(void) {
	char start, end;

	printf("Please enter starting letter: ");
	scanf(" %c", &start);
	printf("Please enter target letter: ");
	scanf(" %c", &end);

	print_shortest_path(start, end);

	return 0;
}

