#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>  
#include <iomanip>

using namespace std;

int main()
{
    //printf("MESH\n");
    //std::cout << "Hello Doc!" << std::endl;
    /*
    std::string name;
    std::cin >> name;
    
    while ((throwaway = getchar()) == 'v')
    {
        std::cin >> a >> b >> c >> throwaway >> d >> e >> f  >> throwaway >> g >> h >> i;
        std::cout << name << ".addVert(new Triangle(new Vector3f(" << a << ", " << b << ", " << c << "), new Vector3f(" << d << ", " << e << ", " << f << ")), new Vector3f(" << g << ", " << g << ", " << i << ")));\n"; 
    }
    
    //printf("Press ENTER key to Continue\n");  
    //getchar(); 
    */

    char throwaway;
    double a, b, c, d, e, f, g, h, i;
    string name;

    string sub;
    ifstream infile;
    ofstream outfile;
    infile.open("input.txt");
    outfile.open("mesh.txt");

    infile >> name;
    while ((infile >> throwaway >> a >> b >> c >> throwaway >> d >> e >> f  >> throwaway >> g >> h >> i ) && throwaway == 'v')
        outfile << setprecision(5) << name << ".addVert(new Triangle(new Vector3f(" << a << ", " << b << ", " << c << "), new Vector3f(" << d << ", " << e << ", " << f << "), new Vector3f(" << g << ", " << g << ", " << i << ")), \"red\");\n"; 
    //outfile << name << a << b << c;

    infile.close();
    outfile.close();
    return 0;
}