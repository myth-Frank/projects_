#include <iostream>
using namespace std;
//getlen
template <typename L, size_t N> inline int get_len(L(&list)[N]){
    return sizeof(list)/sizeof(list[0]);
};
//arrayprinter
template <typename L> inline void arrayPrinter( L* list, int len ){
    for ( int i = 0; i < len; i ++ ) cout << list[i] << "  ";
    cout << endl;
};
//swap
void swap(int& a, int& b){
    int tmp;
    tmp = b; b = a; a = tmp;
}
//bubble_sorting
void bubble_sort(int* const list, int size){
    for ( int i = 0; i < size - 1; i ++ ){
        // cout << "i: " << i << "    arr: "; arrayPrinter(list, size);
        bool done = true;
        for ( int j = 0; j < size - i; j ++ ){
            if ( list[j] < list[j+1] ){
                done = false;
                swap(list[j], list[j-1]);
            } 
        }
        if(done) return;
    }
}