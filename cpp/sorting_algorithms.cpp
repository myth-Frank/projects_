#include <iostream>
using namespace std;
template <typename L, size_t N> inline int get_len(L(&list)[N]){
    return sizeof(list)/sizeof(list[0]);
};
template <typename L> inline void arrayPrinter(L* list, int len){
    for ( int i = 0; i < len; i ++ ) cout << list[i] << "  ";
    cout << endl;
};
template <typename T> inline void swap_(T& a, T& b){
    T tmp = a;
    a = b;  b = tmp;
}
template <typename T> inline void insert_(T* list, T value, int index, int len){
    for ( int i = len - 1; i > index - 1; i -- )    list[i] = list[i - 1];
    list[index] = value;
};
template <typename T> inline void reversi_(T* list, int len){
    if ( len % 2 == 0 )
        for ( int i = 0; i < len / 2; i ++ )  swap_(list[i], list[len - 1 - i]);
    else
        for ( int i = 0; i < ( len - 1 ) / 2; i ++ ) swap_(list[i], list[len - 1 - i]);
};

// bubble sort b->s
template <typename T> void bubble_sort(T* const list, int size){
    for ( int i = 0; i < size - 1; i ++ ){
        // cout << "i: " << i << "    arr: "; arrayPrinter(list, size);
        bool done = true;
        for ( int j = 0; j < size - 1 - i; j ++ ){
            if ( list[j] < list[j+1] ){
                done = false;
                swap_(list[j], list[j+1]);
            } 
        }
        if(done) return;
    }
}

// select sort b->s
template <typename T> void select_sort(T* const list, int size){
    for ( int i = 0; i < size - 1; i ++ ){
        // cout << "i: " << i << "    arr: "; arrayPrinter(list, size);
        int max;
        for ( int j = i; j < size; j ++ )   if ( j == i || list[j] > list[max] ) max = j;
        swap_(list[max], list[i]);
    }
}

// insert sort b->s
template <typename T> void insert_sort(T* const list, int size){
    for ( int i = 1; i < size; i ++ ){
        T tmp = list[i];
        int j = i - 1;
        while ( j >= 0 && tmp > list[j] ){
            list[j + 1] = list[j];
            j --;
        }
        list[j + 1] = tmp;
    }
};

int main(){
    // Bubble sort
    // int len;
    // cout << "Bubble_sort" << endl;
    // cout << "input the length of the array:  "; cin >> len;
    // int arr[len];
    // for ( int i = 0; i < len; i ++ ) do{ cout << "input array[" << i << "]  attention: must input an integer:   "; cin >> arr[i]; }while(0);
    // cout << "original array" << endl;
    // arrayPrinter(arr, len);
    // cout << "start sorting" << endl;
    // bubble_sort(arr, len);
    // cout << "finish sorting" << endl;
    // cout << "the result: " << endl;
    // arrayPrinter(arr, len);

    // Select sort
    // int len;
    // cout << "Select_sort" << endl;
    // cout << "input the length of the array:  "; cin >> len;
    // int arr[len];
    // for ( int i = 0; i < len; i ++ ) do{ cout << "input array[" << i << "]  attention: must input an integer:   "; cin >> arr[i]; }while(0);
    // cout << "original array" << endl;
    // arrayPrinter(arr, len);
    // cout << "start sorting" << endl;
    // select_sort(arr, len);
    // cout << "finish sorting" << endl;
    // cout << "the result: " << endl;
    // arrayPrinter(arr, len);

    // Insert sort
    int len;
    cout << "Insert_sort" << endl;
    cout << "input the length of the array:  "; cin >> len;
    int arr[len];
    for ( int i = 0; i < len; i ++ ) do{ cout << "input array[" << i << "]  attention: must input an integer:   "; cin >> arr[i]; }while(0);
    cout << "original array" << endl;
    arrayPrinter(arr, len);
    cout << "start sorting" << endl;
    insert_sort(arr, len);
    cout << "finish sorting" << endl;
    cout << "the result: " << endl;
    arrayPrinter(arr, len);
    return 0;
}