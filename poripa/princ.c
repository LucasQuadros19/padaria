#include <stdlib.h>
#include <stdio.h>
// #include "bil.h"
int main(){
    int pf=10,pc=20,br=5,so=30,tu=50,quant=0,quant2[25],opc=0,pre=0,i=0,item=0;
    float pre2=0,svalor[25],uni[25];
    
    char nome[6][20]={"n","pao de forma  ","pao de centeio","broa de milhon","sonho         ","tubaina       "};
    int nome2[25];

    
     
    // struct menu_compras{
    //         //  char nome[5][10]={"pao de forma","pao de centeio"};
    //         //  float svalor[25];                                          ------------em desenvolvimento----------
    //         //  int quantidade;
    //          };
    //          struct menu_compras com;
    do{
        item=0; 
         system("clear");
        printf("1-Realizar uma venda\n2-Imprimir lista de produtos\n0-sair");
        scanf("%d",&opc);
        getchar();
        switch (opc){
        case 1: 
         
          
      do{ 
        int num=0; 
        float pre; 
        item++;
        system("clear");
        printf("1-pao de forma=R$7.50\n2-pao de centeio=R$8.69\n3-broa de milho=R$5.00\n4-sonho=R$4.50\n5-tubaina=R$3.25\nescolha="); 
        scanf("%d",&opc);
        getchar();
        system("clear");
        printf("qual a quantidade=");
        scanf("%d",&quant);
        getchar();
        system("clear");
        switch(opc){  
            case 1: 
               
                if(quant>pf){
                    printf(" excedeu o limite de %d \n",pf);
                    } else{
                        num=pf;
                        num-=quant;  
                    printf("vc quer=%d ",quant);
                        pf=num;
                    }
                    pre=7.50;
                break;
            case 2:
                pre=8.69;
                if(quant>pc){
                    printf(" excedeu o limite de %d \n",pc);   
                    } else{
                        num=pc;
                        num-=quant;  
                    printf("vc quer=%d ",quant);
                        pc=num;
                    }
                break;
            case 3:
                pre=5.00;
                if(quant>br){
                    printf(" excedeu o limite de %d \n",br);
                    } else{
                        num=br;
                        num-=quant;  
                    printf("vc quer=%d ",quant);
                        br=num;
                    }
                break;
            case 4:
                pre=4.50;
                if(quant>so){
                    printf(" excedeu o limite de %d \n",so);
                    } else{
                        num=so;
                        num-=quant;  
                    printf("vc quer=%d ",quant);
                        so=num;
                    }
                break;
            case 5:
                pre=3.25;
                if(quant>tu){
                    printf(" excedeu o limite de %d \n",tu);
                    } else{
                        num=tu;
                        num-=quant;  
                    printf("vc quer=%d ",quant);
                        tu=num;
                    }
                break;
        }
        uni[item]=pre;
        pre*=quant;
        pre2+=pre;
        svalor[item]+=pre;
        quant2[item]=quant;
        nome2[item]=opc;
        
        
        
        printf("\npedir de novo=");
        scanf("%d",&opc);
        

    }while(opc==1);  
    system("clear");

    for(i=1;i<=item;i++){
            printf("\titems=%d\tnome=%s \tpreco unitario=R$%0.2f\tquantidade=%d\tsub valor=R$%0.2f\n ",i,nome[nome2[i]],uni[i],quant2[i],svalor[i]);
    }
        printf("\n\t\t\t\t\tvalor total=R$%0.2f",pre2);
            break;

            case 2: 
            system("clear");
            printf("1-pao de forma=%d\n2-pao de centeio=%d\n3-broa de milho=%d\n4-sonho=%d\n5-tubaina=%d\n",pf,pc,br,so,tu); 
            break;
        
        default:
            break;
        }
        
        printf("\nvoltar");
        scanf("%d",&opc);
    }while(opc==1);
    return 0;
    }
