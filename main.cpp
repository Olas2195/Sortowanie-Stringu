#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string stringSort(string s) {
	int t[256];
	string wynik("");
	
	//zmiana liter na ma³e
	for(int i=0; i<s.length(); i++) {
		if(s[i]<95)
			s[i]+=32;
	}
		
	for(int i=0; i<256; i++)
		t[i]=0;
	
	for(int i=0; i<s.length(); i++)
		t[s[i]]++;			
	
	for(int i=0; i<256; i++) {
		if(t[i]>0)
			for(int j=1; j<=t[i]; j++)
				wynik+=i;
	}
	return wynik;	
}

int main() {
	cout<<stringSort("Ala");
	
	return 0;
}

