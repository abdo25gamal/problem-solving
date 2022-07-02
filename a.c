#include <stdio.h>
#include <strings.h>



/*(1)
count a size of string */
void count_string(char *string,int size)
{
  size = 0;

  while(*(string + size) != '\0')
  {
    size += 1;
  }
  size += 1;
  printf("%d",size);
}







/*(2)
Double Character Swap
Write a function to replace all instances of character c1 with character c2 and vice versa.

Examples
doubleSwap("aabbccc", 'a', 'b') ➞ "bbaaccc"

doubleSwap("random w#rds writt&n h&r&", '#', '&')
➞ "random w&rds writt#n h#r#"

doubleSwap("128 895 556 788 999", '8', '9')
➞ "129 985 556 799 888"
Notes
Both characters will show up at least once in the string.*/
void double_swap(int size,char word[size],char a,char b)
{
  for(int index = 0; index < size; index +=1)
  {
    if(*(word+index) == a){*(word+index) = b;}
    printf("%c",word[index]);
  }
  
}








/*(3)
C*ns*r*d Str*ngs
Someone has attempted to censor my strings by replacing every vowel
with a *, l*k* th*s. Luckily, I've been able to find the vowels that were removed.

Given a censored string and a string of the censored vowels, 
return the original uncensored string.

Example
uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"

uncensor("abcd", "") ➞ "abcd"

uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCASE"
Notes
The vowels are given in the correct order.
The number of vowels will match the number of * characters in the censored string.*/
void uncensor(int size,char string[size],char vowels[size],char sentence[size])
{
  
  int index1 = 0,index2 = 0;
  while(index1 < size)
  {
    if(*(string + index1) == '*')
    {
      *(string + index1) = vowels[index2]; 
      index2 +=1;
    }
    sentence[index1] = string[index1];
    index1 +=1;
  }

}









/*(4)
What's Hiding Amongst the Crowd?
A word is on the loose and now has tried to hide amongst a crowd of tall letters! Help write a function to detect what the word is, knowing the following rules:

The wanted word is in lowercase.
The crowd of letters is all in uppercase.
Note that the word will be spread out amongst the random letters, but their letters remain in the same order.
Examples
detectWord("UcUNFYGaFYFYGtNUH") ➞ "cat"

detectWord("bEEFGBuFBRrHgUHlNFYaYr") ➞ "burglar"

detectWord("YFemHUFBbezFBYzFBYLleGBYEFGBMENTment") ➞ "embezzlement"*/
void detect_word(int size,char string[size],char word[size])
{
  
  int index  = 0;
  int index2 = 0;

  while(index < size)
  {
    if(*(string+index) >= 97){ word[index2] = string[index]; index2 +=1;}
    index +=1;
  }
 

}








/*(5)
Alphanumeric Restriction
Create a function that returns true if the given string has any of the following:

Only letters and no numbers.
Only numbers and no letters.
If a string has both numbers and letters, or contains characters which don't fit into any category, return false

Examples
alphanumericRestriction("Bold") ➞ true

alphanumericRestriction("123454321") ➞ true

alphanumericRestriction("H3LL0") ➞ false

alphanumericRestriction("ed@bit") ➞ false
Notes
Any string that contains spaces or is empty should return false.*/
void alpha_number(int is,int size,char string[size])
{
  is = 1;
  int digits = 0, words  = 0, other = 0;

  for(int index = 0; index < size - 1; index +=1)
  {
    
    if
    (string[index]>=48 && string[index]<=57) {digits += 1;}

    else if
    (string[index]>=65 && string[index]<=90 || string[index]>=97 && string[index]<=122) {words += 1;}

    else
    {other++;}
  }

  if
  (other!=0){is = 0;}
	else if
  (digits==0 || words==0){is = 1;}
  else
  {is = 0;}

  (is == 0)? printf("false") : printf("true");
}










/*(6)
Length of Worm
Given a string worm create a function that takes the length of the worm and converts it into millimeters. 
Each - represents one centimeter.

Examples
wormLength("----------") ➞ "100 mm."

wormLength("") ➞ "invalid"

wormLength("---_-___---_") ➞ "invalid"
Notes
Return "invalid" if an empty string is given or if the string has characters other than -.*/
void wormlength(int size,char string[size],int mm)
{
  mm = 0;
  for(int index = 0; index < size -1; index += 1)
  {
    if(string[index]=='-'){ mm += 10;} 
    else {printf("invalid"); return;}
    printf("%d",mm);
  }
}





