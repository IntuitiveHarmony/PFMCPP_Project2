#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
    int
    float
    bool
    double
    char
    void
    wchar_t    
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int number2 = 5;
    int number3 = 8;
    float f1 = 5.0f;
    float f2 = 7.89f;
    float f3 = 0.24f;
    bool b1 = true;
    bool b2 = false;
    bool b3 = true;
    double d1 = 200.34589;
    double d2 = 10045.686894;
    double d3 = 23E45;
    char c1 = 'H';
    char c2 = 'W';
    char c3 = '!';
    

    
    ignoreUnused(number, number2, number3, f1, f2, f3, b1, b2, b3, d1, d2, d3, c1, c2, c3); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addTheNumbers(int num1, int num2, int num3 = 2)
{
    ignoreUnused(num1, num2, num3);
    return{};
}
/*
 2)
 */
bool openDoor(bool needToOpen, bool isLocked = true)
{
    ignoreUnused(isLocked, needToOpen);
    return{};
}
/*
 3)
 */
int findRemainingDistance(int MPG, int fuel = 12)
{
    ignoreUnused(fuel, MPG);
    return{};
}
/*
 4)
 */
bool sendGreeting(bool firstName, bool lastName)
{
    ignoreUnused(firstName, lastName);
    return{};
}
/*
 5)
 */
double findCircumference(float radius, double pi = 3.1415926)
{
    ignoreUnused(pi, radius);
    return{};
}
/*
 6)
 */
int getArea(int width, int height, int length = 5)
{
    ignoreUnused(length, width, height);
    return{};
}
/*
 7)
 */
bool isCooked(int time, int temp = 350)
{
    ignoreUnused(temp, time);
    return{};
}
/*
 8)
 */
int getSpeed(int time, int distance = 60) 
{
    ignoreUnused(distance, time);
    return{};
}
/*
 9)
 */
char sendAlert(bool condition1, bool condition2, bool condition3 = false)
{
    ignoreUnused(condition1, condition2, condition3);
    return{};
}
/*
 10)
 */
int estimateAverage(int sum, int num = 45)
{
    ignoreUnused(sum, num);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto numbersAdded = addTheNumbers(5, 8, 1);
    //2)
    auto openedDoor = openDoor(true, false);
    //3)
    auto distance = findRemainingDistance(11, 0);
    //4)
    auto greet = sendGreeting(true, false);
    //5)
    auto myCir = findCircumference(2);
    //6)
    auto myArea = getArea(5, 7, 9);
    //7)
    auto cooked = isCooked(50, 425);
    //8)
    auto mySpeed = getSpeed(40,40);
    //9)
    auto warning = sendAlert(true, true, true);
    //10)
    auto myAverage = estimateAverage(30, 30);
    
    ignoreUnused(carRented, numbersAdded, openedDoor, distance, greet, myCir, myArea, cooked, mySpeed, warning, myAverage);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
