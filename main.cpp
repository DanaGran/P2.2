#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

struct Student{

    std::string NS;
    std::string PS;
    double medie;
};

int main(){

    Student student;
    std::vector <Student> v;
    int m , n , p , N ;
    double maxim=5.00;
    std::string bursaPerf;
    int count=0;
    std::cin>>m>>n>>p;

    for( int i = 0 ; i < m ; i ++ ){

        std::cin>>student.NS>>student.PS;
        int Suma = 0 ;

        for( int j = 0 ; j < n ; j ++ ){

            std::cin>>N;
            if(N>=5)Suma = Suma + N ;
        }

        student.medie = (double) Suma / (double) n ;
        if(student.medie>=8.00)v.push_back(student);

    }
    for( auto i:v){
        if( i.medie >= maxim ) {bursaPerf = i.NS + " " + i.PS + " "; maxim=i.medie; }
        if(i.medie >= 8.00)count++;
    }
    if( count-1 > p) std::cout<<p<<std::endl;
    else std::cout<<count-1<<std::endl;

    std::cout<<bursaPerf<<std::fixed<<std::setprecision(2)<<maxim;

    return 0;
}
