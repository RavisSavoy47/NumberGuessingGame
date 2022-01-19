
#include <iostream>
#include <time.h> 

int main()
{
	srand(time(NULL));

	/// created a guess for the random number and the player response.
	int guess;
	int answer;


	/// created a min and max.
	int min = 1;
	int max = 100;

	//Ask the player to think of a number within range
	std::cout << "Think of a number between 1 and 100" << std::endl;
	system("pause");
	system("cls");

	

	bool isCorrect = false;
	/// <summary>
	/// The loop where the you get the random number and say if its higher or lower until you get to your number
	/// </summary>
	/// <returns></returns>
	while (isCorrect == false)
	{
		//selects a random number 
		guess = rand() % (max - min) + min;
		int currentNum = guess;

		//Shows the number
		std::cout << "Is this your number " << guess << "?\n\n";

		//Ask if the number is higher, lower, or equal
		std::cout << "Is your number higher, lower, or equal?\n"
			<< "1. Higher\n"
			<< "2. Lower\n"
			<< "3. Equal\n\n";
		std::cin >> answer;
		system("cls");

		//Checks if the player has cheated
		if (max - min == 1)
		{
			std::cout << "Git Good Cheater!\n";
			system("pause");
			isCorrect = true;
		}
		/// <summary>
		/// if your number is higher lower or equal
		/// </summary>
		/// <returns></returns>
		if (answer == 1)
		{
			min = currentNum;
		}
		else if (answer == 2)
		{
			max = currentNum;
		}
		//if that is your number
		else if (answer == 3)
		{
			std::cout << "Yeah Baby!! That's what i been waiting for!!!!\n";
			system("pause");
			isCorrect = true;
		}
		//if you type anything other than 1, 2, 3
		else
		{
			std::cout << "Ummm Help!\n";
			system("pause");
			isCorrect = true;
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


