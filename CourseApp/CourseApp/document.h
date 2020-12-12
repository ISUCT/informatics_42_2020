#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class Document
{
public:
	Document()
	{
		set_information();
	}
	void get_information()
	{
		cout << doc_name << doc_type << "  " << doc_weight << doc_character << endl;
	}
private:
	int variant;
	double doc_weight;
	string doc_type;
	string doc_character;
	string doc_name;
	void set_information()
	{
		cout << "Enter name of doc : "; cin >> doc_name;
		type();
		weight();
		system("cls");
	}
	void type()
	{
		print_type();
		cout << "Choose type of file : "; cin >> variant;
		switch (variant)
		{
		case 1:
			doc_type = ".txt";
			break;
		case 2:
			doc_type = ".pdf";
			break;
		case 3:
			doc_type = ".mp4";
			break;
		case 4:
			doc_type = ".jpg";
			break;
		case 5:
			doc_type = ".zip";
			break;
		case 6:
			doc_type = ".xls";
			break;
		}
	}
	void print_type()
	{
		cout << "Type of doument : " << endl;
		cout << "  1) Text (txt)" << endl;
		cout << "  2) PDF  (pdf)" << endl;
		cout << "  3) Video (mp4)" << endl;
		cout << "  4) Photo (jpg)" << endl;
		cout << "  5) Folder (zip)" << endl;
		cout << "  6) Table (xls)" << endl;
		cout << endl;
	}
	void weight()
	{
		cout << "Enter weight of doc : "; cin >> doc_weight;
		character();
	}
	void character()
	{
		print_character();
		cout << "Character of doument weight : "; cin >> variant;
		switch (variant)
		{
		case 1:
			doc_character = "B";
			break;
		case 2:
			doc_character = "KB";
			break;
		case 3:
			doc_character = "MB";
			break;
		case 4:
			doc_character = "GB";
			break;
		case 5:
			doc_character = "TB";
			break;
		}
	}
	void print_character()
	{
		cout << "  1) Byte (B)" << endl;
		cout << "  2) Kilobyte (KB)" << endl;
		cout << "  3) Megabyte (MB)" << endl;
		cout << "  4) Gigabyte (GB)" << endl;
		cout << "  5) Terabyte (TB)" << endl;
		cout << endl;
	}
};
