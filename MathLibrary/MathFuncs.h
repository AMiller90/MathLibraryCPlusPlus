#ifndef MATHFUNCS_H_
#define MATHFUNCS_H_

///<summary>
///MathFuncs is a class with static functions for doing math
///</summary>
class MathFuncs
{
public:
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

private:
	MathFuncs();
	~MathFuncs();
	static int factorial;
};
#endif;
