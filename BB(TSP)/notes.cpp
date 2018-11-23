#include "pch.h"
//====================================================================

/* 
cout << "Hej, velkommen til denne Runes rengøringsservice!" << endl;
cout << "\nHvor mange små rum vil du have rengjort?" << endl;

int number_of_small_rooms{ 0 };
cin >> number_of_small_rooms;

cout << "Hvor mange store rum vil du have rengjort?" << endl;

int number_of_large_rooms{ 0 };
cin >> number_of_large_rooms;

const double price_small_room{ 25 };
const double price_large_room{ 35 };
const double tax_rate{ 0.06 };
const int estimate_expire{ 30 };

double small_cost = price_small_room * number_of_small_rooms;
double large_cost = price_large_room * number_of_large_rooms;
double cost = small_cost + large_cost;
double tax = cost * tax_rate;
double total_estimate = cost + tax;


cout << "Estimering for rengøring" << endl;
cout << "==========================" << endl;
cout << "Antal af små rum: " << number_of_small_rooms << endl;
cout << "Antal af store rum: " << number_of_large_rooms << endl;
cout << "Pris pr. lille rum DKK: " << price_small_room << endl;
cout << "Pris pr: stort rum DKK: " << price_large_room << endl;
cout << "Omkostning DKK: " << cost << endl;
cout << "Skat: DKK " << tax << endl;
cout << "==========================" << endl;
cout << "Total estimering: DKK " << total_estimate << endl;
cout << "Denne estimering er gyldig i " << estimate_expire << " days" << endl;
*/

// ============================================================================

/*
		long long people_on_earth{ 7600'000'000 };

	bool game_over{ true };

	cout << "There is: " << people_on_earth << endl;

	cout << "The variable game_over is: " << game_over << endl;

	cout << "Float is " << sizeof(float) << " bytes" << endl;
	cout << "Double is " << sizeof(double) << " bytes" << endl;
	cout << "Long double is " << sizeof(long double) << " bytes" << endl;

	cout << "Minimum values:" << endl;
	cout << "Char: " << CHAR_MIN << endl;
	cout << "Int: " << INT_MIN << endl;
	cout << "Short " << SHRT_MIN << endl;
	cout << "Long: " << LONG_MIN << endl;
	cout << "Long long: " << LLONG_MIN << endl;
	*/

//==============================================================================
//VECTORS 
//==============================================================================
/*
	vector <int> test_scores;


	cout << "\nEnter a number to add: " << endl;

	int score_to_add{ 0 };
	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\nEnter another number to add: " << endl;

	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\nTestscores in the vector are now: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;


	//2-d vector
	vector <vector <int>> movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};

	cout << "This is a 2-D vector: " << movie_ratings.at(0).at(1) << endl;



	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "The first element of vector1 is: " << vector1.at(0) << endl;
	cout << "The second element of vector1 is: " << vector1.at(1) << endl;
	cout << "The size of vector1 is: " << vector1.size() << endl;

	cout << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "The first element of vector2 is: " << vector2.at(0) << endl;
	cout << "The second element of vector2 is: " << vector2.at(1) << endl;
	cout << "The size of vector2 is: " << vector2.size() << endl;

	cout << endl;

	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "The elements in vector_2d are: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	*/
