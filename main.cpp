/*
This is a Astronautical Calculator Programme which is the only one in its kind
because it is an all in one programme as it includes a lot of advanced equations
that you can choose from in two clicks without that much effort.
You choose the calculation you are struggling doing with pencil and paper, input the
variables and in a few milliseconds your problem will be solved.
C Copyright Nick Pap 2025||All Rights Reserved
// 2
*/
#include <iostream> // 1
#include <math.h>
#include <cmath>
#include <iostream>
#include <limits> // 2
using namespace std;
const long double Inf = numeric_limits<long double>::infinity(); // 2
const long double G = 6.6743*pow(10,-11); // 2 6.674=>6.6743 +1 digit +3
const long double e = 2.718281;
const long double PI = 3.141592;
 using namespace std;
 void visviva() {
 cout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 cout <<"Distance Center-Center between the Center Body and the Satellite in meters (r):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 cout <<"Semi-Major Axis in meters (a):" <<endl;
 long double a;
 cin >> a;
 long double localvariable = G;
 long double V = sqrt(localvariable*Mass*(2/r-1/a));
 long double result = V;
 cout<<"G=";cout<<localvariable;cout<<"Nm^2/Kg^2"; cout<<"    ---"<<endl;
 cout<<"                                           |=>GM=μ"<<endl;
 cout<<"M=";cout<<Mass;cout<<"Kg";cout<<"    ---"<<endl;
 cout<<"r=";cout<<r;cout<<"m"<<endl;
 cout<<"a=";cout<<a;cout<<"m"<<endl;
 cout<<"V=sqrt(G×M×(2/r-1/a))=>"<<endl;
 cout<<"V=sqrt(";cout<<G;cout<<"×";cout<<Mass;cout<<"×(2/";cout<<r;cout<<"-1/";cout<<a;cout<<"))";cout<<"=>"<<endl;
 cout<<"V=";cout<<result;cout<<"m/s"<<endl;
 }
 void CircularSatelliteSpeed() {
 cout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 cout <<"Distance Center-Center between the Center Body and the Satellite in meters (r_cs):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 long double localvariable = G;
 long double V = sqrt(localvariable*Mass/r);
 long double result = V;
 cout<<"G=";cout<<localvariable;cout<<"Nm^2/Kg^2"; cout<<"    ---"<<endl;
 cout<<"                                           |=>GM=μ"<<endl;
 cout<<"M=";cout<<Mass;cout<<"Kg";cout<<"    ---"<<endl;
 cout<<"r_cs=";cout<<r;cout<<"m"<<endl;
 cout<<"V_cs=sqrt(μ/r_cs)" <<"=>"<<endl;
 cout<<"V_esc=sqrt("<<G<<"×"<<Mass<<"/"<<r<<")"<<"=>"<<endl;
 cout<<"V_cs=";cout<<result;cout<<"m/s"<<endl;
 }
 void EscapeVelocity() {
 cout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 cout <<"Distance Center-Center between the Center Body and the Satellite in meters (r):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 long double localvariable = G;
 long double V = sqrt(localvariable*2*Mass/r);
 long double result = V;
 cout<<"G=";cout<<localvariable;cout<<"Nm^2/Kg^2"; cout<<"    ---"<<endl;
 cout<<"                                           |=>GM=μ"<<endl;
 cout<<"M=";cout<<Mass;cout<<"Kg";cout<<"    ---"<<endl;
 cout<<"r=";cout<<r;cout<<"m"<<endl;
 cout<<"V_esc=sqrt(2μ/r)"<<"=>"<<endl;
 cout<<"V_esc=sqrt(2"<<G<<"×"<<Mass<<"/"<<r<<")"<<"=>"<<endl;
 cout<<"V_esc=";cout<<result;cout<<"m/s"<<endl;
 }
 void BurnTimeOfTsiolkovskyEquation() {
 cout<<"Stating Mass in kg (m_0):";
 long double mzero;
 cin >> mzero;
 cout <<"Rate Of Fuel Consumption in Kg/S (m•):";
 long double mdot;
 cin >> mdot;
 cout <<"Initial Velocity in m/s (U_start):";
 long double Ustart;
 cin>>Ustart;
 cout <<"Desirable Velocity in m/s (V):";
 long double V;
 cin >> V;
 cout << "Angle Of Desirable Velocity Vector in degrees or rad (β):";
 long double b;
 cin >> b;
 cout << "Angle Of Initial Velocity Vector in degrees or rad (α):";
 long double a;
 cin >> a;
 cout << "Specific Impulse in s (I_sp):";
 long double Isp;
 cin >> Isp;
 cout << "Gravity Acceleration im m/s^2 (g_0):";
 long double g;
 cin >> g;
 long double localvar = e;
 long double Ue = g*Isp;
  long double localpi = PI;
 long double theta = b-a;
 long double tburn = mzero/mdot*(1-pow(localvar, -(sqrt(pow(Ustart, 2)+pow(V, 2)-2*Ustart*V*cos(theta*PI/180))/Ue)));
 long double result = tburn;
 cout <<"m_0="<<mzero<<"kg"<<endl;
 cout <<"m•="<<mdot<<"kg/s"<<endl;
 cout <<"U_start="<<Ustart<<"m/s"<<endl;
 cout <<"V="<<V<<"m/s"<<endl;
 cout <<"β="<<b<<endl;
 cout <<"α="<<a<<endl;
 cout <<"I_sp="<<Isp<<"s"<<endl;
 cout <<"g_0="<<g<<"m/s^2"<<endl;
 cout <<"U_e="<<Isp*g<<"m/s"<<endl;
 cout <<"t_burn=m_0/m•×(1-e^-(sqrt(U_start^2+V^2-2×U_start×V×cos(|β-α|))/Ue))=>"<<endl;
 cout <<"t_burn="<<mzero<<"/"<<mdot<<"×(1-"<<e<<"^"<<"-(sqrt("<<Ustart<<"^2+"<<V<<"^2-2×"<<Ustart<<"×"<<V<<"×"<<"cos(|"<<b<<"-"<<a<<"))/"<<Ue<<"))=>"<<endl;
 cout <<"t_burn="<<result<<"s"<<endl;
 }
 void DeflectionAngleEquation() {
    cout << "Current Velocity in m/s (V):";
    long double V;
    cin >> V;
    cout << "Escape Velocity in m/s (V_esc):";
    long double Vesc;
    cin >> Vesc;
    long double localPI = PI;
    long double arcsine = 1/(2*(V*V/Vesc*Vesc)-1);
    long double delta = 2*asin(arcsine*PI/180);
    long double result = delta;
    cout<<"δ=2Xarcsin[1/2(VXV/V_escXV_esc)-1]=>"<<endl;
    cout<<"δ=2Χarcsin[1/2("<<V<<"X"<<V<<"/"<<Vesc<<"X"<<Vesc<<"-1=>"<<endl;
    cout <<"δ="<<result;
 }
 void HohmannTransferOrbit() {
 cout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 cout <<"Distance Center-Center between the Center Body and the Satellite in meters (r_1):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 cout <<"Desirable Semi-Major Axis in meters (a_transfer):" <<endl;
 long double atransfer;
 cin >> atransfer;
 long double localvariable = G;
 long double Vptransfer = sqrt(localvariable*Mass*(2/r-1/atransfer));
 long double result = Vptransfer;
 cout<<"G=";cout<<localvariable;cout<<"Nm^2/Kg^2"; cout<<"    ---"<<endl;
 cout<<"                                           |=>GM=μ"<<endl;
 cout<<"M=";cout<<Mass;cout<<"Kg";cout<<"    ---"<<endl;
 cout<<"r_1=";cout<<r;cout<<"m"<<endl;
 cout<<"a_transfer=";cout<<atransfer;cout<<"m"<<endl;
 cout<<"V_p,transfer=sqrt(G×M×(2/r_1-1/a_transfer))=>"<<endl;
 cout<<"V_p,transfer=sqrt(";cout<<G;cout<<"×";cout<<Mass;cout<<"×(2/";cout<<r;cout<<"-1/";cout<<atransfer;cout<<"))";cout<<"=>"<<endl;
 cout<<"V_p,transfer=";cout<<result;cout<<"m/s"<<endl;
 }
 void CalculationOfStartingPointOfCenterBodyToArriveAtTheDesirablePointOfItsOrbitInADesirableTime() { // 2
    cout <<"Angle Velocity in degrees/s (ω):";
    long double omega;
    cin >> omega;
    cout <<"Time Of Flight in d (X):";
    long double TOF;
    cin >> TOF;
    long double fi = omega*TOF;
    long double result = fi;
    cout <<"Φ=ωXX=>"<<endl;
    cout <<"Φ="<<omega<<"X"<<TOF<<"=>"<<endl;
    cout <<"Φ="<<result<<endl;
    }
    void TheTwoBodyProblem() { // 2
    cout<<"Mass of Body i which is the Body that the forces apply to in kg (m_i):";
    long double mi;
    cin >> mi;
    cout<<"Mass of Body j which is the Body that apply forces in kg (m_j):";
    long double mj;
    cin >> mj;
    cout<<"Point of i Body in X axis in Coordinates (X_i):";
    long double Xi;
    cin >> Xi;
    cout<<"Point of j Body in X axis in Coordinates (X_j):";
    long double Xj;
    cin >> Xj;
    cout<<"Point of i Body in y axis in Coordinates (y_i):";
    long double yi;
    cin >> yi;
    cout<<"Point of j Body in y axis in Coordinates (y_j):";
    long double yj;
    cin >> yj;
    cout<<"Point of i Body in Z axis in Coordinates (Z_i):";
    long double Zi;
    cin >> Zi;
    cout<<"Point of j Body in Z axis in Coordinates (Z_j):";
    long double Zj;
    cin >> Zj;
    cout<<"Drag Force applying to Body i in X axis in N Coordinates (F_DragX):";
    long double FDragX;
    cin >> FDragX;
    cout<<" Drag Force applying to Body i in y axis in N Coordinates (F_Dragy):";
    long double FDragy;
    cin >> FDragy;
    cout<<" Drag Force applying to Body i in Z axis in N Coordinates (F_DragZ):";
    long double FDragZ;
    cin >> FDragZ;
                      cout<<"Thrust Force applying to Body i in X axis in N Coordinates (F_ThrustX):";
                         long double FThrustX;
                              cin >> FThrustX;
                              cout<<" Thrust Force applying to Body i in y axis in N Coordinates (F_Thrusty):";
                                  long double FThrusty;
                                   cin >> FThrusty;
                                cout<<" Thrust Force applying to Body i in Z axis in N Coordinates (F_ThrustZ):";
                                     long double FThrustZ;
                                      cin >> FThrustZ;
                                                                                     cout<<"Magnetic Force applying to Body i in X axis in N Coordinates (F_MagX):";
                                                                                   long double FMagX;
                                                                                         cin >> FMagX;
                                                                                  cout<<" Magnetic Force applying to Body i in y axis in N Coordinates (F_Magy):";
                                                                                   long double FMagy;
                                                                                         cin >> FMagy;
                                                                                 cout<<" Magnetic Force applying to Body i in Z axis in N Coordinates (F_MagZ):";
                                                                                             long double FMagZ;
                                                                                              cin >> FMagZ;
cout<<" Perturb Force applying to Body i in X axis in N Coordinates (F_PerturbX):";
long double FPerturbX;
cin >> FPerturbX;
cout<<" Perturb Force applying to Body i in y axis in N Coordinates (F_Perturby):";
long double FPerturby;
cin >> FPerturby;
cout<<" Perturb Force applying to Body i in Z axis in N Coordinates (F_PerturbZ):";
long double FPerturbZ;
cin >> FPerturbZ;
                          cout<<" Solar Pressure Force applying to Body i in X axis in N Coordinates (F_Solar PressureX):";
                         long double FSolarPressureX;
                           cin >> FSolarPressureX;
                             cout<<" Solar Pressure Force applying to Body i in y axis in N Coordinates (F_Solar Pressurey):";
                                       long double FSolarPressurey;
                                         cin >> FSolarPressurey;
                                        cout<<" Solar Pressure Force applying to Body i in Z axis in N Coordinates (F_Solar PressureZ):";
                                            long double FSolarPressureZ;
                                            cin >> FSolarPressureZ;
                                            cout<<" Any other Force applying to Body i in X axis in N Coordinates (F_otherfsX):";
                         long double FotherfsX;
                           cin >> FotherfsX;
                             cout<<" Any other Force applying to Body i in y axis in N Coordinates (F_otherfsy):";
                                       long double Fotherfsy;
                                         cin >> Fotherfsy;
                                        cout<<" Any other Force applying to Body i in Z axis in N Coordinates (F_otherfsZ):";
                                            long double FotherfsZ;
                                            cin >> FotherfsZ;
                                            long double localvariableG = G;
    long double rji;
    rji = sqrt((pow((Xi-Xj), 2))+(pow((yi-yj), 2))+(pow((Zi-Zj), 2)));
    long double RJIX = Xi-Xj; // ------|
    long double RJIy = yi-yj; //       |=> RJI=(Xi-Xj,yi-yj,Zi-Zj)
    long double RJIZ = Zi-Zj; // ------|
    long double FOTHERX = FDragX+FThrustX+FMagX+FPerturbX; // ------|
    long double FOTHERy = FDragy+FThrusty+FMagy+FPerturby; // ------|=> F_OTHER=(F_OTHERX,F_OTHERy,F_OTHERZ)
    long double FOTHERZ = FDragZ+FThrustZ+FMagZ+FPerturbZ; // ------|
    long double FgX = -localvariableG*mi*(mj/pow(rji, 3))*(RJIX);
    long double Fgy = -localvariableG*mi*(mj/pow(rji, 3))*(RJIy);
    long double FgZ = -localvariableG*mi*(mj/pow(rji, 3))*(RJIZ);
    long double FTOTALX = FgX+FOTHERX;
    long double FTOTALy = Fgy+FOTHERy;
    long double FTOTALZ = FgZ+FOTHERZ;
    cout << "F_TOTAL=-Gm_iΣj=1 j≠i n=1 m_j/r_ji^3(R_JI)+F_OTHER=>"<<endl;
    cout << "F_TOTAL=F_g+F_OTHER=>"<<endl;
    cout << "F_TOTAL=("<<FTOTALX<<"N,"<<FTOTALy<<"N,"<<FTOTALZ<<"N)"<<endl;
    }
 
 void TheNBodyProblem() {
   while (true) {
   cout<< "[2] The 2-Body Problem"<<endl;
   cout<< "[0] Cancel"<<endl;
   cout<< "Which Problem do you want to solve?";
   float prob;
   cin >> prob;
   if (prob==2) {
      TheTwoBodyProblem();
   }
   else if (prob==0) {
   break;
   }
   else {
      cout <<"..."<<prob<<" is an imaginary number in this world. You are only allowed to choose 2..."<<endl;
   }}
 }
 void info() {
 cout <<"Astronautical Calculator is an open source programme written in C++."<<endl;
 cout <<"It can be used to calculate advanced Astrodynamical equations from VisViva and Escape Velocity, all the way to Hohmann Transfer Orbit and The N-Body Problem faster than the blink of an eye."<<endl;
 cout <<"It was first developed in 17/7/2025 by Nick Pap."<<endl;
 }
 void ThrustEquation() { // 2
 cout<<"Rate of fuel consumption in kg/s (m•):";
 long double mdot;
 cin >> mdot;
 cout<<"Specific Impulse in s (I_sp):";
 long double Isp;
 cin >> Isp;
 cout<<"Gravitational Acceleration in m/s^2 (g_0):";
 long double g;
 cin >> g;
 long double Fthrust = mdot*Isp*g;
 cout<<"F_thrust=m•×U_e=>"<<endl;
 cout<<"F_thrust="<<mdot<<"×"<<Isp<<"×"<<g<<endl;
 cout<<"F_thrust="<<Fthrust<<endl;
 } // 2
 int main () {
 string num;
 while (true) {
 cout << "[1] VisViva Equation" <<endl;
 cout << "[2] Circular Satellite Speed"<<endl;
 cout << "[3] Escape Velocity"<<endl;
 cout << "[4] Burn Time Of Tsiolkovsky Equation"<<endl;
 cout << "[5] Deflection Angle Equation"<<endl;
 cout << "[6] Hohmann Transfer Orbit"<<endl;
 cout << "[7] Calculation Of Starting Point Of Center Body To Arrive At The Desirable Point Of Its Orbit In A Desirable Time"<<endl; // 2 Body oxi Object
 cout << "[8] The N-Body Problem"<<endl; // 2
 cout << "[9] Thrust Equation"<<endl;
 cout << "[i] Infrormation"<<endl;
 cout << "[99] Credits"<<endl;
 cout << "[100] Exit"<<endl; // 2
 cout <<"[~] Type a number:";
 getline(cin, num);
 if (num == "1") {
 visviva();
 }
 else if (num == "2") {
 CircularSatelliteSpeed();
 }
 else if (num == "3") {
 EscapeVelocity();
 }
 else if (num == "4") {
 BurnTimeOfTsiolkovskyEquation();
 }
 else if (num == "5") {
DeflectionAngleEquation();
 }
 else if (num == "6") {
    HohmannTransferOrbit();
 }
 else if (num == "7") {
    CalculationOfStartingPointOfCenterBodyToArriveAtTheDesirablePointOfItsOrbitInADesirableTime(); // 2 Body oxi Object
 }
 else if (num == "8") { // 2
   TheNBodyProblem();
 }
 else if (num == "9") {
 ThrustEquation();
 }
 else if (num == "i") {
 
 }
 else if (num == "99") {
   cout << "                                                       Programmers                                                                     "<<endl;
 
   cout << "                                                       Nick Pap"<<endl;

   cout << "                                                       Scientists"<<endl;

   cout << "                                                       Nick Pap"<<endl;

   cout << "                                                       Producers"<<endl;

   cout << "                                                       Nick Pap"<<endl;

   cout << "                                         C Copyright Nick Pap 2025||All Rights Reserved"<<endl;
}
 else if (num == "100") {
   exit(0);
 } // 2
 else { cout<<"oops wrong num"<<endl; }
  }
  return 0;
 } // 1
 // // //
 /*                      CLASS:                                         ID:                                                                                                  
         
                           1                                              1         17/7/2025 23:44                     */
 //                        2                                              2         18/7/2025 16:29