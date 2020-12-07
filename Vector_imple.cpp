/*
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

Certain functions associated with the vector are:

Iterators
    1.begin() – Returns an iterator pointing to the first element in the vector
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    3.rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the vector.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

    9.size() – Returns the number of elements in the vector.
    10.max_size() – Returns the maximum number of elements that the vector can hold.
    11.capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    12.resize(n) – Resizes the container so that it contains ‘n’ elements.
    13.empty() – Returns whether the container is empty.
    14.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    15.reserve() – Requests that the vector capacity be at least enough to contain n elements.
    
    
Element access:
    1.reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    2.at(g) – Returns a reference to the element at position ‘g’ in the vector
    3.front() – Returns a reference to the first element in the vector
    4.back() – Returns a reference to the last element in the vector
    5.data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

Modifiers:
    1.assign() – It assigns new value to the vector elements by replacing old ones
    2.push_back() – It push the elements into a vector from the back
    3.pop_back() – It is used to pop or remove elements from a vector from the back.
    4.insert() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the vector container
    8.emplace() – It extends the container by inserting new element at position
    9.emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
    10.vector<int>v;   // (creates an empty vector of integers)
        sort(v.begin(),v.end());  // (Will sort all the elements in the vector) //Use #include <algorithm> for sort()

*/

// C++ program to illustrate the 
// capacity function in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> arr; 

	for (int i = 1; i <= 5; i++) 
		arr.push_back(i); 

	cout << "Size : " << arr.size(); 
	cout << "\nCapacity : " << arr.capacity(); 
	cout << "\nMax_Size : " << arr.max_size(); 

	// resizes the vector size to 4 
	arr.resize(4); 

	// prints the vector size after resize() 
	cout << "\nSize : " << arr.size(); 

	// checks if the vector is empty or not 
	if (arr.empty() == false) 
		cout << "\nVector is not empty"; 
	else
		cout << "\nVector is empty"; 

	// Shrinks the vector 
	arr.shrink_to_fit(); 
	cout << "\nVector elements are: "; 
	for (auto it = arr.begin(); it != arr.end(); it++) 
		cout << *it << " "; 

	return 0; 
} 

