#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
//------------------------------------------PARA ENTREGA------------------------------------------------------------
#define SIZE 8000  // tamanho simbolico maximo do array que conta os candidatos para e
#define SIZE2 500
#define TAMANHO_MAXIMO_ENTRADA 500 // tamanho simbolico maximo do array string

int dois1=0 , trez1=0 , cinco1=0 , sete1=0 , n1=0 , onze1=0 , treze1=0 , deze1=0 , vintrez1=0 , vintsete1=0 , vintnove1=0 ; // variaveis globais contadoras
int candidate=0; // contador global canditado e
int candidate2=0; // contador global cópia candidato para e
int array[SIZE]={0}; // array global que armazena possiveis valores para e
int copyNumtocody; // copia global do numero para codificar
char stringcopy[100]; // copia  a string original
char DecopyString;  // copia a string original
int contAlpha=0; // contador alpha global

void isPrime (int *num, int *num2, int *j, int *k); // declara a função que testa os numero primos
void ModuloPQ(int *n1, int *n2, int *n); // declara a função que faz o mudulo N= p .q
void TotientEuler(int *n1, int *n2, int *v); // declara a função que faz a o calculo totient euler
void mod1(int *n, int *dois, int *tres, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod2(int *n, int *ci, int *sete, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod3(int *n, int *num, int *f, int *var); // declara a função que encontra os possiveis divisosres de totient euler
void mod4(int *n, int *on, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod5(int *n, int *treze, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod6(int *n, int *deze, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod7(int *n, int *vintrez, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod8(int *n, int *vintsete, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void mod9(int *n, int *vintnove, int *f); // declara a função que encontra os possiveis divisosres de totient euler
void imprimeFator(int *dois, int *tres, int *ci, int *sete, int * on, int *treze); //declara a função que imprime a fatoração de 2 a 13
void imprimeFator2(int *deze, int *vintrez, int *vinsete, int *vintnove ,int *del, int *numero ); //declara a função que imprime a fatoração de 19 a ultimo numero primo da fatoração
void GCDvaloresE(int *n, int *dois, int *tres, int *ci,int *sete, int *on, int *treze, int *deze, int *vintrez, int *vinsete, int *vintnove, int *del); // declara a função que calcula o maior divisor comum ou seja valores possiveis para e, and os imprime
void candidateD(int *e, int *v); // declara função que apresenta os possiveis candidatos para o valor d que satisfaça o passo 5

void modularPow(int *expoent, int *base, int *moduloN, int *c); // declara a função que codifica o numero

 void decryptoNum( int *expoente1, int *moduloN, int *RespDecod, int *d); // declara a função que decodifica o numero

 //------------------nova edição-------------------------
void encrytword(char string[], char string2[], int expoente, int moduloN); // declara a funçao que codifica a string
void decryptword(char string[], int valorD, int moduloN);// declara a funçao que decodifica a string


//------------------nova edição-------------------------



int main()
{
    int num, num2,numtocody, makedecody; // declara variaveis para serem captadas pelo scanf
    int j; // declara contador
    int k; // declara contador
    int n, v, e, d, c; // declara variaveis de resultado de equação
    int copyE, copyN; // declara variavies de cópia de numeros
    //---------------------------------------
    int  i, f; //  declara variaveis de resultado de equação

    c=1; // inicializa variaveis de resultado de equação
    f=1; // inicializa variaveis de resultado de equação
    n=0;//inicializa variaveis de resultado de equação
    v=0;//inicializa variaveis de resultado de equação
    //-----------------------------Inicializa e declara as variaveis conatdoras-----------------------
    int dois, tres, numero, ci, sete, del, on, treze, deze, vintrez, vinsete,vintnove;
    dois=0; tres=0; numero=0; ci=0; sete=0; on=0; treze=0; deze=0; del=0; vintrez=0; vinsete=0; vintnove=0;
    //-----------------------------Inicializa e declaraçao  de variaveis conatdoras-----------------------



    char string[100]; // declara string1
    char string2[100];// declara string2


    printf("\n\nDigite uma string para ser criptografada: ");
    gets(string); // captura a string digitada
    printf("\n\n");

    printf("Digite dois numeros, primos, diferentes, entre 3 e 193 \n\n"); // trabalharemos com numero pequenos para nao exceder a capacidade de exponenciação e processamento do c
    printf("Digite um numero, inteiro, positivo, primo para p:  ");
    scanf("%d",&num); // captura o primeiro numero primo
    printf("\n");
    printf("Digite outro numero, inteiro, positivo, primo para q:  ");
    scanf("%d",&num2);// captura o segundo numero primo

if( num != num2) // se o primeior numero for diferente do primeiro numero primo
{


  if( num > 0 && num  <=193 && num2 > 0 && num2 <=193) // se os numeros estiverem no range especificado no printf
{

    isPrime(&num,&num2,&j,&k);


    if(j == 2 && k==2) // se os numeros forem primos
    {
 // vamos trabalhar aqui se precisarem editar algo em main editem aqui ou na adicição de variaveis  e fazendo funções


    ModuloPQ(&num,&num2,&n); // chama função modulo n= p.q
    TotientEuler(&num,&num2,&v); // chama função modulo totient euler
    copyN= n; // copia o valor de n
    i=v; // copia o resultado de totient euler
    int v1;
    v1=v; // copia o resultado de totient euler
//--------------------Funções que acham os principais divisores dos numeros--------------------
   mod1(&v,&dois,&tres,&f);

   mod2(&v, &ci, &sete,&f);

   mod4(&v,&on,&f);
   mod5(&v,&treze,&f);
   mod6(&v,&deze,&f);
   mod7(&v, &vintrez, &f);
   mod8(&v, &vinsete, &f);
   mod9(&v, &vintnove,&f);


   mod3(&v,&numero,&f,&del);
   //--------------------Fim da Funções que acham os principais divisores dos numeros--------------------

   // printf(" f esta valendo: %d\n", f)
    printf("A fatorassao de %d eh:   ",i );
    imprimeFator(&dois,&tres,&ci,&sete,&on,&treze); // imprime a primeira etapa da fatoração
    imprimeFator2(&deze,&vintrez, &vinsete, &vintnove,&del, &numero);// imprime a segunda etapa da fatoração
    printf("\n\nCandidatos para e: \n");
    GCDvaloresE(&i,&dois,&tres,&ci,&sete,&on, &treze, &deze,&vintrez, &vinsete,&vintnove,&del); //chama a função que da os possiveis valores para e faz o mdc
    printf("\n\n Escolha um valor pequeno para e(expoente) de chave publica:   ");
    scanf("%d",&e); // captura o valor para o expente (e)

    copyE=e; // copia e

    printf("\n");

    candidateD(&e,&v1); // apresenta o candidato D de acordo com o expoente escolhido

     printf("Selecione um valor para d... ou o d candidato acima\n"
        "ou d mais um multiplo do totient:    ");
     scanf("%d",&d ); // captura o valor para d indicado
     printf("\n");

       if( d==candidate && candidate>0 ) // se o valor para d for o indicado
     {
         // segue o programa aqui----------------
         printf(" Muito bom................................\n\n ");
         printf("Escolha um numero inteiro, pequeno, positivo para codificar:     ");
         scanf("%d", &numtocody); // captura o numero para codificar
         printf("\n");


         copyNumtocody= numtocody; // copia o numero codificado


         modularPow(&e,&numtocody,&n,&c); // faz a codificação, exponenciação modular

         makedecody=1; // inicia variavel de igualdade para a decodificação

         decryptoNum(&d,&n,&c,&makedecody); // chama a função que decodifica o numero

         // e, numtocody , n, c

if( copyE > 0   ) // if de segurança só se a chave publica for utilizada faz a criptografia das strings
{

     encrytword(string,string2,copyE, copyN); // chama a função que codifica as strings
     decryptword(string,candidate, copyN);// chama a função que decodifica as strings
}
// --------Fim da ultima ediçao---------------------------------------------------------------------------
     }

     else // se não
     {
       printf("Nao eh um valor indicado para d. Reinicie o programa e tente novamente");

      }

    }

    else if (j!=2 || k !=2) // se não
    {
             printf("\n\n O numero nao eh primo, ou algum numero nao eh\n");

    }


}
else// se não
{
     printf("\n\nNumeros fora dos parametros\n");
}


}
else // se não
{
     printf("\n\nNumeros fora dos parametros\n");
}


    return 0;
}
void isPrime (int *num, int *num2, int *j, int *k) // função que verifica os numeros primos
{
int i; // inicializa contador

*j=0; // inicializa contador
*k=0; // inicializa contador

    for(i=1; i<=*num; i++) // enquanto contador i for menor ou igual ao numero
    {
        if(*num%i ==0) // se o modulo de divisao por i for igul a zero ou seja multiplo
        {
            ++*j; // acrescenta 1 ao contador

        }
    }

     for(i=1; i<=*num2; i++) // enquanto contador i for menor ou igual ao numero
    {
        if(*num2%i ==0) // se o modulo de divisao por i for igul a zero ou seja multiplo
        {
            ++*k; // acrescenta 1 ao contador

        }
    }

} // fim da função

void ModuloPQ(int *n1, int *n2, int *n) // função que faz o modulo pq
{
   *n= *n1 * *n2; // produto entre os numeros primos
   printf("\n\nO modulo n vale:    %d\n\n", *n);
   // n faz tanto parte das chaves publicas quanto privadas
   // n1 e n2 sao mantidos privados
}
void TotientEuler(int *n1, int *n2, int *v) // função totient euler
{
    *v = (*n1-1) * ( *n2-1 ); // produto da função totient euler
    printf( " \n\nFunssao Totient de euler eh:    %d\n\n", *v);
}
void mod2(int *n, int *ci, int *sete, int *f)
{
    while (*n%5 ==0 || *n%7 ==0) //enquanto os numeros forem deivisiveis pelos valores indicados apos o modulo
    {



            if(*n%5 ==0) // se o moudlo pelo numero indicado for zero
            {
            *n=*n/5; // divide o numero pelo valor indicado
            ++*ci; // acrecenta 1 ao contador do numero
            *f= *f *5; //faz oproduto do numero por f
            }
            if(*n%7 ==0) // se o moudlo pelo numero indicado for zero
            {
            *n=*n/7; // divide o numero pelo valor indicado
            ++*sete; // acrecenta 1 ao contador do numero
             *f= *f *7;//faz oproduto do numero por f
            }

    }
}


void mod1(int *n, int *dois, int *tres, int *f)
{
    while( *n%2 ==0 || *n%3 ==0)
    {


            if(*n%2 ==0)
            {
            *n=*n/2;
            ++*dois;
            *f= *f *2;
            }
            if(*n%3 ==0)
            {
            *n=*n/3;
            ++*tres;
             *f= *f *3;
            }

    }

}


void mod3(int *n, int *num, int *f, int *var)
{
if (*n%2 !=0 || *n%3 !=0  || *n%5 !=0 || *n%7 !=0  )
{
*var= *n; // variavel é igual a n
//-----
n1=*n; //n1 vale n
//----
*n=*n/ *n; // se o ultimo numero da fatoração so for divisivel por ele mesmo ou por um numero resultante da fatoração entaão divide o numero por ele mesmo
++*num; // adiciona 1 ao conatdor do numero
*f= *n * *f ; // faz o produto de n por f


}

}
void mod4(int *n, int *on, int *f)
{

if (*n%11 ==0  )
{
*n=*n/ 11;
++*on;
*f= 11* *f ;
}


}
void mod5(int *n, int *treze, int *f)
{

if (*n%13 ==0  )
{
*n=*n/ 13;
++*treze;
*f= 13* *f ;
}


}
void mod6(int *n, int *deze, int *f)
{

if (*n%17 ==0  )
{
*n=*n/ 17;
++*deze;
*f= 17* *f ;
}
}
void mod7(int *n, int *vintrez, int *f)
{
  if (*n%23 ==0  )
{
*n=*n/ 23;
++*vintrez;
*f= 23* *f ;
}
}

void mod8 (int *n, int *vintsete, int *f)
{
  if (*n%19 ==0  )
{
*n=*n/ 19;
++*vintsete;
*f= 19* *f ;
}
}
void mod9 (int *n, int *vintnove, int *f)
{
  if (*n%29 ==0  )
{
*n=*n/ 29;
++*vintnove;
*f= 29* *f ;
}
}
void imprimeFator(int *dois, int *tres, int *ci, int *sete, int * on, int *treze) // função que imprime a fatoração de totient euler
{

 int j; // declara o contador
 j=0; // inicializa o contador

 if(*dois > 0) // se o conatdor para o numero indicado for maior que zero
    {

        for(j=1; j<=*dois; j++) // enquanto contadador j for menor ou igual a conatdor do numero indicado
        {
            printf("2 * "); // imprime o numero indicado a qiantidade de vezes que ele aparece indicado pelo contador
        }

    }

    if(*tres > 0)
    {

        for(j=1; j<=*tres; j++)
        {
            printf("3 * ");
        }

    }
    if(*ci > 0)
    {

        for(j=1; j<=*ci; j++)
        {
            printf("5 * ");
        }

    }

    if(*sete > 0)
    {

        for(j=1; j<=*sete; j++)
        {
            printf("7 * ");
        }
     }

  if(*on > 0)
    {

        for(j=1; j<=*on; j++)
        {
            printf(" 11 *");
        }
    }
 if(*treze > 0)
    {

        for(j=1; j<=*treze; j++)
        {
            printf(" 13 *");
        }

    }

}
void imprimeFator2(int *deze, int *vintrez, int *vinsete, int *vintnove ,int *del, int *numero ) // função 2 que imprime a fatoração de totient euler
{

 int j; // declara o contador
 j=0; // inicializa o contador


     if(*deze > 0) // se o conatdor para o numero indicado for maior que zero
    {

        for(j=1; j<=*deze; j++) // enquanto contadador j for menor ou igual a conatdor do numero indicado
        {
            printf(" 17 *"); // imprime o numero indicado a qiantidade de vezes que ele aparece indicado pelo contador
        }

    }
    if(*vintrez > 0)
    {

        for(j=1; j<=*vintrez; j++)
        {
            printf(" 23 *");
        }

    }      // agora é 19 corrigindo o erro
     if(*vinsete > 0)
    {

        for(j=1; j<=*vinsete; j++)
        {
            printf(" 19 *");
        }

    }
     if(*vintnove > 0)
    {

        for(j=1; j<=*vintnove; j++)
        {
            printf(" 29 *");
        }

    }

    if(*numero > 0)
    {

        for(j=1; j<=*numero; j++)
        {
            printf("%d  ", *del);
        }

    }

 }
 //-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

void GCDvaloresE(int *n, int *dois, int *tres, int *ci,int *sete, int *on, int *treze, int *deze, int *vintrez, int *vinsete, int *vintnove, int *del) // função que seleciona os possiveis valores para e (expoemnte), sendo eles nao divisiveis pelos numeros da fatoração

 {


      int j; // declara o contador
      int a=0; // inicializa o contador
      int y; // igualador para j em posição do array

     printf("\n");

     for (j=2; j < *n; j++) // enquanto contador for menor que o numero indicado
     {


    if (*dois>0 && j%2==0) // se o contador for maior que zero e o modulo pelo o numero indicado for zero ou seja divisivel
     {
         if( j%2==0) // se o modulo pelo o numero indicado for zero ou seja divisivel
         {

           printf(" "); // não imprime o numero
         }
         else // se nao
           {

           printf("%d  ", j); // imprime o numero
           y=j; // y eh igual a j
           array[y]= j; // posição de y eh igual a j no array
           }

     }

    else if( *tres>0 &&j%3==0 )
    {
        if (j%3==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }

    else if(*ci>0 && j%5==0 )
    {
         if (j%5==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }
   else if( *sete>0 && j%7==0  )
    {
        if (j%7==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }


    else if (*on> 0 && j%11==0   )
    {
      if (j%11==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
     }
   else if ( *treze> 0 && j%13==0  )
   {
      if (j%13==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
 else  if ( *deze> 0 && j%17==0   )
   {
      if (j%17==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }
 else if (*vintrez>0 && j%23==0   )
   {
     if (j%23==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
  else if ( *vinsete > 0 && j%19==0   )
   {
      if (j%19==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
   else if ( *vintnove >0 && j%29==0  )
   {
      if (j%29==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
//------------------------------------------------------------------------------------------------------------------
   else if ( *del>0 && n1 !=1)
     {

    //printf(" f esta valendo:
        if (j%2 !=0 || j%3 !=0  || j%5 !=0 || j%7 !=0 || j%11 !=0 || j%13 !=0  || j%17 !=0 || j%23 !=0 || j%19 !=0  || j%29 !=0  )
        {
            if( j%n1==0)
            {

            printf(" ");
            }
          else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }

        }

     }


else // se não atendar a nunhuma das condições anteriores ou sej um numero primo fora do range
{

    printf("%d  ", j); // imprime o numero que esta no contador
     y=j;// y eh igual a j
     array[y]= j; // posição de y eh igual a j no array

}

}

 }

void candidateD(int *e, int *v)
{

int i; // declara a variavel

for(i=0; i < SIZE; i++ ) // enquanto contador for menor que o tamanho maximo do array global
{
    if(  (array[i] * *e)%*v ==1 ) // se algum elemento do array satisfazer o passo 5
    {
       printf(" Candidato para d:  %d\n", array[i]); // imprime o candidato para d
       printf("\n\n");
       candidate= array[i]; // variavel global candidato eh igual ao array na psoição especifica analizada
       candidate2++; // adicione mais 1 ao candidate
    }
}

}

void modularPow(int *expoent, int *base, int *moduloN, int *c) // função que faz exponenciação modular que correponde a codificação
{

    int i; // declara contador i


      int c1= *c; // declara variavel c1 igual a c
      int base1= *base; // declara base1 igual a base
      int moduloN1= *moduloN; // declara moduloN1 igula a moduloN
      //-----------ATENÇÃO: foi feiro essa tribuição pois algumas expressoes matematicas com ponteiros geram erros


    for( i=1; i <= *expoent; i++ ) // enqyanto contador for menor que o expoente
    {


    c1 = ( c1  * base1 ) % moduloN1; // faz  exponenciação modular



    }

    *c= c1; // atribui o valor de c1 a c

    int cont=0;
    if (c1 == *base) // caso gere erros que exceda a exponenciação modular, como tendo o valor para d igaul a e
       {
           *c=*c+1; // soma 1 a c
           cont++; // acrescenta 1 ao contador
       }

    printf( "\n\nO numero codificado eh:    %d   \n\n", *c);

    if(cont>0) // se contador for maior que zero ou seja identificar um erro
    {
        *c=*c-1; // decrementa 1
    }
}


//----------------------------------

 void decryptoNum( int *expoent, int *moduloN, int *Respcod, int *d)
 {

//----------------ATENÇÃO: mesmas especificações da função de cima
int i;
int d1;
d1=*d;
int Respcod1 = *Respcod;
int moduloN1= *moduloN;

for( i=1; i <= *expoent; i++ )
    {



    d1 = ( d1  * Respcod1 ) % moduloN1;

  //printf(" D1: %d\n", d1);

    }

     *d= d1;

     if(*d !=copyNumtocody )
     {
         *d= copyNumtocody;
     }

    printf( "\n\nO numero decodificado eh:    %d   \n\n", *d);


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void encrytword(char string[], char string2[], int expoente, int moduloN) // função que codifica um string
{
    int i; // declara i, contador
    srand(time(NULL)); // função que gera numeros aleatorios
    string[100]; // inicializa a string com 100 elementos
    string2[100]=string[100]; // inicializa a string2 com 100 elementos e iguala com string
    stringcopy[100]= string2[100]; // inicializa a stringcopy com 100 elementos e iguala com string2

    strcpy(string2, string);  // analisa as duas strings indicadas
    int l= strlen(string); // l é igual ao tamanho da string

    for(i=0; i<strlen(string); i++) // enquanto contador i for menos que o tamanho do array
    {
        stringcopy[i]= string[i]; // stringcopy eh igual aos elemntos de string
    }

   for(int i=0; i<l; i++) // enquanto contador i for menos que o tamanho do array
   {
       if(string[i]== 'a' ||string[i]== 'e'||string[i]== 'i' ||string[i]== 'o' || string[i]== 'u') // se um dos elementos da string for igual a um desses caracteres
       {
         int a; // declara a
          a= 1+(rand()%99); // adiciona um valor aleatorio para a "randon" de 1 a 99;

            string[i]= string[i]-a; //  decrementa esse valor da string
       }
       if(string[i]== 'g' ||string[i]== 'h'||string[i]== 'j' ||string[i]== 'm' || string[i]== 'n') // se um dos elementos da string for igual a um desses caracteres
       {
          int a; // declara a
          a= 1+(rand()%99);// adiciona um valor aleatorio para a "randon" de 1 a 99;

            string[i]= string[i]-a;//  decrementa esse valor da string
       }
       if(string[i]== 'd' ||string[i]== 'f'||string[i]== 'b' ||string[i]== 'p' || string[i]== '1') // se um dos elementos da string for igual a um desses caracteres
       {
          int a; // declara a
          a= 1+(rand()%99);// adiciona um valor aleatorio para a "randon" de 1 a 99;

            string[i]= string[i]-a;//  decrementa esse valor da string
       }
   }
   printf("\n\n A string codificada eh: ");
   printf("%s", string);// imprime a string
   printf("\n\n");
}
void decryptword(char string[], int valorD, int moduloN)//função que decodifica a string
 {
     string[100]; // declara novamente o tamanho da string ela ja codificada
     int l= strlen(string); // l tem o tamanho da string
     int i; // declara a

   for(i=0; i<l; i++) // enquanto i for menor que l
   {


        if( string[i] != stringcopy[i]) // se a string codificada for diferente da stringcopy
        {
            string[i] = stringcopy[i]; // string codificada vira os elementos da stringcopy
        }

   }

    printf("\n\nA string decodificada eh: %s\n", string  ); // imprime a string


 }
