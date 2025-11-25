#include <iostream>
#include <vector>
using namespace std;

int main(){
    char abecedario[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int length;
    char letra;
    cout<<"Enter how many characters your phrase has: (count spaces as length 1)"<<endl;
    cin>>length;
    vector<char> phrase;
    vector<char> result;

        for(int i=0;i<length;i++){
        cout<<"enter the character "<<i+1<<'\n';
        cin>> letra;
        phrase.push_back(letra);
        // Aplicar CIFRADO +2 / -1
        if (letra >= 'a' && letra <= 'z') {

            int index = letra - 'a';   // posición real en el abecedario

            if (i % 2 == 0) {
                // posiciones pares → +2
                index = (index - 2+ 26) % 26;
            } else {
                // posiciones impares → -1
                index = (index + 1) % 26;
            }

            result.push_back(abecedario[index]);

        } else {
            // si es espacio u otro caracter, lo ponemos igual
            result.push_back(letra);
        }
    }

        cout << "\nEncrypted result:\n";
    for(char c : result) {
        cout << c;
    }
    cout << endl;

    cout << "Moya si lees esto eres la cabra";

}