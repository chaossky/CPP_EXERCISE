#include<iostream>

template<class TT>
class Vector2D {
public:
	TT x_, y_;
	Vector2D()
		:x_(0.0f), y_(0.0f)
	{}

	Vector2D(const TT& _x, const TT& _y)
		:x_(_x), y_(_y)
	{}

	TT getMagnitude() {
		return sqrt(x_*x_+y_*y_)
	}
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
	Vector2D<float> my_vector(1.1f, 2.2f);
	Vector2D<double> my_double(3.3, 4.4);
	Vector2D<int> my_int(5.5, 6.6);

	// my_vector.print();

	std::cout << "" << std::endl;
	std::cout << my_vector << std::endl;
	std::cout << my_double << std::endl;
	std::cout << my_int << std::endl;

	std::cout << my_vector.getMagnitude() << std::endl;

 
}