#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;



/*(1)
Owofied a Sentence
Create a function that takes a sentence 
and turns every "i" into "wi" and "e" into "we", and add "owo" at the end.

Examples
owofied("I'm gonna ride 'til I can't no more")
➞ "I'm gonna rwidwe 'twil I can't no morwe owo"

owofied("Do you ever feel like a plastic bag")
➞ "Do you wevwer fwewel lwikwe a plastwic bag owo"

owofied("Cause baby you're a firework")
➞ "Causwe baby you'rwe a fwirwework owo"
Notes
Don't forget to return the value!
There's a space in front of owo!*/
string owofied(string word) 
{
	string result = "";
	for (int index = 0; index < word.length(); index += 1) 
        {
		if      (word[index] == 'i')   {result += "wi";}
		else if (word[index] == 'e')   {result += "we";}
		else                           {result += word[index];}
	}
	return result + " owo";
}





/*(2)
White Spaces Between Lower and Uppercase Letters
Write a function that inserts a white space between every instance 
of a lower character followed immediately by an upper character.

Examples
insertWhitespace("SheWalksToTheBeach") ➞ "She Walks To The Beach"

insertWhitespace("MarvinTalksTooMuch") ➞ "Marvin Talks Too Much"

insertWhitespace("TheGreatestUpsetInHistory") ➞ "The Greatest Upset In History"
Notes
Each word in the phrase will be at least two characters long.*/
string insert_white(string word)
{
	string result;
	for(int index = 0; index < word.length(); index += 1)
	{
		if(word[index] >= 65 && word[index] <= 90){result += " "; result += word[index];}
		else {result += word[index];}
	}
	return result;
}




/*(3)
Remove Element

Given an integer array nums and an integer val, 
remove all occurrences of val in nums in-place. 
The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, 
you must instead have the result be placed in the first part of the array nums. 
More formally, if there are k elements after removing the duplicates, 
then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. 
You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, 
with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100*/
class stack 
{
	int item[10]; 
	int top;
public:
        stack(){top = -1;}
  void   push(int element)
  {
	if(top >= size - 1){cout << "stack is full";} 
	else {top += 1; item[top] = element;}
  }
  void pop()
  {
	if(top < 0){cout << "stack is empty";}
	else {top -= 1;}
  }

};

void sort_array(stack s)
{
	
}
void removeElement(stack s,int value)
{
   
}







int main()
{
  //(1)
  //cout << owofied("Do you ever feel like a plastic bag");
  //cout << owofied("I'm gonna ride 'til I can't no more");
  //cout << owofied("Cause baby you're a firework")


//(2)
//cout << insert_white("SheWalksToTheBeach");

//string a = "asd";
//cout << a << endl;

//(3)
//cout << alphabet_index("Wow, does that work?");


cout << "hello world";
          
}
 
