#include<iostream>

/*Create the variables, “playerOne”, ”playerTwo”, “randomNumber”, “playerGuess”, and “currentPlayer”
Ask the first person their name and store that into the variable “playerOne”
Ask the second person their name and store that into variable “playerTwo”
Generate a random number between 1 and 100 and store that into the variable “randomNumber”
Tell the players to flip a coin.
Prompt the player who won and store it into “currentPlayer”
Start a loop for player turns
In the loop, prompt the current player for their guess and store it to “playerGuess”
Compare the variable “playerGuess” to “randomNumber”
If the “playerGuess” is incorrect
If “playerGuess” is less than “randomNumber”, prompt the player “Your guess is too low”
If “playerGuess” is greater than “randomNumber”, prompt the player “Your guess is too high”
If the “playerGuess” is equal to “randomNumber”
Print “end the game”
Switch to the next player by updating the “currentPlayer” and repeat steps 8-11
*/
int main()
{

	std::string namePlayer1;
	std::string namePlayer2;
	int playerGuess = 0;
	std::cout << "What is Player 1's name?" << std::endl;
	std::cin >> namePlayer1;
	std::cout << "What is Player 2's name" << std::endl;
	std::cin >> namePlayer2;
	int currentPlayer = rand() % 2;
	char gameState;
	gameState = 'y';
	while (gameState == 'y') // Replay Function, While game state condition is set to true the game will continue to loop after the game finishes.
	{
		srand(time(0));
		int randomNumber = std::rand() % 100 + 1;
		//d::cout << "Answer is: " << randomNumber << std::endl;
		do
		{
			switch (currentPlayer)
			{
			case 0:
				std::cout << namePlayer1 << " enter in your guess" << std::endl;
				break;

			case 1:
				std::cout << namePlayer2 << " enter in your guess" << std::endl;
				break;


			default:
				break;
			}
			std::cin >> playerGuess;
			if (playerGuess == randomNumber)
			{
				switch (currentPlayer)
				{
				case 0:
				{
					std::cout << namePlayer1 << " you won this game!" << std::endl;
					break;
				}
				case 1:
				{
					std::cout << namePlayer2 << " you won this game!" << std::endl;
					break;
				}
				default: {
					break;
				}
				}
			}

			else if (playerGuess < randomNumber)
			{
				std::cout << "Too low!" << std::endl;
			}
			else if (playerGuess > randomNumber)
			{
				std::cout << "Too high!" << std::endl;
			}


		 currentPlayer = 1 - currentPlayer;
	}
			 while (playerGuess != randomNumber);
			std::cout << "Would you like to play again?" << std::endl << "Press 'y' or 'n'" << std::endl;
			std::cin >> gameState; //Sets the game to replay or not
		}

	}