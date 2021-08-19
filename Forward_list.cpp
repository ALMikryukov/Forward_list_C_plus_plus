#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;
/* библиотека STL  forward_list   односвязный список   */
/// наиболее быстрые  методы с начала списка

int main() {
	forward_list <int> fl = {131,94,494};
	//fl.push_front(1);
	//fl.push_front(4);
	forward_list <int> ::iterator it = fl.begin();
	// i++  можно инкремнтировать i--  декриментировать нельзя  
	/*
	for (auto el : fl) {  /// распечатать все  
		cout << el << endl;

	}*/

	fl.insert_after(it, 9999); /// вставит после указывающего итератором эмента  
	fl.erase_after(it); //   сотрёт  следующий  элемент от указыающего  на  итератор 
	/// fl.before_begin()
	

	for (auto el : fl) {  /// распечатать все  
		cout << el << endl;

	}
}