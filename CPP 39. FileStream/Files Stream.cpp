#include<iostream>

using namespace std;

int main() {

	// ofstream - fayla melumat yazmaq (output)
	// ifstream - fayldan melumat oxumaq (input)
	// fstream - melumati hem oxumaq, hem yazmaq

	/*
		fstream() - fayli achmadan stream (stream) yaradir

		fstream(
			const char* name			// faylin adi
			int omode					// achilma rejimi
			int = filebuf::openprot		// fayl qorunmasi 
			) 
			- stream yaradir, fayli achir ve streamla elaqelendirir

		fstream(
			int f						// fayl deskriptoru
		) 
		- stream yaradir ve onu artiq achilmis faylla elaqelendirir

		fstream(
			int f						// fayl deskriptoru
			char* buf					// bufer
			int len						// buferin olchusu
		) 
		- stream yaradir ve onu artiq achilmis faylla elaqelendirir,
			amma bufer teyin olunur
	*/

	/*
	enum _Openmode {
		in			= 0x01,		// yalniz oxumaq uchun achilir
		out			= 0x02,		// yalniz yazmaq uchun achilir
		ate			= 0x04,		// kursori faylin sonuna qoyur
		app			= 0x08,		// faylin sonuna melumat elave edir
		trunc		= 0x10,		// fayli s?firlamaq (truncate)
		_Nocreate	= 0x40,		// fayl yoxdursa achmaqda xeta
		_Noreplace	= 0x80,		// fayl varsa achmaqda xeta
		binary		= 0x20		// fayli ikilik (binary) rejimde achmaq
	}
	*/

	//	Fayllarla ishleme funksiyalari
	// 
	//	void open(const char* fileName, int mode, int protection)
	//  Fayl streamini konkret faylla birleshdirir

	// int close() - buferi temizleyir, fayl streamini baglayir

	// istream::read(unsigned char* buf, int len)
	// istream::read(char* buf, int len)
	// simvollarin blokla oxunmasini heyata kechirir

	// ostream::write(const unsigned char* buf, int n)
	// ostream::write(const char* buf, int n)
	// simvollarin blokla yazilmasini heyata kechirir

	// int istream::get()
	// int istream::get(unsigned char&)
	// int istream::get(char&)
	// streamdan bir simvol goturur

	// ostream::put(char)
	// streama bir simvol yazir

	// istream::get(unsigned char* buf, int n, char c = '\n')
	// istream::get(char* buf, int n, char c = '\n')
	// streamdan setri oxuyur

	// istream::getline(unsigned char* buf, int n, char c = '\n')
	// istream::getline(signed char* buf, int n, char c = '\n')
	// streamdan setri oxuyur (sonra bufera yazmir)

	// istream::ignore(int n=1, int d=EOF)
	// simvollari oxuyur ta ki, serhed d gorsensin, 
	// ya da n sayda simvol oxunsun

	// istream::gcount()
	// streamdan neche simvol oxundu onu qaytarir

	// istream::peek()
	// streamdaki novbeti simvola baxmaga imkan verir

	// istream::putback(char c)
	// simvolu streama geri qaytarir, o novbeti simvol kimi oxunacaq

	// istream::seekg(long pos)
	// oxuma pozisiyasini teyin edir

	// istream::seekg(long off, ios::seek_dir dir)
	// off qeder hereket edir istiqametde dir {beg, cur, end}

	// ostream::seekp(long pos)
	// fayla yazma pozisiyasini teyin edir

	// ostream::seekp(long off, ios::seek_dir dir)
	// fayla offset yazma hereketi

	// istream::tellg()
	// streamdaki cari oxuma pozisiyasi

	// ostream::tellp()
	// streamdaki cari yazma pozisiyasi

}
