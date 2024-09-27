// C++ program to implement the
// above approach
#include <string>
#include <iostream>
using namespace std;

// Function to remove the outermost
// parentheses of every primitive
// substring from the given string
string removeOuterParentheses(string S)
{

	// Stores the resultant string
	string res;

	// Stores the count of
	// opened parentheses
	int count = 0;

	// Traverse the string
	
	for (char c : S) {

		if(c=='('){
			if(count > 0){
				count++;
				res += c;
			}
			else{
				count++;
			}
		}
		
		// if (c == '(' && count++ > 0){
		// 	res += c;
		// }

			// Include the character

		// If closing parentheses is
		// encountered and their
		// count is less than count
		// of opening parentheses
		if (c == ')' && count-- > 1)

			// Include the character
			res += c;
	}

	// Return the resultant string
	return res;
}

// Driver Code
int main()
{
	string S = "(()())(())()";
	cout << removeOuterParentheses(S);
}
