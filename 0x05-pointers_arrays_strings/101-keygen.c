#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * Generates a random password.
 *
 * @param password The buffer to store the generated password.
 */
void generatePassword(char *password) {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	for (i = 0; i < PASSWORD_LENGTH; ++i) {
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';
}

/**
 * Entry point of the program.
 */
int main(void) {
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	generatePassword(password);
	printf("Generated password: %s\n", password);

	return 0;
}

