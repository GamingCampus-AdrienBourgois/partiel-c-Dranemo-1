#include "Solution2.h"

#include <ostream>
#include <filesystem>
#include <fstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::Action(const std::string& _action, const float amount) {
	if (_action == "DEPOSIT")
	{
		return amount;
	}
	else if (_action == "WITHDRAW")
	{
		return -amount;
	}
}




float Solution2::GetBalance(const std::string& accountName)
{
	std::filesystem::path folderPath = "BankAccount";
	std::vector<std::string> allAccountName;
	float balance = 0.f;

	bool existingAccount = false;

	for (const auto& fichier : std::filesystem::directory_iterator(folderPath))
	{
		allAccountName.push_back(fichier.path().stem().string());
	}

	for (int i = 0; i < allAccountName.size(); i++)
	{
		if (allAccountName[i] == accountName)
		{
			existingAccount = true;

			std::filesystem::path filePath = folderPath / (accountName + ".txt");
			std::ifstream account(filePath.string());


			if (account.is_open()) {

				std::string line; 
				std::string action; 
				float amount; 

				while (std::getline(account, line)) {  

					std::istringstream iss(line); 
					iss >> action >> amount; 

					float actionAmount = Action(action, amount);
					balance += actionAmount;

				}

				// Fermer le fichier après la lecture
				account.close();
			}
		}
	}

	if (existingAccount)
	{
		return balance;
	}
	else
	{
		throw std::runtime_error("Le compte n'existe pas");
	}
	
}

#endif