/*(7)
Recursion: Reverse a String
Write a function that reverses a string. Make your function recursive.

Examples
reverse("hello") ➞ "olleh"

reverse("world") ➞ "dlrow"

reverse("a") ➞ "a"

reverse("") ➞ ""
Notes
For non-base cases, your function must call itself at least once.
Check the Resources tab for info on recursion.*/
void reverse(int size,char string[size],char word[size])
{
  int index = size - 2;
  int index2 = 0;
  while(index >= 0)
  {
    word[index2] = string[index];
    index2 += 1;
    index -=1;
  }
}







/*(8)
Unmix My Strings
lPaeesh le pemu mnxit ehess rtnisg! Oh, sorry, 
that was supposed to say: Please help me unmix these strings!

Somehow my strings have all become mixed up; 
every pair of characters has been swapped. 
Help me undo this so I can understand my strings again.

Examples
unmix("123456") ➞ "214365"

unmix("hTsii  s aimex dpus rtni.g") ➞ "This is a mixed up string."

unmix("badce") ➞ "abcde"
Notes
The length of a string can be odd — in this case the last character is not altered 
(as there's nothing to swap it with).*/
void unmix(int size,char string[size])
{
  int temp;
  for(int index = 0; index < size; index += 2)
  {
    temp = string[index];
    string[index] = string[index+1];
    string[index+1] = temp;
  }
  for(int index = 0; index < size; index += 1)
  {
    printf("%c",string[index]);
  }

}







/*(9)
Back and Forth
In a board game, a player may pick up a card with several left or right facing arrows, 
with the number of arrows indicating the number of tiles to move. 
The player should move either left or right, depending on the arrow's direction.

Given an array of the arrows contained on a player's cards, 
return a singular string of arrowheads that are equivalent to all of the arrowheads.

Worked Example
calculateArrowhead([">>", "<<", "<<<"]) ➞ "<<<"
// >> means to move 2 places right
// << means to move 2 places left (cancelling out >>)
// <<< means to move a further 3 places left
// overall, the movement can be written as <<<
Examples
calculateArrowhead([">>>>", "<", "<", "<"]) ➞ ">"

calculateArrowhead([">", "<", ">>", "<", "<<<"]) ➞ "<<"

calculateArrowhead([">>>", "<<<"]) ➞ ""
Notes
Return an empty string if all the arrowheads cancel out*/







/*(10)
CAPS LOCK DAY is over!
October 22nd is CAPS LOCK DAY. Apart from that day, 
every sentence should be lowercase, so write a function to normalize a sentence.
AND VICE VERSA.

Create a function that takes a string. 
If the string is all uppercase characters, 
convert it to lowercase and add an exclamation mark at the end.

Examples
normalize("CAPS LOCK DAY IS OVER") ➞ "Caps lock day is over!"

normalize("Today is not caps lock day.") ➞ "Today is not caps lock day."

normalize("Let us stay calm, no need to panic.") ➞ "Let us stay calm, no need to panic."
Notes
Each string is a sentence and should start with an uppercase character.*/
void normalize(int size,char string[size])
{
  int index = 0;
  while(index < size)
  {
         if(string[index]>=65 && string[index]<=90)  {string[index] += 32; index += 1;}
    else if(string[index]>=97 && string[index]<=122) {string[index] -= 32; index += 1;}
    else   {index += 1;}
  }
  for(int index = 0; index < size; index += 1){printf("%c",string[index]);}
}







/*(11)
Filter Repeating Character Strings
Create a function that keeps only strings with repeating identical characters 
(in other words, it has a set size of 1).

Examples
identicalFilter(["aaaaaa", "bc", "d", "eeee", "xyz"]) 
➞ ["aaaaaa", "d", "eeee"]

identicalFilter(["88", "999", "22", "545", "133"]) 
➞ ["88", "999", "22"]

identicalFilter(["xxxxo", "oxo", "xox", "ooxxoo", "oxo"]) 
➞ []
Notes
A string with a single character is trivially counted as a string with repeating identical characters.
If there are no strings with repeating identical characters, 
return an empty array (see example #3).*/
void identical_filter(int size1, int size2, char string[size1][size2])
{
  
int identical = 1;


for(int index1 = 0; index1 < size1; index1 += 1)
{

for(int index2 = 0; index2 < sizeof(string[index1]) - 2; index2 += 1)
{
if(string[index1][index2] != string[index1][index2+1]){identical = 0;}
}



if(identical == 1)
{
for(int index2 = 0; index2 < size2; index2 += 1)
{printf("%c",string[index1][index2]);}
}


printf("\n");
}

return;
   
}









