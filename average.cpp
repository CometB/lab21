#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){

    double sum = 0;

    for(int i=1;i<=(argc-1);i++){
        sum += atof(argv[i]);
    }

    if(argc > 1){
        double average = sum/(argc-1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = "  << average << '\n';
        cout << "---------------------------------\n";
    } else{
        cout << "Please input numbers to find average.";
    }

    return 0;
}
