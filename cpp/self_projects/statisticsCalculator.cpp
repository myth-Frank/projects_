#include <iostream>
#include <string>
using namespace std;
double inline average(double *list, int length){
    double sum = 0;
    for ( int i = 0; i < length; i ++ ) sum += list[i];
    return sum / length;
}
template <typename T> inline void swap_(T& a, T& b){
    T tmp = a;
    a = b;  b = tmp;
}
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
double inline base(double* const list, int length){
    int min;
    for ( int i = 0; i < length; i ++ )
        if ( list[i] < min || i == 0 ) min = list[i];
    return min;
}
double inline max(double* const list, int length){
    int max;
    for ( int i = 0; i < length; i ++ )
        if ( list[i] > max || i == 0 ) max = list[i];
    return max;
}
double mode(double* const list, int length){
    double baseValue = base(list, length), spanValue = max(list, length) - base(list, length) + 1;
    double hash[static_cast<int>(spanValue)];
    int modeIndex = 0;
    for ( int i = 0; i < length; i ++ )     hash[i] = 0;
    for ( int i = 0; i < length; i ++ )     hash[static_cast<int>(list[i] - baseValue)] ++;
    for ( int i = 0; i < length; i ++ ){if ( hash[i] > hash[modeIndex] ) modeIndex = i;}
    return modeIndex + baseValue;
}
double inline median(double* list, int length){
    bubble_sort(list, length);
    if ( length % 2 == 0 ) return 0.5 * ( list[length / 2] + list[length / 2 - 1]);
    else return list[( length - 1 ) / 2];
}
template <typename T> inline void input(T& var, string doc){
    cout << doc << ": "; cin >> var;
}
int main(){
    cout << "varience calculator: " << endl;
    int len;
    input(len, "输入数列长度");
    double list[len];
    for ( int i = 0; i < len; i ++ ){
        string doc = "输入数列第" + to_string(i + 1) + "个数字";
        input(list[i], doc);
    }
    cout << "中位数为：" << median(list, len) << endl;
    cout << "众数为：" << mode(list, len) << endl;
    double avg = average(list, len);
    cout << "平均数为：" << avg << endl;
    double v;
    for ( int i = 0; i < len; i ++ )
        v += (list[i] - avg) * (list[i] - avg) ;
    cout << "方差为：" << v << endl;
    return 0;
}