/*(12)
Basic E-Mail Validation
Create a function that accepts a string, 
checks if it's a valid email address and returns either true or false,
 depending on the evaluation.

The string must contain an @ character.
The string must contain a . character.
The @ must have at least one character in front of it.
e.g. "e@edabit.com" is valid while "@edabit.com" is invalid.
The . and the @ must be in the appropriate places.
e.g. "hello.email@com" is invalid while "john.smith@email.com" is valid.
If the string passes these tests, it's considered a valid email address.

Examples
validateEmail("@gmail.com") ➞ false

validateEmail("hello.gmail@com") ➞ false

validateEmail("gmail") ➞ false

validateEmail("hello@gmail") ➞ false

validateEmail("hello@edabit.com") ➞ true
Notes
Check the Tests tab to see exactly what's being evaluated.
You can solve this challenge with RegEx, but it's intended to be solved with logic.
Solutions using RegEx will be accepted but frowned upon :(*/
void validate_email(int size,char string[size])
{ 
  int valid = 0;
  int a = 0,b = 0;
  for(int index = 0; index < size; index += 1)
  {
    if(string[index] == '@'){a = index; valid += 1;}
    if(string[0] == '@'){valid -= 1;}
    if(string[index] == '.'){b = index; valid += 1;}
    
  
  }
  if(a < b){valid += 1;}
  if(valid == 3){printf("valid");} else {printf("invalid");}
}








/*(13)
Remove All Special Characters from a String
Create a function that takes a string, 
removes all "special" characters (e.g. ., !, @, #, $, %, ^, &, \, *, (, )) 
and returns the new string. 
The only non-alphanumeric characters allowed are dashes -, underscores _ and spaces.

Examples
removeSpecialCharacters("The quick brown fox!") ➞ "The quick brown fox"

removeSpecialCharacters("%fd76$fd(-)6GvKlO.") ➞ "fd76fd-6GvKlO"

removeSpecialCharacters("D0n$c sed 0di0 du1") ➞ "D0nc sed 0di0 du1"*/
void remove_special_characters(int size,char string[size])
{
  for(int index = 0; index < size; index += 1)
  {
    if(string[index] >= 65 && string[index] <= 90 || 
      string[index] >= 97 && string[index] <= 122)       {printf("%c",string[index]);}

if(string[index] >= 48 && string[index] <= 57){printf("%c",string[index]);}
    if(string[index] == ' ' || string[index] == '-'  || string[index] == '_')
    {printf("%c",string[index]);}
  }
}









/*(14)
Recursion: String Palindromes
Write a function that recursively determines if a string is a palindrome.

Examples
isPalindrome("ad") ➞ false

isPalindrome("abcba") ➞ true

isPalindrome("abbbbb") ➞ false
Notes
An empty string counts as a palindrome.*/
void is_palindrome(const int size,char string[size])
{
  int index_first = 0;
  int index_end = size -1;
  while(index_first < size - 1 && index_end >= 0)
  {
     if(string[index_first] != string[index_end]){printf("no"); return;}
     index_first += 1;
     index_end -= 1;
  }
  printf("yes");

}








/*(15)
weaking Letters
Create a function that tweaks letters 
by one forward (+1) or backwards (-1) according to an array.

Examples
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
// "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"

tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"

tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"
Notes
Don't worry about capital letters.*/
void tweak_letters(int size, char string[size], int step[size])
{
  for(int index = 0; index < size; index += 1)
  {
    string[index] += step[index];
    printf("%c",string[index]);
  }
   
}








/*(16)
Find the Odd Integer
Create a function that takes an array and finds the integer which appears an odd number of times.

Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1

findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5

findOdd([10]) ➞ 10
Notes
There will always only be one integer that appears an odd number of times.*/
void find_odd(int size, int numbers[size])
{
  int times[size];
  for(int index = 0;index < size; index += 1){times[index] = 0;}

  for(int index = 0; index < size; index += 1)
  {

  for(int index2 = 0; index2 < size; index2 += 1)
  {
  if(numbers[index] == numbers[index2]){times[index] += 1;}
  }

  }

  for(int index = 0;index < size; index += 1)
  { 
  if(times[index] %2 != 0){printf("%d", numbers[index]); break;}
  }




}










