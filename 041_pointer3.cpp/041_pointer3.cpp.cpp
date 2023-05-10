#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setnama(string pnama);
	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setid(string pid);
	void displayAll(orang& a);
};
