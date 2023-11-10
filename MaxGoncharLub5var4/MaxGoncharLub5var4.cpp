#include<iostream>
#include<string>
using namespace std;
int main() {
	string text, in_text,out_text;
	getline(cin, text); in_text = text;
	int count=0;
	while (in_text.find(" ") != -1) { count++; in_text.erase(in_text.find(" "), 1); }count++;
	cout << count;

}