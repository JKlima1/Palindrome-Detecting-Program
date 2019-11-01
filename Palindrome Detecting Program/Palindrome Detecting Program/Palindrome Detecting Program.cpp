#include<iostream>
#include<string>
using namespace std;

//Function to reverse the order of the word
void reverseWord(string& word, int i = 0)
{
	//Variable to store the length of entered word
	int wordLength;

	//Store the word length into the variable
	wordLength = word.length();

	//Base case
	if (i == wordLength / 2)
		return;

	//Swap function to reverse order
	swap(word[i], word[wordLength - i - 1]);

	//Recursive statment
	reverseWord(word, i + 1);
}//end reverseWord

//Funtion isPalindrome
//Check if input is a palindrome
bool isPalindrome(string a, string b)
{
	//If a is equal to b, return true
	if (a == b)
		return true;
	
	return false;
}//end isPalindrome

int main()
{
	//Store variables in strings:
	//word: for processing
	//wordOriginal to store the original word
	//wordReversed to store the word in reverse order
	string word, wordOriginal, wordReversed;
	
	//Terminal Prompt
	cout << "Program to detect palindromes" << endl;
	cout << "*****************************" << endl;
	cout << "Enter word: ";

	//input for word variable
	cin >> word;

	//store current word input into wordOriginal
	wordOriginal = word;

	//funtion to reverse the order of string "word"
	reverseWord(word);

	//store current word output into wordReversed
	wordReversed = word;

	//Output wordRevered in terminal
	cout <<"Reversed:   " << wordReversed << endl << endl;

	//Check if word is palindrome
	if (isPalindrome(wordOriginal, wordReversed))
		cout << "True" << endl;
	else cout << "False" << endl;

	return 0;
}//end main