#include <iostream>
using namespace std;

int main(){
	int point;
	cin >> point; 
	if(point >=70){
		cout << "succes";
	}else if(point < 70 && point > 50){
			cout << "setengah succes";
	} else {
      cout << "failed";
	}

}