/*(17)
How Many "Prime Numbers" Are There?
Create a function that finds how many prime numbers there are, 
up to the given integer.

Examples
primeNumbers(10) ➞ 4
// 2, 3, 5 and 7

primeNumbers(20) ➞ 8
// 2, 3, 5, 7, 11, 13, 17 and 19

primeNumbers(30) ➞ 10
// 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29*/
void prime_numbers(int number)
{
  int index;
  for(index = 2; index <= number; index += 1)
  {
    if(number % index == 0){break;}
  }
  if(index == number){printf("%d is a prime number",number);}
  
}








/*(18)
create a function that get a remainder of number*/
void get_remainder(int Dividend,int Quotient,int Remainder)
{
  for(int index = 0; index <= (Dividend - Quotient);index += Quotient)
  {index = Dividend - Quotient;}
}








/*(19)
Replace Letters With Position In Alphabet
Create a function that takes a string and replaces each letter 
with its appropriate position in the alphabet. 
"a" is 1, "b" is 2, "c" is 3, etc, etc.

Examples
alphabetIndex("Wow, does that work?")
➞ "23 15 23 4 15 5 19 20 8 1 20 23 15 18 11"

alphabetIndex("The river stole the gods.")
➞ "20 8 5 18 9 22 5 18 19 20 15 12 5 20 8 5 7 15 4 19"

alphabetIndex("We have a lot of rain in June.")
➞ "23 5 8 1 22 5 1 12 15 20 15 6 18 1 9 14 9 14 10 21 14 5"
Notes
If any character in the string isn't a letter, ignore it.*/
void alphabet_index(int size, char word[size])
{

}





/*(20)
Buggy Code
The challenge is to try and fix this buggy code, given the inputs true and false. 
See the examples below for the expected output.

Examples
has_bugs(true) ➞ "sad days"

has_bugs(false) ➞ "it's a good day"
Notes
Don't overthink this challenge (look at the syntax and correct it).

Fix the code in the code tab to pass this challenge (only syntax errors). 
Look at the examples below to get an idea of what the function should do.

Examples
maxNum(3, 7) ➞ 7

maxNum(-1, 0) ➞ 0

maxNum(1000, 400) ➞ 1000
Notes
READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.*/







/*(21)
Initialize
Create a function that takes in an array of full names and returns the initials.

Examples
initialize(["Stephen Hawking"]) ➞ ["S. H."]

initialize(["Harry Potter", "Ron Weasley"]) ➞ ["H. P.", "R. W."]

initialize(["Sherlock Holmes", "John Watson", "Irene Adler"]) ➞ ["S. H.", "J. W.", "I. A."]
Notes
Each initial is followed by a dot.
Names will always be made of two words, separated by a space.*/
void initialize(int size, char word[size])
{
  printf("%c. ",word[0]);
  for(int index = 0;index < size; index += 1)
  {
    if(word[index] == 32){printf("%c.", word[index + 1]);}
  }
}





/*(22)
Tic Tac Toe

Create a function that takes an array of char inputs from a Tic Tac Toe game. 
Inputs will be taken from player1 as "X", player2 as "O", and empty spaces as "#". 
The program will return the winner or tie results.

Examples
ticTacToe([
  ["X", "O", "O"],
  ["O", "X", "O"],
  ["O", "#", "X"]
]) ➞ "Player 1 wins"

ticTacToe([
  ["X", "O", "O"],
  ["O", "X", "O"],
  ["X", "#", "O"]
]) ➞ "Player 2 wins"

ticTacToe([
  ["X", "X", "O"],
  ["O", "X", "O"],
  ["X", "O", "#"]
]) ➞ "It's a Tie"*/
void tic_tac_toe(char game[3][3])
{
  
   /*  if(game[0][0] == game[1][0] && game[1][0] == game[2][0]){printf("%c",game[0][0]);}
else if(game[0][1] == game[1][1] && game[1][1] == game[2][1]){printf("%c",game[0][1]);}
else if(game[0][2] == game[1][2] && game[1][2] == game[2][2]){printf("%c",game[0][2]);}
else if(game[0][0] == game[1][1] && game[2][2] == game[2][2]){printf("%c",game[0][0]);}
else if(game[0][2] == game[1][1] && game[2][0] == game[2][2]){printf("%c",game[0][2]);}
else  
{printf("it is a tie");}*/
 
}





