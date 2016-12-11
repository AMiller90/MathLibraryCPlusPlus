#ifndef _VECTOR3_H_
#define _VECTOR3_H_

/// <summary>
/// Class for creating Vector3 objects
/// </summary>
template<typename T>
class Vector3
{

public: 
	/// <summary>
	/// The Constructor - T will define the type
	/// </summary>
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
	
	//Variables for coordinates
	T x;
	T y;
	T z;
};




#endif _VECTOR3_H_

//Constructor
template<typename T>
Vector3<T>::Vector3()
{


}

//Overloaded Constructor
template<typename T>
Vector3<T>::Vector3(T X, T Y, T Z)
{//Initialize variables to passed in coordinates
	x = X;
	y = Y;
	z = Z;


}
//Destructor
template<typename T>
Vector3<T>::~Vector3()
{


}

//Add Vectors
template<typename T>
Vector3<T> operator +(Vector3<T> &a,Vector3<T> &b)
{
	//New Vector variable
	Vector3<T> c;
	//Add each x coordinate of 2 passed in vectors then store value into x value of new vector
	c.x = a.x + b.x;
	//Add each y coordinate of 2 passed in vectors then store value into y value of new vector
	c.y = a.y + b.y;
	//Add each z coordinate of 2 passed in vectors then store value into z value of new vector
	c.z = a.z + b.z;
	//Return new vector
	return c;
}

//Subtract Vectors
template<typename T>
Vector3<T> operator -(Vector3<T> &a, Vector3<T> &b)
{
    //New Vector variable
	Vector3<T> c;
	//Subtract each x coordinate of 2 passed in vectors then store value into x value of new vector
	c.x = a.x - b.x;
	//Subtract each y coordinate of 2 passed in vectors then store value into y value of new vector
	c.y = a.y - b.y;
	//Subtract each z coordinate of 2 passed in vectors then store value into z value of new vector
	c.z = a.z - b.z;
	//Return new vector
	return c;
}

//Multiply Vectors
template<typename T>
Vector3<T> operator *(Vector3<T> &a, Vector3<T> &b)
{//New Vector variable
	Vector3<T> c;
	//Square each x coordinate of 2 passed in vectors then store value into x value of new vector
	c.x = a.x * b.x;
	//Square each y coordinate of 2 passed in vectors then store value into y value of new vector
	c.y = a.y * b.y;
	//Square each z coordinate of 2 passed in vectors then store value into z value of new vector
	c.z = a.z * b.z;
	//Return new vector
	return c;

}

//Divide Vectors
template<typename T>
Vector3<T> operator /(Vector3<T> &a, Vector3<T> &b)
{//New Vector variable
	Vector3<T> c;

	//Check is either vector is going to have a 0 in their x or y components
	if (a.x == 0 || a.y == 0 || a.z == 0)
	{//Print Error Message
		std::cout << "Error! Can't Divide By 0\n";
		//If so then just return the vectors
		return Vector3<T>(a.x, a.y, a.z);
	}
	//Check is either vector is going to have a 0 in their x or y components
	if (b.x == 0 || b.y == 0 || b.z == 0)
	{//Print Error Message
		std::cout << "Error! Can't Divide By 0\n";
		//If so then just return the vectors
		return Vector3<T>(b.x, b.y, b.z);
	}

	//Divide each x coordinate of 2 passed in vectors then store value into x value of new vector
	c.x = a.x / b.x;
	//Divide each y coordinate of 2 passed in vectors then store value into y value of new vector
	c.y = a.y / b.y;
	//Divide each y coordinate of 2 passed in vectors then store value into z value of new vector
	c.z = a.z / b.z;

	//Return new vector
	return c;
}

