#include<iostream>

using namespace std;

int adiff(int A,int B){
	int dif;
	A =A%360;
	B =B%360;
	if (A > B){
		dif = A-B;
	}else{
		dif = B-A;
	}
	if (dif >180){
		dif = 360-dif;
	}
	return dif ;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