/*(23)
Digits Battle!
Starting from the left side of an integer, adjacent digits pair up in "battle" and the larger digit wins. If two digits are the same, they both lose. A lone digit automatically wins.

Create a function that returns the victorious digits.

To illustrate:

battleOutcome(578921445) ➞ 7925
// [57]: 7 wins; [89] 9 wins; [21] 2 wins; 
// [44] neither wins; 5 (automatically) wins
Examples
battleOutcome(32531) ➞ 351
// 3 deffeats 2, 5 defeats 3, 1 is a single.

battleOutcome(111) ➞ 1
// 1 and 1 tie, so neither move on, last 1 is a single.

battleOutcome(78925) ➞ 895
Notes
There are no winners in a battle with equal digits (neither should be printed).
If the length of the number is odd, the lone digit should be printed at the end of the number.*/
int product(int base,int exponent)
{
  int result = 1; 
  for(int index = 1; index <= exponent; index += 1){result *= base;}
  return result;
}

void battle_Outcome(int number)
{
   
  int copy = number;
  int digit_number = 0;
  while (copy > 1)
  {
    copy /= 10;
    digit_number += 1;
  }
  
  copy = number;
  int digits[digit_number];
   
  int exponent = digit_number - 1;

  int difference;
  for(int index = 0; index < digit_number; index += 1)
  {
    difference = copy;
    copy /= product(10,exponent);

    digits[index] = copy;
    if(digits[index] < 0){digits[index] *= -1;}

    copy *= product(10,exponent);
    copy += (-1 * difference);
    exponent -= 1;
  }


  for(int index = 0;index < digit_number;index += 1)
  {

        printf("%d\n",*(digits + index));
  }


   

  for(int index = 0;index < digit_number;index += 2)
  {

    if(digits[index] > digits[index + 1])
    {
      printf("%d",digits[index]);
    }
    else {printf("%d",digits[index + 1]);}
  }

}






/*(24)
Letters Shared Between Two Words
Create a function that returns the number of characters shared between two words.

Examples
sharedLetters("apple", "meaty") ➞ 2
// Since "ea" is shared between "apple" and "meaty".

sharedLetters("fan", "forsook") ➞ 1

sharedLetters("spout", "shout") ➞ 4
*/
void shared_Letters(const int size,char word1[size],char word2[size])
{
  int shared_letter = 0;
  for(int index1 = 0; index1 < size; index1 += 1)
  {
    for(int index2 = 0; index2 < size; index2 += 1)
    {
      if(word1[index1] == word2[index2])
      {
        printf("%c",word1[index1]);
        shared_letter   +=  1;
      }
    }
  }
  printf("\n%d",shared_letter);
}






/*(25)
Number of Two or More Consecutive Ones
Create a function that counts the number of blocks of two or more adjacent 1s in an array.

Examples
countOnes([1, 0, 0, 1, 1, 0, 1, 1, 1]) ➞ 2
// Two instances: [1, 1] (middle) and [1, 1, 1] (end)

countOnes([1, 0, 1, 0, 1, 0, 1, 0]) ➞ 0

countOnes([1, 1, 1, 1, 0, 0, 0, 0]) ➞ 1

countOnes([0, 0, 0]) ➞ 0
Notes
A single 1 by itself (surrounded by a zero on its left and right), 
does not count towards the total (see first example).
Each input will contain only zeroes and ones.*/
void count_Ones(const int size,int numbers[size])
{
  int ones = 0;
  for(int index = 0; index < size; index += 1)
  {
    if(numbers[index] == 1 && numbers[index - 1] != 1)
    {
      if(numbers[index + 1] == 1){ones += 1;}
    }
    else {continue;}
  }
  printf("%d",ones);
}







/*(26)
two sum 

Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?*/
void two_sum(const int size,int numbers[size],int target)
{
    int first = 0, second = 0;
    for(int index = 0;index < size; index += 1)
    {
        if(numbers[index] + numbers[index + 1] == target){first = index; second = index + 1;}
    }
    printf("%d\n%d",first,second);

}



