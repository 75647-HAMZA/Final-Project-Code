#include<iostream>		//	To add iostream library.
using namespace std;	// For using standard library like cout.
string checkPasswordStrength(const string& password)		// A function which take password as input & checks strength.
{
	if (password.empty())		// Conditional Statement If
	{
		return "Invalid:Password cannot be empty";  // When if will be true it will execute.
	}
	bool hasupper = false;     
	bool haslower = false;		// boolean data type "false".
	bool hasdigit = false;
	bool hasspecial = false;
	const string specialCharacters = "!@#$%^&*()_-=+[]{}|;:'\",.<>?/`~";		// List of special characters.
	for (int i = 0;i < password.length();i++)		// For loop which will repeat each character of password one by one.
	{
		char ch = password[i];
		if (isupper(ch))		// if there is uppercase it will set to true.
		{
			hasupper = true;
		}
		else if (islower(ch))	// if there is lowercase it will set to true.
		{
			haslower = true;
		}
		else if (isdigit(ch))	// if there is digit it will set to true.
		{
			hasdigit = true;
		}
		else if (specialCharacters.find(ch) != string::npos)	// if there is special character mentioned above then it will set to true.
		{
			hasspecial = true;
		}
	}
	int score = 0;						// int data type // variable will store strength score.
	if (password.length() >= 8)			
	{
		score++;						// if there are 8 characters or more then score increases.
	}
	if (hasupper)
	{
		score++;						// if there is uppercase letter then score increases.
	}
	if (haslower)
	{
		score++;						// if there is lowercase letter then score increases.
	}
	if (hasdigit)
	{
		score++;						// if there is digit then score increases.
	}
	if (hasspecial)
	{
		score++;						// if password has special character then score increases.
	}
	if (score <= 2)
	{
		return "Weak";					// when score is 0, 1, 2 then pss is weak.
	}
	else if (score <= 4)
	{
		return "Moderate";				// when score is 3 or 4 then pss is moderate.
	}
	else
	{
		return "Strong";				// when score is 5 then pss is strong
	}
}
int main()								// Main Function
{
	string password;					// string data type // will store password.
	cout << "Enter password:";			// give output for entering a password.
	getline(cin,password);				// will read full password input from user.
	cout << "Password strength:" << checkPasswordStrength(password) << endl;		// It will call function & prints pss strength.
	return 0;							// End of the program.
}
//-----------------------------------------------------------Thanks-----------------------------------------------------------------------------------//