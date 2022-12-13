#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string text,Retext,T,R;
	cout << "Input text: ";
    cin >> text;
    cout << "Reversed text: ";
    Retext = func1(text);
    cout << Retext << endl;
    cout << "Palindrome: ";
    T = func3(text);
    R = func3(Retext);
    if (T==R){
    	cout << "Yes";
	}	else{
    		cout << "No";
		}
    return 0;
}
