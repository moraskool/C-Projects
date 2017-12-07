#ifndef RECTANGLE_H_
#define RECTANGLE_H_

using namespace std;
/**Rectangle is a class that represents a 4-sided shape**/
class Rectangle{
public:
	// Constructors
	/** Construct a rectangle with given values.
	@param length The given length
	@param width The family width
	*/
	Rectangle(float length, float width) :
		given_length(length), given_width(width){}

	/**Construct a default rectangel**/
	Rectangle() : given_length(1.00), given_width(1.00){}

	//Modifier functions

	/**sets the given_length field
	@param given The given name
	**/
	void setlength(const float& length){
		given_length = length;
	}

	/**sets the given_width field
	@param given The given width
	**/
	void setwidth(const float& width){
		given_width = width;
	}

	//Accessor functions

	/*Gets the rectangle's length
	@return the given length as a float
	*/
	float getlength() const{ return given_length; }

	/*Gets the rectangle's width
	@return the given width as a float
	*/
	float getwidth() const{ return given_width; }

	// other functions
	/** Calculates the perimeter.
	@param the rectangle object
	@returns the product of 2 times the sum of length
	and width of the rectangle object*/

	float perimeter();

	/** Calculates the area.
	@param the rectangle object
	@returns the product of length and width of
	the Rectangle object*/

	float area();

	/** display the length and width.
	@param the given length and the given width
	@ displays the  length and width of the object*/

	void show();

	/** Compares two Rectangle object for equality.
	@param the given length and the given width
	@ returns true if area of first object is equal to area
	of the second. Else, returns false*/

	bool sameArea(Rectangle& rect);


private:
	//Data fields
	/**The given length */
	float given_length;
	/** The given width */
	float given_width;
};

#endif;

