#include "Solution3.h"

#include <algorithm>
#include <ostream>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {
    bool listeVide = words.empty();

    if (!listeVide)
    {
        std::vector<std::string> tempWordList = words;

        for (std::string& word : tempWordList) {
            std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c) {
                return std::tolower(c);
                });
        }


        int tailleListe = tempWordList.size();

        for (int i = 0; i < tailleListe - 1; i++)
        {
            for (int j = 0; j < tailleListe - i - 1; j++)
            {
                if (tempWordList[j] > tempWordList[j + 1])
                {
                    std::swap(tempWordList[j], tempWordList[j + 1]);
                    std::swap(words[j], words[j + 1]);
                }
            }
        }
    }
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    if (words.empty())
    {
        throw std::runtime_error("La lsite est vide");
    }
    else
    {
        return words;
    }
    
}

#endif
