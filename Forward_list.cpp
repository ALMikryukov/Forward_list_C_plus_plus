#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;
/* ���������� STL  forward_list   ����������� ������   */
/// �������� �������  ������ � ������ ������

int main() {
	forward_list <int> fl = {131,94,494};
	//fl.push_front(1);
	//fl.push_front(4);
	forward_list <int> ::iterator it = fl.begin();
	// i++  ����� ��������������� i--  ���������������� ������  
	/*
	for (auto el : fl) {  /// ����������� ���  
		cout << el << endl;

	}*/

	fl.insert_after(it, 9999); /// ������� ����� ������������ ���������� ������  
	fl.erase_after(it); //   �����  ���������  ������� �� �����������  ��  �������� 
	/// fl.before_begin()
	

	for (auto el : fl) {  /// ����������� ���  
		cout << el << endl;

	}
}