//Sortarea descrescatoare

#include<iostream>
#include<fstream>

int n;
int V[100];
using namespace std;

int main(){
    ifstream f("input.dat");
    f>>n;
    for(int i=1;i<=n;i++){f>>V[i];}
    int gata=0;
    int n_cp=n;
    while(gata==0){
        gata=1;
        for(int i=1;i<n;i++){
            if(V[i]>V[i+1]){
                swap(V[i],V[i+1]);
                gata=0;}}
        n--;}
        n=n_cp;
    for(int i=1;i<=n;i++){
        cout<<V[i]<<" ";}
    return 1;}
