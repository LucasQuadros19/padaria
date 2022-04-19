#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    int pf=10,pc=20,br=5,so=30,tu=50,quant=0,opc=0,i=0,vol=0;
    float pre2=0,pre=0;
    // int e float para guardar informacao
    char nome[5][20]={"pao de forma  ","pao de centeio","broa de milhon","sonho         ","tubaina       "}; //nao funciona na struct ????

    struct menu_de_compras{
        int quant2[25],nome3[25];
        float svalor[25],uni[25];
    };
    // struct para guardar vetor
    struct menu_de_compras menu;
    do{
        vol=0; 
         system("clear");
        printf("1-Realizar uma venda\n2-Imprimir lista de produtos\n0-sair\nescolher=");
        scanf("%d",&opc);
        getchar();
        switch (opc){
        case 1:   
      do{ 
        float pre=0; 
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
                if(quant>pf){                               // caso o pedido seja maior q o estoque 
                    printf(" excedeu o limite de %d \n",pf);
                    sleep(2);
                    opc=1;              // voltar para o inicio
                    continue;
                    } else{
                        pf-=quant;   // baixa no estoque 
                    printf("vc quer=%d ",quant);   
                    pre=7.50;                         // preco
                    } 
                break;
            case 2:     
                if(quant>pc){
                    printf(" excedeu o limite de %d \n",pc);   
                    sleep(2);
                    opc=1;
                    continue;
                    } else{
                        pc-=quant;  
                    printf("vc quer=%d ",quant);
                    pre=8.69;
                    }
                break;
            case 3:
                if(quant>br){
                    printf(" excedeu o limite de %d \n",br);
                    sleep(2);
                    opc=1;
                    continue;
                    } else{
                        br-=quant;  
                    printf("vc quer=%d ",quant);
                    pre=5.00;
                    }
                break;
            case 4:
                if(quant>so){
                    printf(" excedeu o limite de %d \n",so);
                    sleep(2);
                    opc=1;
                    continue;
                    } else{
                        so-=quant;  
                    printf("vc quer=%d ",quant);
                    pre=4.50;
                    }
                break;
            case 5:
                if(quant>tu){
                    printf(" excedeu o limite de %d \n",tu);
                    sleep(2);
                    opc=1;
                    continue;
                    } else{
                        tu-=quant;  
                    printf("vc quer=%d ",quant);
                    pre=3.25;
                    }
                break;
        } 
        menu.uni[vol]=pre;    //preco unitario
        pre*=quant;           // sub total
        pre2+=pre;            // preco total                                                
        menu.svalor[vol]=pre;   // guarda o sub total
        menu.quant2[vol]=quant;  // quantidade do produto 
        opc-=1;         // menos para guardar no vetor 0
        menu.nome3[vol]=opc;  //guarda as opcs selecionadas para mostrar em qual foi no char 
        printf("\npedir de novo=");
        scanf("%d",&opc);
        getchar(); 
        if(opc==1)
        vol++;
    }while(opc==1);  
    system("clear");
    for(i=0;i<=vol;i++){                                                                                    // mostra as opc
            printf("\titems=%d\tnome=%s \tpreco unitario=R$%0.2f\tquantidade=%d\tsub-valor=R$%0.2f\n ",i+1,nome[menu.nome3[i]],menu.uni[i],menu.quant2[i],menu.svalor[i]);
            // menu final 
            sleep(1);
    }
        printf("\n\t\t\t\t\tvalor total=R$%0.2f",pre2);
            break;
            case 2: 
            system("clear");
            printf("1-pao de forma=%d\n2-pao de centeio=%d\n3-broa de milho=%d\n4-sonho=%d\n5-tubaina=%d\n",pf,pc,br,so,tu); 
            //menu de estoque 
            break;
        default:
            break;
        }    
        printf("\n\nvoltar");
        scanf("%d",&opc);
    }while(opc==1);
    return 0;
    }
