#include <iostream>
#include "Exercice.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

int main(int argc, char** argv)
{
#ifndef AUTOGRADING

	std::cout << "Local test" << std::endl;

	/*------------------------------ !!! Don't touch above !!! ------------------------------*/
	/*------------------------------------ STUDENT MAIN ------------------------------------*/

	// This is the main function for the student

	// You can use this function to test a specific exercice, for example exercice 1 test 1
	// You can test multiple exercices by calling multiple times the function AutograderRunTest

	std::cout << "---------------- Exercice exemple ----------------" << std::endl;
	ExerciceBase::AutograderRunTest(0, 0);
	ExerciceBase::AutograderRunTest(0, 1);

	std::cout << "---------------- Exercice 1 ----------------" << std::endl;
	ExerciceBase::AutograderRunTest(1, 0);
	ExerciceBase::AutograderRunTest(1, 1);
	ExerciceBase::AutograderRunTest(1, 2);
	ExerciceBase::AutograderRunTest(1, 3);
	ExerciceBase::AutograderRunTest(1, 4);


	std::cout << "---------------- Exercice 2 ----------------" << std::endl;
	ExerciceBase::AutograderRunTest(2, 0);
	ExerciceBase::AutograderRunTest(2, 1);
	ExerciceBase::AutograderRunTest(2, 2);
	ExerciceBase::AutograderRunTest(2, 3);
	ExerciceBase::AutograderRunTest(2, 4);

	std::cout << "---------------- Exercice 3 ----------------" << std::endl;
	ExerciceBase::AutograderRunTest(3, 0);
	ExerciceBase::AutograderRunTest(3, 1);
	ExerciceBase::AutograderRunTest(3, 2);
	ExerciceBase::AutograderRunTest(3, 3);
	ExerciceBase::AutograderRunTest(3, 4);



	return 0;

	/*------------------------------------ STUDENT MAIN ------------------------------------*/
	/*------------------------------ !!! Don't touch after !!! ------------------------------*/

#else
	// This line is used by the autograder, don't touch it !
	return ExerciceBase::AutograderMain(argc, argv);
#endif
}
