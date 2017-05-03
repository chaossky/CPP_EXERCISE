#include<iostream>

class Vector2D {
public:
	float x_, y_;
	Vector2D()
		:x_(0.0f), y_(0.0f)
	{}

	Vector2D(const float& _x, const float& _y)
		:x_(_x), y_(_y)
	{}

	void print()
	{
		printf("%f %f\n", x_, y_);
	}

	friend std::ostream& operator << (std::ostream& stream, const Vector2D& vec)
	{
		std::cout << vec.x_ << " " << vec.y_ << std::endl;

		return stream;
	}


};

void main() {
	Vector2D my_vector(1.1f, 2.2f);

	my_vector.print();

	std::cout << "" << std::endl;
	std::cout << my_vector << std::endl;
 
}