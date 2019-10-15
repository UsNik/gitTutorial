#include <stdio.h> 
int main(void){
	
  int age, height, weight;
  double bov_m, bov_f;
    char m,f,pol;
  scanf("%c %i %i %i",&pol, &age, &height, &weight);
    
    switch(pol) {
        case 'm' : printf("|  BMR  |\n");
            printf("%c%.2lf%c",'|',(double)(10*weight + 6.25*height - 5*age + 5),'|');       
            break;
        case 'f' : printf("|  BMR  |\n");
            printf("%c%.2lf%c",'|',(double)(10*weight + 6.25*height - 5*age - 161),'|');
            break;
            default : printf("ERROR!"); break;
            
    }
      return 0;
}