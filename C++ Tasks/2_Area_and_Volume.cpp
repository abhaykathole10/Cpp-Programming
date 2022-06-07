#include <iostream>
#include <cmath>    //For the pow() function
#define PI 3.141592 //Macro definition/ Expansion
using namespace std;

// First tried method // Too much if else conditions // Not optimised //Not easy to interpret
// void forCube(int r, char rch){
//     if(rch == 'a'){
//         cout << "The Curved Surface Area of Cube is " << 4*r*r;
//     }else if(rch == 'b'){
//         cout << "The Total Surface Area of Cube is " << 6*r*r;
//     }else if(rch =='c'){
//         cout << "The volume of cube is " << 6*r*r;
//     }else{
//         cout << "Invalid input";
//     }
// }
// void forCuboid(int l, int b, int h, char cbch){
//     if(cbch == 'a'){
//         cout << "The Curved Surface Area of Cuboid is " << 2*h*(l+b);
//     }else if(cbch == 'b'){
//         cout << "The Total Surface Area of Cuboid is " << 2*(l*b + b*h + l*h);
//     }else if(cbch =='c'){
//         cout << "The volume of cuboid is " << l*b*h;
//     }else{
//         cout << "Invalid input";
//     }
// }

// Cube
void curvedSurfaceAreaOfCube(int a){
    cout << "The Curved Surface Area of Cube is " << 4*a*a;
}
void totalSurfaceAreaOfCube(int a){
    cout << "The Total Surface Area of Cube is " << 6*a*a;
}
void volumeOfCube(int a){
    cout << "The volume of cube is " << a*a*a;
}

// Cuboid
void curvedSurfaceAreaOfCuboid(int l, int b, int h){
    cout << "The Curved Surface Area of Cuboid is " << 2*h*(l+b);
}
void totalSurfaceAreaOfCuboid(int l, int b, int h){
    cout << "The Total Surface Area of Cuboid is " << 2*(l*b + b*h + l*h);
}
void volumeOfCuboid(int l, int b, int h){
    cout << "The volume of cuboid is " << l*b*h;
}

//Right Circular Cylinder
void curvedSurfaceAreaOfCylinder(double r, double h){
    cout << "The Curved Surface Area of Right Circular Cylinder is " << 2 * PI * r * h;
}
void totalSurfaceAreaOfCylinder(double r, double h){
    cout << "The Total Surface Area of Right Circular Cylinder is " << 2 * PI * r * (r + h);
}
void volumeOfCylinder(double r, double h){
    cout << "The Volume of Right Circular Cylinder is " << PI * r * r * h;
}

//Right Circular Cone
void curvedSurfaceAreaOfCone(double r, double h, double l){
    cout << "The Curved Surface Area of Right Circular Cone is " << PI * r * l;
}
void totalSurfaceAreaOfCone(double r, double h, double l){
    cout << "The Total Surface Area of Right Circular Cone is " << PI * r * (l + r);
}
void volumeOfCone(double r, double h, double l){
    cout << "The Volume of Right Circular Cone is " << PI * r * r * h/3;
}

//Sphere
void totalSurfaceAreaOfSphere(double r ){
    cout << "The Total Surface Area of Sphere is " << 4 * PI * r * r;
}
void volumeOfSphere(double r ){
    cout << "The Volume of Sphere is " << (4 * PI * r * r * r) / 3;
}

//Hemi-Sphere
void curvedSurfaceAreaOfHemiSphere(int r){
    cout << "The Curved Surface Area of Hemi-Sphere is " << 2 * PI * r * r;
}
void totalSurfaceAreaOfHemiSphere(double r ){
    cout << "The Total Surface Area of Hemi-Sphere is " << 3 * PI * r * r;
}
void volumeOfHemiSphere(double r ){
    cout << "The Volume of Hemi-Sphere is " << (2 * PI * r * r * r) / 3;
}

