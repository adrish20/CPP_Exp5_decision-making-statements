<h1>Aim</h1>
<p>To study and implement C++ decision making statements</p>
<hr>
<h1>Software Used</h1>
<p>VS code</p>
<hr>
<h1>Theory</h1>
<p>In C++, decision making statements are basic forms through which the input program can be controlled with different alternatives depending on a number of conditions. These statements such as `if `, `else if ` and `switch ` help the program decide on what path to follow based on the input or conditions. In the practical part, we created a calculator for performing basic calculations, where switch is used to select the type of the operation. Further, we had designed a program to find out the largest of three numbers that will solve the problem of comparison by using the nested ‘if- else’ statements. We also developed the odd/even number checker and here the program determines it through the use of modulus operator. Another example was a program of asking whether a given character is a vowel or a consonant using `if-else’ statement. Last of all, we created a function that translates a number to the name of the corresponding day of the week with the help of `switch-case` statement.</p>
<hr>
<h1>Algorithms</h1>
<h2>Vowel Consonant Checker</h2>
<ol>
  <li>Start.</li>
  <li>Initialise: Declare a char variable letter.</li>
  <li>Input:Take a letter as input from user and store it in letter variable.</li>
  <li>Decision Making: If the letter is one of a,e,i,o,u then print the character is vowel; else print it is a consonant.</li>
  <li>End.</li>
</ol>
<hr>
<h2>Weekday Checker</h2>
<ol>
  <li>Start.</li>
  <li>Initialise a variable num.</li>
  <li>Take any number from 1 to 7 as input and store it in num.</li>
  <li>Switch Case:
  <ul>
    <li>Case1: If num is 1, print Sunday</li>
    <li>Case2: If num is 2, print Monday</li>
    <li>Case3: If num is 3, print Tuesday</li>
    <li>Case4: If num is 4, print Wednesday</li>
    <li>Case5: If num is 5, print Thursday</li>
    <li>Case6: If num is 6, print Friday</li>
    <li>Case7: If num is 7, print Saturday</li>
    <li>Default: Invalid input</li>
  </ul>
  </li>
  <li>End.</li>
</ol>
<hr>
<h2>Calculator using Switch Statement</h2>
<ol>
  <li>Start.</li>
  <li>Initialize variables choice, ans, sum, difference, product, division, num1, num2</li>
  <li>Take two numbers as input from user and store it in num1 and num2.</li>
  <li>Prompt the user to enter an operation which could be (=,-,*,/) and store it in choice.</li>
  <li>Start a while loop
  <ol>
    <li>
      Switch Choice
    <ul>
      <li>Case1: If choice is '+' then calculate sum and display the result.</li>
      <li>Case2: If choice is '-' the calculate the difference and display the result.</li>
      <li>Case3: If choice is '*' then calculate the product and display the result.</li>
      <li>Case4: If choice is '/' then calculate the division and display the result.</li>
      <li>Default: Invalid operator.</li>
    </ul>
    </li>
    <li>Ask the user if they want to enter more numbers and store the answer in ans variable.</li>
    <li>If ans is 'y' then repeat steps 3 and 4; else exit the loop.</li>
  </ol>
  </li>
  <li>End.</li>
</ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, decision making statements in C++ are important to develop a flexible and useful program on the computer. In this experiment, we illustrated how uses of different control statements like `if-else’ and ‘switch’ help to effectively implement several conditions such as addition, subtraction, comparison, and many more, highlighting the need of good flow control mechanism in building robust software programs.</p>
