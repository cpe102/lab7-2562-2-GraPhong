//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>
using namespace std;

int main(){
	string status;
    int age;
    float tall;
    float property;
    cout <<  "Age = ";
    cin >> age;
    if(age <= 20){
    	cout << "Tall = ";
    	cin >> tall;
    	if(tall < 160){
    		status = "UNFRIEND";
		}else{
			if(tall < 175){
				status ="FRIEND";
			}else{
				cout <<"Property(Million) = ";
				cin >> property;
				if(property <= 69){
					status = "ONE-NIGHT-STAND";
				}else{
					status = "MARRIED";
				}
			}
		}
	}else{
		if(age < 30){
			cout <<"Property(Million) = ";
			cin >> property;
			if(property>10){
				status = "BEST FRIEND";
			}else{
				status = "UNFRIEND";
			}
		}else{
			status = "UNFRIEND";
		}
	}
	cout << status;
}