/*(27)
Palindrome Number

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Constraints:

-231 <= x <= 231 - 1
Follow up: Could you solve it without converting the integer to a string?*/
void palindrome_number(int number)
{
  int copy = number;
  int digit_number = 0;
  while (copy > 1)
  {
    copy /= 10;
    digit_number += 1;
  }
  
  copy = number;
  int digits[digit_number];
   
  int exponent = digit_number - 1;

  int difference;
  for(int index = 0; index < digit_number; index += 1)
  {
    difference = copy;
    copy /= product(10,exponent);

    digits[index] = copy;
    if(digits[index] < 0){digits[index] *= -1;}

    copy *= product(10,exponent);
    copy += (-1 * difference);
    exponent -= 1;
  }

  int is_palindrome = 1;
  int index1 = 0, index2 = 0;
  while(index1 < digit_number && index2 >= 0)
  {
    if(digits[index1] != digits[index2]){is_palindrome = 0;}
    index1 += 1; index2 -= 1;
  }
  if(is_palindrome == 1){printf("yes");} else {printf("no");}
  
}





/*(28)
Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 
12 is written as XII, which is simply X + II. The number 27 is written as XXVII, 
which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. 
However, the numeral for four is not IIII. Instead, the number four is written as IV. 
Because the one is before the five we subtract it making four. 
The same principle applies to the number nine, which is written as IX. 
There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].*/








/*(29)
 
Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.*/
void longet_prefix(const int size, char words[size][size],char prefix[size])
{
    for(int index1 = 0; index1 < size; index1 += 1)
    {
      for(int index2 = 0; index2 < size; index2 += 1)
      {
        if(words[index2][index1] == words[index2 + 1][index1])
      }
    }
}




















int main()
{


//(1)
//int size = 0;
//count_string("hello world",size);






//(2)
//char word[] = "hello"; int size = 6;
// double_swap(size,word,'l','o');







/*(3)
int size = 10;
char string[] = "*PP*RC*S*";
char vowels[]   = "UEAE";
char sentence[size];
uncensor(size,string,vowels,sentence);
for(int index = 0; index < size; index +=1){printf("%c",sentence[index]);}*/








//(4)
//int size = 37;
//char string[] = "YFemHUFBbezFBYzFBYLleGBYEFGBMENTment";
//int size2 = 0;
//char word[size2];
//detect_word(size,string,word);
//for(int index = 0; word[index] != '\0'; index +=1){printf("%c",word[index]);}






//(5)
//int is = 0;
//int size = 5;
//char string[] = "tttt";
//alpha_number(is,size,string);






//(6)
//int size = 8; 
//char string[] = " ";
//int mm = 0;
//wormlength(size,string,mm);





//(7)
//int size = 6;
//char string[] = "hello";
//char word[size];
//reverse(size,string,word);
//for(int index=0; index < size;index+=1){printf("%c",word[index]);}






//(8)
//int size = 7;
//char string[] = "123456";
//unmix(size,string);




//(9)unsolved




//(10)
//int size = 22;
//char string[] = "CAPS lock DAY is OVER";
//normalize(size,string);






//(11) unsolved
//const int size1 = 6,size2 = 7;
//char string[size1][size2] = {"aaaaaa", "cc", "ddddd", "eeee", "zzzzzz"};
//identical_filter(size1,size2,string); 






//(12)
//int size = 12;
//char string[] = "t@edabit.com";
//validate_email(size,string);





//(13)
//int size = 22;
//char string[] = "D0n$c sed 0di0 du1";
//remove_special_characters(size,string);






//(14)
//const int size = 3;
//char string [] = "aac";
//is_palindrome(size,string);




//(15)
//int size = 4;
//char string[] = "many";
//int step[] = {0, 0, 0, -1};
//tweak_letters(size,string,step);





//(16)
//const int size = 13;
//int numbers[] = {20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5};
//find_odd(size,numbers);






//(17)
//prime_numbers(4);



//(18)unsolved





//(19)unsolved





//(20)unsloved




//(21) unsolved




/*(22)unsolved
char game[3][3] = 
{
  {'x', 'O', 'O'},
  {'O', 'X', 'O'},
  {'X', '#', 'O'}
};

tic_tac_toe(game);
*/



//(23)
//battle_Outcome(4895634);




//(24)
//int size = 6;
//char word1[] = "apple";
//char word2[] = "meaty";
//shared_Letters(size,word1,word2);




//(25)
//const int size = 9;
//int numbers[] = {1, 0, 0, 1, 1, 0, 1, 1, 1};
//count_Ones(size,numbers);


//(26)
//const int size = 4;
//int numbers[] = {2,7,11,15};
//two_sum(size,numbers,26);


//(27)
//palindrome_number(43566534);

//(28)unsolved
//Roman_Integer(1994);




} 
