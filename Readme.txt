###################################################
#Coded By: Andrew Miller                          #
#Math Library For C++                             #
###################################################

Installation Instructions:
(Visual Studio)

- Find the project you would like to include the library in.
- Now take the MathLibrary folder and bring it into the solution directory of your project folder.
- Open up your project and go to your projects properties page.
- Click on the arrow next to the C/C++ tab, then click on the General tab.
- Under "Additional Include Direrctories", type in the file path to the Math Library folder OR
  type this $(SolutionDir)MathLibrary. Now click Apply.
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

Code is commented to allow the user to see function and variables functionality.



