/*
 * Declare 2 empty vectors of integers named vector1 and vector 2, respectively.
 * Add 10 and 20 to dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method
 * Add 100 and 200 to dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 * Display the elements in vector_2d again using the at() method
 * Displays the element in vector1
 * What did you expect? Did you get what you expected? What do you think happened?
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector 1: " << vector1.size() << endl;
    cout << "======================" << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector 2: " << vector2.size() << endl;
    cout << "======================" << endl;

    vector <vector <int> > vector_2d
    {

    };

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;

    cout << "Change index 0 to 1000: " << endl;
    cin >> vector1.at(0);

    cout << "Vector_2d elements: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;



}










