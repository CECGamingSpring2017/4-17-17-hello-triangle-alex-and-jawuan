/* CSCI 261 A02: Triangles
* Author: XXXX (_INSERT_YOUR_NAME_HERE_)
*
* Add more complete description here...
*/

#include <iostream>   // For cin, cout, etc.
#include<ctime>
#include <math.h>

using namespace std;  // For standard namespace 

int main() {
	// PART I: INSERT YOUR CODE BELOW HERE

	
	srand(time(NULL));

	double x_pos_1 = rand() % 20-10;
	double y_pos_1 = rand() % 20-10;

	double x_pos_2;
	double y_pos_2; 

	double x_pos_3;
	double y_pos_3;

	cout << "Your starting coordinants are: (" << x_pos_1 << " , " << x_pos_2 << " )" << endl;

	cout << "Please enter 2 coordinants: ";
	cin >> x_pos_2;
	cin >> y_pos_2;

	cout << "And two more...";
	cin >> x_pos_3;
	cin >> y_pos_3;

	



	// PART I INSERT YOUR CODE ABOVE HERE
	// PART II: INSERT YOUR CODE BELOW HERE
	double side_length_a = sqrt((x_pos_2 - x_pos_1)*(x_pos_2 - x_pos_1) + (y_pos_2 - y_pos_1)*(y_pos_2 - y_pos_1));


	double side_length_b = sqrt((x_pos_3 - x_pos_2)*(x_pos_3 - x_pos_2) + (y_pos_3 - y_pos_2)*(y_pos_3 - y_pos_2));


	double side_length_c = sqrt((x_pos_1 - x_pos_3)*(x_pos_1 - x_pos_3) + (y_pos_1 - y_pos_3)*(y_pos_1 - y_pos_3));

	double p = side_length_a + side_length_b + side_length_c;

	double a = (side_length_a + side_length_b + side_length_c) / 2;

	double a2 = sqrt(a*(a-side_length_a)*(a-side_length_b)*(a-side_length_c));


	// PART II INSERT YOUR CODE ABOVE HERE
	// PART III INSERT YOUR CODE BELOW HERE


	cout << "Your triangle's coordinants are at: (" << x_pos_1 << " , " << y_pos_1 << " )  (" << x_pos_2 << " , " << y_pos_2 << " )  (" << x_pos_3 << " , " << y_pos_3 << " )" << endl;

	cout << "Perimiter is" << p << endl;

	cout << "Area is" << a2 << endl;

	// PART III INSERT YOUR CODE ABOVE HERE




	return 0; // signals the operating system that our program ended OK.
}