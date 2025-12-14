#include<stdio.h>
int main()
{
    printf("Welcome to University Admission Portal\n");
    
    char is_bdr;
    
    int p,a;
    const int yr=2026;
    float b,d;
    
    printf("Are you a domestic resident?(Y/N) :");
    
    scanf("%C",&is_bdr);
    
    if(is_bdr=='Y'){
        printf("What is your year of birth?\n");
        
        scanf("%d",&a);
        p=yr-a;
         
         
         if(p>=18 && p<=24){
             printf("Enter your previous year GPA: ");
             scanf("%f",&b);
             
             if(b>=3.50 && b<=5.00){
                 printf("Congratulations, you're applicable.");
             }
             else{
                 printf("Sorry, you are NOT applicable.");
             }
         }
         
         else{
             printf("Sorry your not Eligable.");
         }
         
         
         
        
        
    }
    
    else if(is_bdr='N'){
        printf("What is your Birth Year?\n");
        scanf("%d",&a);
        p=yr-a;
        
        if(p>=18 && p<=26){
            printf("Enter your IELTS Score: ");
            scanf("%f",&d);
            
            if(d>=5.5 && d<=10){
                printf("Congratulations, You are Applicable.");
            }
            else{
                printf("Sorry, you are not applicable.");
            }
        }
        else{
            printf("Sorry, you can't apply.");
        }
    }
    
    
    else{
            printf("Your input isn't VALID");
        }
    return 0;
}