int main(){
        while(true){

            int pick;
            cout << "\nPlease select the shape you want" << "\n";
            cout << "1.Cube \n2.Cuboid \n3.Right Circular Cylinder \n4.Right Circular Cone \n5.Sphere \n6.Hemi-Sphere \n7.Quit";
            cout << "\nEnter your choice: ";
            cin >> pick;

            switch(pick){

                //Cube
                case 1:
                    // First tried method // Too much if else conditions // Not optimised //Not easy to interpret
                    // float a;
                    // char ch;
                    // cout << "Enter the side: ";
                    // cin >> a;
                    // cout << "a. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                    // cout << "Enter your choice: ";
                    // cin >> ch;
                    // cout << "\n";
                    // forCube( a , ch);
                    // cout << "\n\n";

                    {
                        float a;
                        char pick;
                        cout <<"\nFor Cube\n";
                        cout << "Enter the side: ";
                        cin >> a;
                        cout << "\na. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': curvedSurfaceAreaOfCube(a);
                                cout << "\n\n";
                                break;
                                case 'b': totalSurfaceAreaOfCube(a);
                                cout << "\n\n";
                                break;
                                case 'c': volumeOfCube(a);
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Cuboid
                case 2:
                    // First tried method // Too much if else conditions // Not optimised //Not easy to interpret
                    // float l, b, h;
                    // char cbch;
                    // cout << "Enter length: ";
                    // cin >> l;
                    // cout << "Enter height: ";
                    // cin >> h;
                    // cout << "Enter breadth: ";
                    // cin >> b;
                    // cout << "a. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                    // cout << "Enter your choice: ";
                    // cin >> cbch;
                    // cout << "\n";
                    // forCuboid( l , b , h , cbch);
                    // cout << "\n\n";

                    {
                        float l , b , h;
                        char pick;
                        cout <<"\nFor Cuboid\n";
                        cout << "Enter length: ";
                        cin >> l;
                        cout << "Enter height: ";
                        cin >> h;
                        cout << "Enter breadth: ";
                        cin >> b;
                        cout << "\na. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': curvedSurfaceAreaOfCuboid(l , b , h);
                                cout << "\n\n";
                                break;
                                case 'b': totalSurfaceAreaOfCuboid(l , b , h);
                                cout << "\n\n";
                                break;
                                case 'c': volumeOfCuboid(l , b , h);
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Right Circular Cylinder
                case 3:
                    {
                        double r , h;
                        cout <<"\nFor Right Circular Cylinder\n";
                        char pick;
                        cout << "Enter radius: ";
                        cin >> r;
                        cout << "Enter height: ";
                        cin >> h;
                        cout << "\na. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': curvedSurfaceAreaOfCylinder( r, h);
                                cout << "\n\n";
                                break;
                                case 'b': totalSurfaceAreaOfCylinder(r, h);
                                cout << "\n\n";
                                break;
                                case 'c': volumeOfCylinder(r, h);
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Right Circular Cone
                case 4:
                    {
                        double r , h , l, s;
                        cout <<"\nFor Right Circular Cone\n";
                        char pick;
                        cout << "Enter radius: ";
                        cin >> r;
                        cout << "Enter height: ";
                        cin >> h;
                    s = (r*r + h*h);
                        l = pow(s, 0.5);
                        cout << "The slant height will be " << l;

                        cout << "\n\na. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': curvedSurfaceAreaOfCone( r, h , l);
                                cout << "\n\n";
                                break;
                                case 'b': totalSurfaceAreaOfCone(r, h , l );
                                cout << "\n\n";
                                break;
                                case 'c': volumeOfCone(r, h, l);
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Sphere
                case 5:
                    {
                        double r;
                        char pick;
                        cout << "\nFor Sphere\n";
                        cout << "Enter radius: ";
                        cin >> r;
                        cout << "\na. Total Surface Area \nb. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': totalSurfaceAreaOfSphere( r );
                                cout << "\n\n";
                                break;
                                case 'b': volumeOfSphere( r );
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Hemi-Sphere
                case 6:
                    {
                        double r;
                        char pick;
                        cout << "\nFor Hemi-Sphere\n";
                        cout << "Enter radius: ";
                        cin >> r;
                        cout << "\n\na. Curved Surface Area \nb. Total Surface Area \nc. Volume\n";
                        cout << "Enter your choice: ";
                        cin >> pick;
                        cout << "\n";
                            switch(pick){
                                case 'a': curvedSurfaceAreaOfHemiSphere( r );
                                cout << "\n\n";
                                break;
                                case 'b': totalSurfaceAreaOfHemiSphere( r );
                                cout << "\n\n";
                                break;
                                case 'c': volumeOfHemiSphere( r );
                                cout << "\n\n";
                                break;
                                default: cout << "Invalid input\n\n";
                            }
                    }
                break;

                //Quit
                case 7: cout << "Quitting....\n\nThank you for visiting";
                        exit(0);

                //Default Case
                default:
                    cout << "Invalid input \n";
            }
        }

    return 0;
}