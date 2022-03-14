#include <iostream>
using namespace std;

class camera {
  
protected:	int pixels;

public: camera():pixels(64){}
	void display()
{
	cout << "Display camera \n";
}
};

class mp3 {
protected:	int pixels;

public: mp3():pixels(100) {}
		 void display()
	{
		cout << "Display playing song \n";
	}
};

class radio {
public: void display()
{
	cout << "Display old song \n";
}
};
class phone : public camera, public mp3, public radio {

public: void display() {
	mp3::display();  radio::display(); camera::display();}
		int getpixels() {  return mp3::pixels; }

};

int main()
{

	phone ip;
	ip.mp3::display();
	ip.camera::display();
	ip.radio::display();
	//ip.display();// ambiguos call
	ip.display();

	cout << ip.getpixels() << endl;

	return 0;

}
