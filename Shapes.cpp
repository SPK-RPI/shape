//by SPK

#include<cstdlib>
#include<iostream>
#include<math.h>
#include<unistd.h>
#include<string>
#include<iostream>
using namespace std;
//################## CIRCLE ###################
int cir_area(){
		   float a,b;
	cout <<"Enter the radious of the circle: ";
               cin>>a;
    b=a*3.14;
    cout<<"The area of the circle is:"<<b<<endl;
	   return 0;
	}
int cir_circm(){
	float a,b;
	cout <<"Enter the radious of the circle: ";
               cin>>a;
    b=a*2*3.14;
    cout<<"The area of the circle is:"<<b<<endl;
	   return 0;
	
	}
int cir_vol(){
	float a,b;
	cout <<"Enter the radious of the circle: ";
               cin>>a;
    b=a*a*a*(4/3)*3.14;
    cout<<"The area of the circle is:"<<b<<endl;
	   return 0;
	}
int cir_surf(){
	float a,b;
	cout <<"Enter the radious of the circle: ";
               cin>>a;
   b=4*a*a*3.14;
    cout<<"The area of the circle is:"<<b<<endl;
	   return 0;
}
//#############################################



//################ CYLINDER ###################
int cyl_area(){
	float a,b,c;
	cout <<"Enter the hight of the cylinder : ";
              cin>>a;
    cout <<"Enter the radius of the cylinder : ";        
			  cin>>b;
    c=3.14*b*b;
cout<<"The area of the cylinder is :  " <<c<<endl;
return 0;
	}
int cyl_circm(){
	float a,b,c;
	cout <<"Enter the hight of the cylinder : ";
              cin>>a;
    cout <<"Enter the radius of the cylinder : ";        
			  cin>>b;
    c=2*3.14*a*b;
cout<<"The area of the cylinder is :  " <<c<<endl;
	return 0;
	}
int cyl_vol(){
	float a,b,c;
	cout <<"Enter the hight of the cylinder : ";
              cin>>a;
    cout <<"Enter the radius of the cylinder : ";        
			  cin>>b;
    c=3.14*a*b*b;
cout<<"The area of the cylinder is :  " <<c<<endl;
return 0;
	}
int cyl_surf(){
	float a,b,c;
	cout <<"Enter the hight of the cylinder : ";
              cin>>a;
    cout <<"Enter the radius of the cylinder : ";        
			  cin>>b;
    c=2*3.14*b*(b+a);
cout<<"The area of the cylinder is : "<<c<<endl;
	return 0;
	}
//#############################################




int circle(){ 
	char c;
	   int s;
	   do {
	cout<<"############## CIRCLE ############"<<endl;
	cout<<"# 1.Area                         #"<<endl;
    cout<<"# 2.Circomforence                #"<<endl;
    cout<<"# 3.Volume                       #"<<endl;
    cout<<"# 4.Surface area                 #"<<endl;
    cout<<"##################################"<<endl;
    cout<<" =====>> ";
    cin>>s;
	   switch(s){
		   case 1:cir_area();
		   break;
		   case 2:cir_circm();
		   break;
		   case 3:cir_vol();
		   break;
		   case 4:cir_surf();
		   break;
		   default: cout<<"Please enter only (1,2,3,4) !!!!!!!!"<<endl;
}
cout<<"Calculate for another circle.... (y or n); "<<endl;
cin>>c;
system("clear");
}
while(c=='y'||c=='Y');
return 0;
}
int cylinder(){
	char c;
	   int s;
	   do {
	cout<<"############## CYLINDER ############"<<endl;
	cout<<"# 1.Area                           #"<<endl;
    cout<<"# 2.Circomforence                  #"<<endl;
    cout<<"# 3.Volume                         #"<<endl;
    cout<<"# 4.Surface area                   #"<<endl;
    cout<<"####################################"<<endl;
    cout<<" =====>> ";
    cin>>s;
	   switch(s){
		   case 1:cyl_area();
		   break;
		   case 2:cyl_circm();
		   break;
		   case 3:cyl_vol();
		   break;
		   case 4:cyl_surf();
		   break;
		   default: cout<<"Please enter only (1,2,3,4) !!!!!!!!"<<endl;
}
cout<<"Calculate for another cylinder.... (y or n): "<<endl;
cout<<"====>> ";
cin>>c;
system("clear");
}
while(c=='y'||c=='Y');
return 0;
	}
int square(){
	float a,b;
	cout <<"Enter the length of a side : ";
              cin>>a;
    
    b=a*a;
cout<<"The area of the cylinder is :  " <<b<<endl;
return 0;
}
int ellipse(){
	float a,b,c;
	cout <<"Enter the x-axis of ellipse : ";
              cin>>a;
    cout <<"Enter the y-axis of the ellipse : ";        
			  cin>>b;
    c=3.14*a*b;
cout<<"The area of the ellipse is : " <<c<<endl;
return 0;
}
int rectangle(){
	float a,b,c;
	cout <<"Enter the length of the rectangle : ";
              cin>>a;
    cout <<"Enter the hight of the rectangle : ";        
			  cin>>b;
    c=a*b;
cout<<"The area of the rectangle is : " <<c<<endl;
return 0;
	}



//###################### MAIN ##################
int main(){
	char c;
	int s;
   do {
cout<<">>>>>>>>>>>>>> SIMPLE CALCULATOR <<<<<<<<<<<<<"<<endl;

cout<<"*********** Please Enter An Option ***********"<<endl;
cout<<"##############################################"<<endl;		
cout<<"#                 1.Circle                   #"<<endl;          
cout<<"#                 2.cylinder                 #"<<endl;         
cout<<"#                 3.Square                   #"<<endl;           
cout<<"#                 4.Ellips                   #"<<endl;           
cout<<"#                 5.Rectangle                #"<<endl;        
cout<<"##############################################"<<endl;		

    cout<<" =====>> ";
    cin>>s;
    switch(s){
               case 1:circle();
              
               break;
               case 2: cylinder();
               break;    
               case 3:square();
               break;
               case 4:ellipse();
               break;
               case 5:rectangle();
               default: cout<<"Please enter only (1,2,3,4,5) !!!!!!!!"<<endl;
}
cout<<"Try another shape......(y or n) "<<endl;
cin>>c;
sleep(2);
//system("clear");
}
while(c=='y'||c=='Y');
return 0;
}
//##############################################

