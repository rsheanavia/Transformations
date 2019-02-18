#include <iostream>

using namespace std;
int x, y;

void Rotate(int new_x, int new_y) {
	int degrees;

	cout << "Select the clockwise degree of the rotation: 90, 180, 270" << endl;
	cin >> degrees;
	switch (degrees) {
	case 90:
		new_x = y;
		new_y = -x;

		cout << "Your new ordered pair is: (" << new_x << "," << new_y << ")\n";
		break;
	case 180:
		new_x = -x;
		new_y = -y;
		
		cout << "Your new ordered pair is: (" << new_x << "," << new_y << ")\n";
		break;
	case 270:
		new_x = -y;
		new_y = x;
		cout << "Your new ordered pair is: (" << new_x << "," << new_y << ")\n";
		
		break;
	default: cout << "ERROR! Degree not found. Please enter 90, 180, or 270.\n";
	}
}
	
	void Reflect(int x1, int y1) 
	{
		int choice; 
		cout << "Select the desired Reflection:\n" << "1. Reflect about the X-axis\n" << "2. Reflect about the Y-axis\n" << "3. Reflect over Y=X\n"
			<< "4. Reflect about the origin\n";
		cin >> choice; 
		switch (choice) {
		case 1:
			x1 = x;
			y1 = -y;
			cout << "Your new ordered pair is: (" << x1 << "," << y1 << ")\n";
			break; 
		case 2:
			x1 = -x; 
			y1 = y; 
			cout << "Your new ordered pair is: (" << x1 << "," << y1 << ")\n";
			break;
		case 3:
			x1 = y;
			y1 = x; 
			cout << "Your new ordered pair is: (" << x1 << "," << y1 << ")\n";
			break;
		case 4:
			x1 = -x;
			y1 = -y;
			cout << "Your new ordered pair is: (" << x1 << "," << y1 << ")\n";
			break; 
		default:
			cout << "ERROR! Please enter a value 1-4"; 
		}
	}
	void Translation(int x2, int y2) {
		int h, k;
		
		cout << "Enter a positive (Shift right) or negative (Shift left) value for H:\n";
		cin >> h; 
		x2 = x + h;
		cout << "Enter a positive (Shift up) or negative (Shift down) value for K:\n";
		cin >> k; 
		y2 = y + k; 
		cout << "Your new ordered pair is: (" << x2 << "," << y2 << ")\n";
	}

	int main()
	{
		int selection; 
		cout << "Enter a value for X: " << endl; 
		cin >> x; 
		cout << "Enter a value for Y: " << endl; 
		cin >> y;

		cout << "Select which Transformation you would like to use:\n" << "1. Rotation\n" << "2. Reflection\n" << "3. Translation\n";
		cin >> selection;

		switch (selection) {
		case 1: 
			Rotate(x, y);
			break; 
		case 2:
			Reflect(x, y);
			break;
		case 3:
			Translation(x, y);
			break;
		default:
			cout << "ERROR! Please enter a value 1-3";
		}
		
		system("pause");
		return 0;
	}


