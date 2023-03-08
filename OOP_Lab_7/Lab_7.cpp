#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<int> A{ 1, 2, 3, 4, 5 };
    set<int> B{ 4, 5, 6, 7, 8 };

    // об'єднання
    set<int> union_set;
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(union_set, union_set.begin()));

    // різниця
    set<int> difference_set;
        set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(difference_set, difference_set.begin()));

    // перетин
    set<int> intersection_set;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(intersection_set, intersection_set.begin()));

    // відношення
    bool is_subset = includes(A.begin(), A.end(), B.begin(), B.end());

    // перевірка входження елемента
    bool is_present = A.count(3);

    // виведення множин
    cout << "A: ";
    for (auto elem : A) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "B: ";
    for (auto elem : B) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Об'єднання: ";
    for (auto elem : union_set) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Різниця: ";
    for (auto elem : difference_set) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Перетин: ";
    for (auto elem : intersection_set) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "B є підмножиною A: " << is_subset << endl;
    cout << "Число 3 присутнє у множині A: " << is_present << endl;

    return 0;
}