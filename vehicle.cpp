//including all necessary libraries

#include<stdio.h>  
#include <string.h>    
#include <stdlib.h>

// creating the vehicle structure 
typedef struct
{    
    int vehicle_no;    
    char vehicle_name[10];    
    char vehicle_manu[20];
    int date_manu;
    float top_speed;
    int no_of_seats;
    float mass;
} Vehicle;    

//creating typedef of vehicle structure
typedef Vehicle vehicle_t;

//creating an array for the typedef created above
vehicle_t vehicle_info[50];

// function declarations
void display();
void search();
void calculate();


int main()
{    
     //declaring choice and loop variables
    int ch,i;
 
    // taking the user input for 5 vehicles
    printf("Enter Records of 5 vehicles"); 

      
    for(i=0;i<5;i++)
    {    
        printf("\nEnter vehicle no:");    
        scanf("%d",&vehicle_info[i].vehicle_no);
        
        printf("\nEnter vehicle Name:");    
        scanf("%s",vehicle_info[i].vehicle_name); 
        
        printf("\nEnter vehicle manufacturer:");    
        scanf("%s",vehicle_info[i].vehicle_manu); 
        
        printf("\nEnter date of manufacture:");    
        scanf("%d",&vehicle_info[i].date_manu); 
        
        printf("\nEnter top speed:");    
        scanf("%f",&vehicle_info[i].top_speed); 
        
        printf("\nEnter no of seats:");    
        scanf("%d",&vehicle_info[i].no_of_seats); 
        
        printf("\nEnter mass:");    
        scanf("%f",&vehicle_info[i].mass); 
        
    }  
    
//  creating the Menu driven functionality
     while(1)// loop until true
     {
         printf("\n1. Display Vehicles information\n");
         printf("2. Search for a vehicle\n");
         printf("3. Calculate the impact force\n");
         printf("4. Exit\n");
         
         printf("enter your choice:\n");//entering your choice
         scanf("%d",&ch);
         
         // swicting between choices entered by the user
         switch(ch)
         {
             case 1: display(); break;
             case 2: search() ; break;
             case 3: calculate(); break;
             case 4: exit(1);
         }
     }
       
   return 0;    
}   

// Simply displays the array of structures while iterating through for loop
void display()
{
    printf("\nVehicle Information List:\n");    
    for(int i=0;i<5;i++){    
        printf("vehicle no\tvehicle Name\tvehicle manufacture\tdate of manufacture\ttop speed\tno of seats\tmass\n");
        printf("\n%d\t%s\t%s\t%d\t%f\t%d\t%f",vehicle_info[i].vehicle_no,vehicle_info[i].vehicle_name,vehicle_info[i].vehicle_manu,vehicle_info[i].date_manu,vehicle_info[i].top_speed,vehicle_info[i].no_of_seats,vehicle_info[i].mass);    
    } 
}

//searches for the information about a specific vehicle
void search()
{
    int n;
   //takes user input
    printf("Enter the vehicle number you want to search");
    scanf("%d",&n);
    //checks for value of n
    if(n==1 ||n ==2 || n==3 || n==4 || n==5)
    
        
   {
    //iterates through the array of structure
    for(int i=0;i<5;i++){  
     //checks for a match of the vehicle number eneterd by user  
        if(vehicle_info[i].vehicle_no==n)
        {
            printf("\nVehicle Information:\n");   
            printf("vehicle no\tvehicle Name\tvehicle manufacture\tdate of manufacture\ttop speed\tno of seats\tmass\n");
            printf("\n%d\t%s\t%s\t%d\t%f\t%d\t%f",vehicle_info[i].vehicle_no,vehicle_info[i].vehicle_name,vehicle_info[i].vehicle_manu,vehicle_info[i].date_manu,vehicle_info[i].top_speed,vehicle_info[i].no_of_seats,vehicle_info[i].mass);    
        }
        
    } 
    } else
        {
           //prints error message if there is no match
            printf("ERROR!Please Enter correct vehicle number!");
        }

}

//calculates the impact of force
//using the formula given above in the question 

void calculate()
{
    //local variables for velocity, stopping distance and impact of force
    float  velocity, stop_dist, impact;

    //takes user input 
    printf("enter the velocity in km/hr\n");
    scanf("%f",&velocity);
    printf("enter the stopping distance\n");
    scanf("%f",&stop_dist);
    
    //checks if velocity and stop distance are equal to zero
    if(velocity==0 || stop_dist==0 )
    {
        //prints error msg

        printf("ERROR!! please enter values greater than zero");
    }
    
    else
    {
        //iterates through loop
        for(int i=0;i<5;i++)
        {    
            //checks if velocity entered is greater than top speed
            if(velocity >vehicle_info[i].top_speed )
            {
                 //prints error msg
                printf("ERROR!! velocity cannot be greater than top speed");
                continue;
            }
            else
            {
             //displays the ionformation along with the calculated impact force

        printf("\nvehicle no\tvehicle Name\tmass\ttop speed\tVelocity\tstopping distance\tforce of impact");
        impact=0.5*vehicle_info[i].mass*(velocity*velocity)/stop_dist; 
      
        printf("\n %d \t %s \t %f \t %f \t %f \t %f \t %f \n",vehicle_info[i].vehicle_no,vehicle_info[i].vehicle_name,vehicle_info[i].top_speed,vehicle_info[i].mass,velocity,stop_dist,impact);   
            }
        }
    }
    
    
}
