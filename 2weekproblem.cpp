#include <iostream>
#include <string>
using namespace std;
//int max(int a, int b){
//	int m;
//	if (a<b){
//		m = b;
//	}
//	else if (a>b){
//		m = a;
//	}
//	else{
//		m = 0;
//	}
//	return m;
//}
//
//int main(){
//	int n, m;
//	
//	cin >> n >> m;
//	
//	cout << max(n,m);
//
//	return 0;
//
//}
class Item{
public: Item(){
			itemName = "null";
			price = 0;
}
		string itemName;
		int price;
};

int main(){
	Item item;
	cout << item.price << endl;
	cout << item.itemName;
	
	cout << endl << endl;

	item.itemName = "ÇÇ¹Ù¶ó±â";
	item.price = 3400;
	
	cout << item.itemName;
	cout << item.price;

	cout << endl << endl;

	item.itemName = "Â¡¼öÀÇÃÑ";
	item.price = 3100;

	cout << item.itemName;
	cout << item.price;
	return 0;
}