//Modulus Vectors
template<typename T>
Vector3<T> operator %(Vector3<T> &a, Vector3<T> &b)
{//New Vector variable
	Vector3<T> c;

	//Check is either vector is going to have a 0 in their x or y components
	if (a.x == 0 || a.y == 0 || a.z == 0)
	{//Print Error Message
		std::cout << "Error! Can't Divide By 0\n";
		//If so then just return the vectors
		return Vector3<T>(a.x, a.y, a.z);
	}
	//Check is either vector is going to have a 0 in their x or y components
	if (b.x == 0 || b.y == 0 || b.z == 0)
	{//Print Error Message
		std::cout << "Error! Can't Divide By 0\n";
		//If so then just return the vectors
		return Vector3<T>(b.x, b.y, b.z);
	}

	//Divide each x coordinate of 2 passed in vectors then store remainder value into x value of new vector
	c.x = a.x % b.x;
	//Divide each y coordinate of 2 passed in vectors then store remainder value into y value of new vector
	c.y = a.y % b.y;
	//Divide each y coordinate of 2 passed in vectors then store value into z value of new vector
	c.z = a.z % b.z;

	//Return new vector
	return c;
}

//Magnitude of Vectors
template<typename T>
T Vector3<T>::Mag(Vector3<T> &a)
{//Variable used to store squared values of passed in vector values
	T Asquared;
	//Variable to hold square root value
	T Asqrt;
	//Square each coordinate and all together then store into new variable
	Asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
	//Get the square root of the variable and store into a new variable
	Asqrt = SquareRoot(Asquared);

	//Return Magnitude as a float to be more precise
	return Asqrt;

}

//Normalise Vector
template<typename T>
Vector3<T> Vector3<T>::Normalise(Vector3<T> &a)
{//New Vector variable
	Vector3 c;
	//Variable used to store squared values of passed in vector values
	T Asquared;
	//Variable to hold square root value
	T Asqrt;

	//Square each coordinate and all together then store into new variable
	Asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z);

	//Get the square root of the variable and store into a new variable
	Asqrt = SquareRoot(Asquared);
	//Divide passed in x value by the square root value and get the new value and store it into x of new vector
	c.x = (a.x / Asqrt);
	//Divide passed in y value by the square root value and get the new value and store it into y of new vector
	c.y = (a.y / Asqrt);
	//Divide passed in z value by the square root value and get the new value and store it into z of new vector
	c.z = (a.z / Asqrt);

	//Return the normalised vector
	return c;

}

//Dot Product Vector
template<typename T>
T Vector3<T>::Dot(Vector3<T> &a, Vector3<T> &b)
{//Multiply the passed in x values and the y values then add them together and return the product
	return (a.x * b.x ) + (a.y * b.y) + (a.z * b.z);

}

//Cross Product Vector
template<typename T>
Vector3<T> Vector3<T>::Cross(Vector3<T> &a, Vector3<T> &b)
{//Variable just used for temporary purposes
	Vector3 c;
	//Variable just used for temporary purposes
	Vector3 t;
	//Variable to store the Cross product 
	Vector3 Cross;
	//Multiply values then store in x values
	c.x = a.y * b.z;
	t.x = a.z * b.y;
	//Subtract the products and store new value in x of new vector
	Cross.x = c.x - t.x;
	//Multiply values then store in y values
	c.y = a.z * b.x;
	t.y = a.x * b.z;
	//Subtract the products and store new value in y of new vector
	Cross.y = c.y - t.y;
	//Multiply values then store in z values
	c.z = a.x * b.y;
	t.z = a.y * b.x;
	//Subtract the products and store new value in z of new vector
	Cross.z = c.z - t.z;
	//Return cross product
	return Cross;

}

////Function used to calculate the square root of passed in variable
template<typename T>
T Vector3<T>::SquareRoot(T &num)
{//Dynamic Checks At Runtime for data type
	T d_a = num;
	//if num entered is greater than or equal to 0
	if (d_a >= 0)
	{//set variable to num
		T d_x = num;
		//create a new variable
		int i;
		//Each time i is incremented
		for (i = 0; i < 20; i++)
		{//run this math equation
			d_x = (((d_x * d_x) + num) / (2 * d_x));
		}
		//returns the new x value
		return d_x;
	}
	//returns num
	return num;
}