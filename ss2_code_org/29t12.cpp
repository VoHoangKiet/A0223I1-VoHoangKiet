#include<iostream>

using namespace std;

class Thing {
	public:
		Thing() {
			count++;
		}
		~Thing() {
			count--;
		}
		
		int x;
		int y;
		static int count;
		static int getcount() { return count;
		} 
};
int Thing::count = 0;
int main() {
	int x;
	Thing t1;
	Thing t2;
	Thing t3;
	x = Thing::getcount();
	cout<<x;
	
	return 0;
}
