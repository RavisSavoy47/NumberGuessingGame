
#include <iostream>
#include <time.h> 

int main()
{
	int iGuess;
	int answer;

	int min = 1;
	int max = 100;

	srand(time(NULL));

	std::cout << "Think of a number between 1 and 100" << std::endl;

	system("pause");
	system("cls");

	

	bool isCorrect = false;

	while (isCorrect == false)
	{
		iGuess = rand() % (max - min) + min;

		int currentNum = iGuess;
		std::cout << "Is this your number " << iGuess << "?" << std::endl;
		std::cout << "If yes then press 1. " << "If no then press 2." << std::endl;

		std::cin >> answer;

		system("cls");

		if (max - min == 1)
		{
			std::cout << "Git Good Cheater!" << std::endl;
			system("pause");
			return 0;
		}

		if (answer == 1)
			isCorrect = true;

		else if (answer == 2)
		{
			std::cout << "Was your number higher or lower." << std::endl;
			std::cout << "If Higher then press 1. " << "If Lower then press 2." << std::endl;

			std::cin >> answer;

			system("cls");

			if (answer == 1)
			{
				min = currentNum; 
			}
			else if (answer == 2)
			{
				max = currentNum;
			}
		}
	}



	return 0;
}

/// <summary>
/// tell the player to think of a number
/// 
/// display a random number between 1-100
/// 
/// ask if this is the player number
/// 
/// if number is correct
/// {
///		end game
/// }
/// else 
/// {
///		from the number ask was it higher or lower
/// 
///		if (higher)
///		{
///			random number higher to range
///		}
///		else (lower)
///		{
///			random number lower to range
///		}
/// }
/// 
/// </summary>


