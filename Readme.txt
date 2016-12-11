###################################################
#Coded By: Andrew Miller                          #
#Math Library For C++                             #
###################################################

Installation Instructions:
(Visual Studio)

- Find the project you would like to include the library in.
- Now take the MathLibrary folder and bring it into the solution directory of your project folder.
- Open up your project and go to your projects properties page.
- Click on "VC++ Directories", now under "Library Directories", type in the file path to the Math Library folder 
  OR type this $(SolutionDir)MathLibrary. This path needs to lead to the .lib file.
- Click on the arrow next to the C/C++ tab, then click on the General tab.
- Under "Additional Include Direrctories", type in the file path to the Math Library folder OR
  type this $(SolutionDir)MathLibrary. Now click Apply. This path needs to lead to the header files.
- Click on the arrow next to the Linker Tab, then click on Input tab.
- Under the "Additional Dependancies" tab, type in the name of the .lib file.
- Type in MathLibrary.lib; Then click apply.

Referencing files:
- When inside the project, if installed correctly, you can now reference the header files in the library.
- Simply type in #include "insert class name here", at the top of your file.
  
Current Classes Useable:
Color.h - Create color objects. Templated class.
Vector2.h - Create vector2 objects. Templated class.
Vector3.h - Create vector3 objects. Templated class.
MathFuncs.h - This is a class with static functions for providing some math functionality.

Color.h 

Functions:
/// The Constructor - T will define the type
Color<T>();

///<summary>
///Overloaded Constructor
///<para></para>
///<remarks><paramref name=" R"></paramref> -The r value</remarks>
///<para></para>
///<remarks><paramref name=" G"></paramref> -The g value</remarks>
///<para></para>
///<remarks><paramref name=" B"></paramref> -The b value</remarks>
///<para></para>
///<remarks><paramref name=" A"></paramref> -The a value</remarks>
///</summary>
Color<T>(T R, T G, T B, T A);

/// The Destructor - T will define the type
~Color<T>();

///<summary>
///Magnitude of the vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to get the magnitude of</remarks>
///</summary>
T Mag(Color<T> &a);

///<summary>
///Normalize a vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to normalise</remarks>
///</summary>
Color<T> Normalise(Color<T> &a);

///<summary>
///Dot product of 2 vectors
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The first vector</remarks>
///<para></para>
///<remarks><paramref name=" &b"></paramref> -The second vector</remarks>
///</summary>
T Dot(Color<T> &a, Color<T> &b);

///<summary>
///Squareroot of a number
///<para></para>
///<remarks><paramref name=" &num"></paramref> -The number to get the square root of</remarks>
///</summary>
T SquareRoot(T &num);

///<summary>
///Convert to hexadecimal
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The array to convert to hexadecimal</remarks>
///</summary>
Color<T> HexConv(char[8]);

Vector2.h

Functions:
/// The Constructor - T will define the type
Vector2<T>();

///<summary>
///Overloaded Constructor
///<para></para>
///<remarks><paramref name=" x"></paramref> -The x value</remarks>
///<para></para>
///<remarks><paramref name=" y"></paramref> -The y value</remarks>
///</summary>
Vector2<T>(T x, T y);

/// <summary>
/// The Destructor - T will define the type
/// </summary>
~Vector2<T>();

///<summary>
///Magnitude of the vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to get the magnitude of</remarks>
///</summary>
T Mag(Vector2<T> &a);

///<summary>
///Normalize a vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to normalise</remarks>
///</summary>
Vector2<T>Normalise(Vector2<T> &a);

///<summary>
///Dot product of 2 vectors
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The first vector</remarks>
///<para></para>
///<remarks><paramref name=" &b"></paramref> -The second vector</remarks>
///</summary>
T Dot(Vector2<T> &a, Vector2<T> &b);

///<summary>
///Squareroot of a number
///<para></para>
///<remarks><paramref name=" &num"></paramref> -The number to get the square root of</remarks>
///</summary>
T SquareRoot(T &num);

Vector3.h

Functions:
/// The Constructor - T will define the type
Vector3<T>();

///<summary>
///Overloaded Constructor
///<para></para>
///<remarks><paramref name=" x"></paramref> -The x value</remarks>
///<para></para>
///<remarks><paramref name=" y"></paramref> -The y value</remarks>
///<para></para>
///<remarks><paramref name=" z"></paramref> -The z value</remarks>
///</summary>
Vector3<T>(T x, T y, T z);

/// <summary>
/// The Destructor - T will define the type
/// </summary>
~Vector3<T>();

///<summary>
///Magnitude of the vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to get the magnitude of</remarks>
///</summary>
T Mag(Vector3<T> &a);

///<summary>
///Normalize a vector
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The vector to normalise</remarks>
///</summary>
Vector3<T> Normalise(Vector3<T> &a);

///<summary>
///Dot product of 2 vectors
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The first vector</remarks>
///<para></para>
///<remarks><paramref name=" &b"></paramref> -The second vector</remarks>
///</summary>
T Dot(Vector3<T> &a, Vector3<T> &b);

///<summary>
///Cross product of 2 vectors
///<para></para>
///<remarks><paramref name=" &a"></paramref> -The first vector to use</remarks>
///<para></para>
///<remarks><paramref name=" &b"></paramref> -The second vector to use</remarks>
///</summary>
Vector3<T> Cross(Vector3<T> &a, Vector3<T> &b);

///<summary>
///Squareroot of a number
///<para></para>
///<remarks><paramref name=" &num"></paramref> -The number to get the square root of</remarks>
///</summary>
T SquareRoot(T &num);

MathFuncs.h

Functions:
///<summary>
///Factorial of a number
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to get the factorial of</remarks>
///</summary>
static int Factorial(int number);

///<summary>
///Is the number prime
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to check if prime</remarks>
///</summary>
static bool IsPrimeNumber(int &number);

///<summary>
///Is the number even
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to check if even</remarks>
///</summary>
static bool IsEvenNumber(int &number);

///<summary>
///Is the number odd
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to check if odd</remarks>
///</summary>
static bool IsOddNumber(int &number);

///<summary>
///Get the power of a number
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to get the power of</remarks>
///<para></para>
///<remarks><paramref name=" exponent"></paramref> -The exponent to multiply by</remarks>
///</summary>
static int Power(int &number, int &exponent);

///<summary>
///Sqaureroot of a number
///<para></para>
///<remarks><paramref name=" number"></paramref> -The number to get the square root of</remarks>
///</summary>
static float SquareRoot(int &number);
	

Code is commented to allow the user to see function and variables functionality.



