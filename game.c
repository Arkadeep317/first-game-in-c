#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int getcompinput;
//int getuserinput;
//void getwinner(int compinput , int userinput);


int getcompinput(){
    return (rand()%3)+1;
}


int getuserinput(){
    int choice=0;
    do{
        printf("Choose between rock paper and scissor\n\n");
        printf(" 1.Rock\n\n 2.paper\n\n 3.scissor\n\n");
        scanf("%d",&choice);
    
    }
    while (choice<1||choice>3);
    return choice;

    }


 int win(int compinput , int userinput){
    if (userinput==compinput)
        printf("its is a tie\n");		 
     else if(userinput==1 && compinput==3)
                printf("you win\n");  
        
	else if (userinput==2 && compinput==1)
        
       printf("you win\n");
        
         
				
     else if (userinput==3 && compinput==2)  
				printf("you win\n");
                

    else
		printf("you lose\n")  ;  
											
            

  
  }
  int main(){
    srand(time(NULL));

    printf("***********Rock Paper Scissor Game*********** \n");
    int userinput=getuserinput();
    int compinput=getcompinput();
    //int winner;
   // printf("%d\n",compinput);
   // printf("%d\n",userinput);
   switch (userinput){
    case 1:
        printf("you choose Rock\n");
          break;
   
    case 2 :
        printf("you choose Paper\n");
          break;
   
    case 3:
        printf("you choose scissor\n");
          break;
   }
   switch (compinput){
    case 1:
        printf("computer choose Rock\n");
          break;
   
    case 2 :
        printf("computer choose Paper\n");
          break;
   
    case 3:
        printf("computer choose scissor\n");
          break;
   }
   win(compinput,userinput);
   char a;

   //char y;
   //char Y;
   printf("Do you want to continue[Y/N]\n\n");
   scanf(" %c",&a);
   if (a=='y'|| a=='Y')
   		return main();

   	else
	    return 0;
   	
}