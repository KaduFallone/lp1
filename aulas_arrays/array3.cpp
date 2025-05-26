#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums1[5], nums2[5], soma[5];
    
    cout << "insira os numeros da primeira fileira: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> nums1[i];
        cout << endl;
    }
    

    cout << "insira os numeros da segunda fileira: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> nums2[i];
        cout << endl;
    }

    
    cout << "soma dos numeros das fileira: " << endl;
    for(int i = 0; i < 5; i ++){
        soma[i] = nums1[i]+nums2[i];
        cout << soma[i] << endl;
    }

    return 0;
}