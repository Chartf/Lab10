#include<iostream>
#include<string>
using namespace std;
void printO (int N,int M){
    if(N > 0 && M > 0){
        for(int j =0 ; j<N ; j++){
            for(int i=0 ; i<M ; i++){
                cout << 'O';
            }
            
           cout << '\n'; 
           
        }
        
    }else{cout << "Invalid input";}
}
int main(){
    printO(5,-4);

}