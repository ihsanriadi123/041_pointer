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
	void setid(int pid);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}

void siswa::setid(int pid) {
	id = pid;
}

void orang::setnama(string pnama) {
	nama = pnama;
}

int main()
{
	orang o;
	o.setnama("joko kumat");
	siswa s;
	s.setid(1);
	s.displayAll(o);
	cout << endl;
	system("pause");
	return 0;
}