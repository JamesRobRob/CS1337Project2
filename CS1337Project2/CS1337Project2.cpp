#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char* answerStart;
	ifstream inFile;
	
	inFile.open("answers.txt", ios::in);

	//Failsafe, if we can't read the file don't even run the program
	if (inFile) {
		cout << "\nFilestream read error\n" << endl;

		system("pause");
		return 0;
	}
	
	//assuming the file goes: a b c d e f. We can use ifstream.ignore to skip whitespace
	for (int i = 0; !inFile.eofbit; i++) {
		*(answerStart + i) = inFile.get();
		inFile.ignore();
	}

	for (int i = 0; i < 10; i++) {
		cout << *(answerStart + i) << endl;
	}

    return 0;
}
