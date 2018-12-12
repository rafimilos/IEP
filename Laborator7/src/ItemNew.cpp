#include<iostream>
#include<memory>

using namespace std;

class ItemNew{

private :
	int itvalue;

public :
	ItemNew(int value){
		itvalue = value;
		cout<<"Value changed in " << value << endl;
	}
	
	~ItemNew(){
		cout<<"In destructor"<< endl;
	}

};

int main(){

	auto_ptr<ItemNew> pInv(new ItemNew(80));

return 0;
}
