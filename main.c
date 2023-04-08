#include <stdio.h>
#include <string.h>


// INITIALIZAM 6 fete front, back, up, down, left, right
int xfront[4][4];
int xback[4][4];
int xup[4][4];
int xdown[4][4];
int xleft[4][4];   //sunt notate cu x in fata deoarece complilatorul le considera "ambigous"
int xright[4][4];
int aux1, aux2, aux3, spin;

char col1[10];
char col2[10];
char col3[10];
char col4[10];
char col5[10];
char col6[10];
char x[50];
char trash[150];

void citire()
{

    scanf("%s %s %s %s %s %s %s",col1,col2,col3,col4,col5,col6);
    fgets(trash,sizeof(trash),stdin);
    fflush(stdin);

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xfront[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xfront[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xfront[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xfront[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xfront[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xfront[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xback[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xback[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xback[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xback[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xback[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xback[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xup[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xup[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xup[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xup[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xup[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xup[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xdown[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xdown[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xdown[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xdown[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xdown[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xdown[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xleft[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xleft[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xleft[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xleft[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xleft[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xleft[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }

    for(int i=1;i<=3;i++)
    {
         fgets(x, sizeof(x), stdin);

         char *p=strtok(x,".") ;
         int j=0;
         while(p!=NULL)
         {
             j++;

             if (strcmp(p,col1)==0)
                 xright[j][i]=1;
             else if (strcmp(p,col2)==0)
                 xright[j][i]=2;
             else if (strcmp(p,col3)==0)
                 xright[j][i]=3;
             else if (strcmp(p,col4)==0)
                 xright[j][i]=4;
             else if (strcmp(p,col5)==0)
                 xright[j][i]=5;
             else if (strcmp(p,col6)==0)
                 xright[j][i]=6;
             p=strtok(NULL, ".\n");
         }
         fflush(stdin);
    }
}

void afis()
{
    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xfront[i][j] == 1)
                 printf("%s", col1);
             else if (xfront[i][j] == 2)
                 printf("%s", col2);
             else if (xfront[i][j] == 3)
                 printf("%s", col3);
             else if(xfront[i][j] == 4)
                 printf("%s", col4);
             else if (xfront[i][j] == 5)
                 printf("%s", col5);
             else if(xfront[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xback[i][j] == 1)
                 printf("%s", col1);
             else if (xback[i][j] == 2)
                 printf("%s", col2);
             else if (xback[i][j] == 3)
                 printf("%s", col3);
             else if(xback[i][j] == 4)
                 printf("%s", col4);
             else if (xback[i][j] == 5)
                 printf("%s", col5);
             else if(xback[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xup[i][j] == 1)
                 printf("%s", col1);
             else if (xup[i][j] == 2)
                 printf("%s", col2);
             else if (xup[i][j] == 3)
                 printf("%s", col3);
             else if(xup[i][j] == 4)
                 printf("%s", col4);
             else if (xup[i][j] == 5)
                 printf("%s", col5);
             else if(xup[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xdown[i][j] == 1)
                 printf("%s", col1);
             else if (xdown[i][j] == 2)
                 printf("%s", col2);
             else if (xdown[i][j] == 3)
                 printf("%s", col3);
             else if(xdown[i][j] == 4)
                 printf("%s", col4);
             else if (xdown[i][j] == 5)
                 printf("%s", col5);
             else if(xdown[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xleft[i][j] == 1)
                 printf("%s", col1);
             else if (xleft[i][j] == 2)
                 printf("%s", col2);
             else if (xleft[i][j] == 3)
                 printf("%s", col3);
             else if(xleft[i][j] == 4)
                 printf("%s", col4);
             else if (xleft[i][j] == 5)
                 printf("%s", col5);
             else if(xleft[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++) {
        for (int j=1;j<=3;j++){
            if (xright[i][j] == 1)
                 printf("%s", col1);
             else if (xright[i][j] == 2)
                 printf("%s", col2);
             else if (xright[i][j] == 3)
                 printf("%s", col3);
             else if(xright[i][j] == 4)
                 printf("%s", col4);
             else if (xright[i][j] == 5)
                 printf("%s", col5);
             else if(xright[i][j] == 6)
                 printf("%s", col6);
            if(j != 3)
                printf(".");
        }
        printf("\n");
    }
}

/*
void citire()
{
    //cout<<"front"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xfront[i][j];

    //cout<< "back"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xback[i][j];

    //cout<< "up"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xup[i][j];

    //cout<< "down"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xdown[i][j];

    //cout<< "left"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xleft[i][j];

    //cout<<"dr"<<'\n';
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin>> xright[i][j];



}
void afis()
{
    cout<<'\n'<<"front:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xfront[i][j]<<" ";
    }

    cout<<'\n'<< "back:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xback[i][j]<<" ";
    }

    cout<<'\n'<<"up:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xup[i][j]<<" ";
    }

    cout<<'\n'<<"down:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xdown[i][j]<<" ";

    }

    cout<<'\n'<<"left:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xleft[i][j]<<" ";
    }

    cout<<'\n'<<"right:"<<'\n';
    for (int i = 1; i <= 3; i++)
    {
        cout<<'\n';
        for (int j = 1; j <= 3; j++)
            cout<< xright[i][j]<<" ";
    }

}
*/


/* //ineficient
void utrigonometric()//U'______________________________________________________________________________
{
    int aux4, aux5, aux6;
    //lucram pe prima linie a cubului
    //punem peste fata right  fata numita front si valorile din fata right le tinem in aux123
    aux1=xright[1][1];
    aux2=xright[1][2];
    aux3=xright[1][3];

    xright[1][1]=xfront[1][1];
    xright[1][2]=xfront[1][2];
    xright[1][3]=xfront[1][3];

    //pastram fata back in aux456 si punem peste ea fata right (memorata anterior in aux123)
    aux4=xback[1][1];
    aux5=xback[1][2];
    aux6=xback[1][3];

    xback[1][1]=aux1;
    xback[1][2]=aux2;
    xback[1][3]=aux3;

    //pastram fata left in aux123 si punem peste ea fata back (mem anterior in aux456)
    aux1=xleft[1][1];
    aux2=xleft[1][2];
    aux3=xleft[1][3];

    xleft[1][1]=aux4;
    xleft[1][2]=aux5;
    xleft[1][3]=aux6;

    //punem peste fata front fata left (memorata anterior in aux123)
    xfront[1][1]=aux1;
    xfront[1][2]=aux2;
    xfront[1][3]=aux3;

    //rotim fata up in sens trigonometric
    //rotim coloturile

    spin=xup[1][1];
    xup[1][1]=xup[1][3];
    xup[1][3]=xup[3][3];
    xup[3][3]=xup[3][1];
    xup[3][1]=spin;

    //rotim mijloacele
    spin=xup[2][1];
    xup[2][1]=xup[1][2];
    xup[1][2]=xup[2][3];
    xup[2][3]=xup[3][2];
    xup[3][2]=spin;

} */


/* //ineficient
void uceasornic()//U   ___________________________________________________________________________________________________
{
    int aux4, aux5, aux6;
    //lucram pe prima linie a cubului
    //valorile din left  le tinem in aux123 si punem peste fata left fata numita front
    aux1=xleft[1][1];
    aux2=xleft[1][2];
    aux3=xleft[1][3];

    xleft[1][1]=xfront[1][1];
    xleft[1][2]=xfront[1][2];
    xleft[1][3]=xfront[1][3];

    //pastram fata back in aux456 si punem peste ea fata back ( cea memorata anterior in aux123)
    aux4=xback[1][1];
    aux5=xback[1][2];
    aux6=xback[1][3];

    xback[1][1]=aux1;
    xback[1][2]=aux2;
    xback[1][3]=aux3;

    //pastram fata right in aux123 si punem peste ea fata back ( cea mem anterior in aux456)
    aux1=xright[1][1];
    aux2=xright[1][2];
    aux3=xright[1][3];

    xright[1][1]=aux4;
    xright[1][2]=aux5;
    xright[1][3]=aux6;

    //punem peste fata front fata right ( cea memorata anterior in aux123)
    xfront[1][1]=aux1;
    xfront[1][2]=aux2;
    xfront[1][3]=aux3;
}
*/

void utrigonometric()//U'
{
    //retinem valorile de pe fata front, zona de langa fața up
    aux1 = xfront[1][1];
    aux2 = xfront[1][2];
    aux3 = xfront[1][3];

    //peste  front(zona up) punem fața left(zona up)
    xfront[1][1] = xleft[1][1];
    xfront[1][2] = xleft[1][2];
    xfront[1][3] = xleft[1][3];

    //peste fața left(zona up) punem fața back(zona up)
    xleft[1][1] = xback[1][1];
    xleft[1][2] = xback[1][2];
    xleft[1][3] = xback[1][3];

    //peste fața back front(zona up) punem fața right(zona up)
    xback[1][1] = xright[1][1];
    xback[1][2] = xright[1][2];
    xback[1][3] = xright[1][3];

    //peste fața right(zona up) punem valorile retinute(val initiale ale feței front-zona up)
    xright[1][1] = aux1;
    xright[1][2] = aux2;
    xright[1][3] = aux3;


    //rotim fața up in sens trigonometric
    //rotim coloturile
    spin=xup[1][1];
    xup[1][1]=xup[1][3];
    xup[1][3]=xup[3][3];
    xup[3][3]=xup[3][1];
    xup[3][1]=spin;

    //rotim mijloacele
    spin=xup[2][1];
    xup[2][1]=xup[1][2];
    xup[1][2]=xup[2][3];
    xup[2][3]=xup[3][2];
    xup[3][2]=spin;

}
void uceasornic() //U
{
    //retinem valorile de pe fața front, zona de langa fața up
    aux1 = xfront[1][1];
    aux2 = xfront[1][2];
    aux3 = xfront[1][3];

    //peste  front(zona up) punem  right(zona up)
    xfront[1][1] = xright[1][1];
    xfront[1][2] = xright[1][2];
    xfront[1][3] = xright[1][3];

    //peste fața right(zona up) punem fața back(zona up)
    xright[1][1] = xback[1][1];
    xright[1][2] = xback[1][2];
    xright[1][3] = xback[1][3];

    //peste back left(zona up) punem fața left(zona up)
    xback[1][1] = xleft[1][1];
    xback[1][2] = xleft[1][2];
    xback[1][3] = xleft[1][3];

    //peste fața fleft(zona up) punem valorile retinute(val initiale ale feței front-zona up)
    xleft[1][1] = aux1;
    xleft[1][2] = aux2;
    xleft[1][3] = aux3;

    //rotim fața up in sens ceasornic
    //rotim coloturile
    spin=xup[1][1];
    xup[1][1]=xup[3][1];
    xup[3][1]=xup[3][3];
    xup[3][3]=xup[1][3];
    xup[1][3]=spin;

    //rotim mijloacele
    spin=xup[2][1];
    xup[2][1]=xup[3][2];
    xup[3][2]=xup[2][3];
    xup[2][3]=xup[1][2];
    xup[1][2]=spin;
}



void dtrigonometric()//D'
{

    //retinem valorile de pe fața front, zona de langa fața down
    aux1 = xfront[3][1];
    aux2 = xfront[3][2];
    aux3 = xfront[3][3];

    //peste  front(zona down) punem  right(zona down)
    xfront[3][1] = xright[3][1];
    xfront[3][2] = xright[3][2];
    xfront[3][3] = xright[3][3];

    //peste fața right(zona down) punem fața back(zona down)
    xright[3][1] = xback[3][1];
    xright[3][2] = xback[3][2];
    xright[3][3] = xback[3][3];

    //peste back left(zona down) punem fața left(zona down)
    xback[3][1] = xleft[3][1];
    xback[3][2] = xleft[3][2];
    xback[3][3] = xleft[3][3];

    //peste fața fleft(zona down) punem valorile retinute(val initiale ale feței front-zona down)
    xleft[3][1] = aux1;
    xleft[3][2] = aux2;
    xleft[3][3] = aux3;

    //rotim fața up in sens trigonometric
    //rotim coloturile
    spin=xdown[1][1];
    xdown[1][1]=xdown[1][3];
    xdown[1][3]=xdown[3][3];
    xdown[3][3]=xdown[3][1];
    xdown[3][1]=spin;

    //rotim mijloacele
    spin=xdown[2][1];
    xdown[2][1]=xdown[1][2];
    xdown[1][2]=xdown[2][3];
    xdown[2][3]=xdown[3][2];
    xdown[3][2]=spin;

}

void dceasornic()
{
    //retinem valorile de pe fata front, zona de langa fața down
    aux1 = xfront[3][1];
    aux2 = xfront[3][2];
    aux3 = xfront[3][3];

    //peste  front(zona down) punem fața left(zona down)
    xfront[3][1] = xleft[3][1];
    xfront[3][2] = xleft[3][2];
    xfront[3][3] = xleft[3][3];

    //peste fața left(zona down) punem fața back(zona down)
    xleft[3][1] = xback[3][1];
    xleft[3][2] = xback[3][2];
    xleft[3][3] = xback[3][3];

    //peste fața back front(zona down) punem fața right(zona down)
    xback[3][1] = xright[3][1];
    xback[3][2] = xright[3][2];
    xback[3][3] = xright[3][3];

    //peste fața right(zona down) punem valorile retinute(val initiale ale feței front-zona down)
    xright[3][1] = aux1;
    xright[3][2] = aux2;
    xright[3][3] = aux3;

    //rotim fața down in sens ceasornic
    //rotim coloturile
    spin=xdown[1][1];
    xdown[1][1]=xdown[3][1];
    xdown[3][1]=xdown[3][3];
    xdown[3][3]=xdown[1][3];
    xdown[1][3]=spin;

    //rotim mijloacele
    spin=xdown[2][1];
    xdown[2][1]=xdown[3][2];
    xdown[3][2]=xdown[2][3];
    xdown[2][3]=xdown[1][2];
    xdown[1][2]=spin;
}

void rceasornic() //C
{
    aux1=xfront[1][3];
    aux2=xfront[2][3];
    aux3=xfront[3][3];

    xfront[1][3]=xdown[1][3];
    xfront[2][3]=xdown[2][3];
    xfront[3][3]=xdown[3][3];

    xdown[1][3]=xback[3][1];
    xdown[2][3]=xback[2][1];
    xdown[3][3]=xback[1][1];

    xback[3][1]=xup[1][3];
    xback[2][1]=xup[2][3];
    xback[1][1]=xup[3][3];

    xup[1][3]=aux1;
    xup[2][3]=aux2;
    xup[3][3]=aux3;

    //rotim fața up in sens ceasornic
    //rotim coloturile
    spin=xright[1][1];
    xright[1][1]=xright[3][1];
    xright[3][1]=xright[3][3];
    xright[3][3]=xright[1][3];
    xright[1][3]=spin;

    //rotim mijloacele
    spin=xright[2][1];
    xright[2][1]=xright[3][2];
    xright[3][2]=xright[2][3];
    xright[2][3]=xright[1][2];
    xright[1][2]=spin;
}

void rtrigonometric()//R'
{
    aux1=xfront[1][3];
    aux2=xfront[2][3];
    aux3=xfront[3][3];

    xfront[1][3]=xup[1][3];
    xfront[2][3]=xup[2][3];
    xfront[3][3]=xup[3][3];

    xup[1][3]=xback[3][1];
    xup[2][3]=xback[2][1];
    xup[3][3]=xback[1][1];

    xback[1][1]=xdown[3][3];
    xback[2][1]=xdown[2][3];
    xback[3][1]=xdown[1][3];

    xdown[3][3]=aux1;
    xdown[2][3]=aux2;
    xdown[1][3]=aux3;

    //rotim fața up in sens trigonometric
    //rotim coloturile
    spin=xright[1][1];
    xright[1][1]=xright[1][3];
    xright[1][3]=xright[3][3];
    xright[3][3]=xright[3][1];
    xright[3][1]=spin;

    //rotim mijloacele
    spin=xright[2][1];
    xright[2][1]=xright[1][2];
    xright[1][2]=xright[2][3];
    xright[2][3]=xright[3][2];
    xright[3][2]=spin;
}

void lceasornic() //L
{
    aux1=xfront[1][1];
    aux2=xfront[2][1];
    aux3=xfront[3][1];

    xfront[1][1]=xup[1][1];
    xfront[2][1]=xup[2][1];
    xfront[3][1]=xup[3][1];

    xup[1][1]=xback[3][3];
    xup[2][1]=xback[2][3];
    xup[3][1]=xback[1][3];

    xback[1][3]=xdown[3][1];
    xback[2][3]=xdown[2][1];
    xback[3][3]=xdown[1][1];

    xdown[1][1]=aux1;
    xdown[2][1]=aux2;
    xdown[3][1]=aux3;

    //rotim fața left in sens ceasornic
    //rotim coloturile
    spin=xleft[1][1];
    xleft[1][1]=xleft[3][1];
    xleft[3][1]=xleft[3][3];
    xleft[3][3]=xleft[1][3];
    xleft[1][3]=spin;

    //rotim mijloacele
    spin=xleft[2][1];
    xleft[2][1]=xleft[3][2];
    xleft[3][2]=xleft[2][3];
    xleft[2][3]=xleft[1][2];
    xleft[1][2]=spin;

}

void ltrigonometric() //L
{
    aux1=xfront[1][1];
    aux2=xfront[2][1];
    aux3=xfront[3][1];

    xfront[1][1]=xdown[1][1];
    xfront[2][1]=xdown[2][1];
    xfront[3][1]=xdown[3][1];

    xdown[1][1]=xback[3][3];
    xdown[2][1]=xback[2][3];
    xdown[3][1]=xback[1][3];

    xback[1][3]=xup[3][1];
    xback[2][3]=xup[2][1];
    xback[3][3]=xup[1][1];

    xup[1][1]=aux1;
    xup[2][1]=aux2;
    xup[3][1]=aux3;


    //rotim fața left in sens trigonometric
    //rotim coloturile
    spin=xleft[1][1];
    xleft[1][1]=xleft[1][3];
    xleft[1][3]=xleft[3][3];
    xleft[3][3]=xleft[3][1];
    xleft[3][1]=spin;

    //rotim mijloacele
    spin=xleft[2][1];
    xleft[2][1]=xleft[1][2];
    xleft[1][2]=xleft[2][3];
    xleft[2][3]=xleft[3][2];
    xleft[3][2]=spin;
}
void fceasornic()//F
{
    aux1=xup[3][1];
    aux2=xup[3][2];
    aux3=xup[3][3];

    xup[3][1]=xleft[3][3];
    xup[3][2]=xleft[2][3];
    xup[3][3]=xleft[1][3];

    xleft[1][3]=xdown[1][1];
    xleft[2][3]=xdown[1][2];
    xleft[3][3]=xdown[1][3];

    xdown[1][1]=xright[3][1];
    xdown[1][2]=xright[2][1];
    xdown[1][3]=xright[1][1];

    xright[1][1]=aux1;
    xright[2][1]=aux2;
    xright[3][1]=aux3;
    //rotim fața front in sens ceasornic
    //rotim coloturile
    spin=xfront[1][1];
    xfront[1][1]=xfront[3][1];
    xfront[3][1]=xfront[3][3];
    xfront[3][3]=xfront[1][3];
    xfront[1][3]=spin;

    //rotim mijloacele
    spin=xfront[2][1];
    xfront[2][1]=xfront[3][2];
    xfront[3][2]=xfront[2][3];
    xfront[2][3]=xfront[1][2];
    xfront[1][2]=spin;
}

void ftrigonometric() //F'
{
    aux1=xup[3][1];
    aux2=xup[3][2];
    aux3=xup[3][3];

    xup[3][1]=xright[1][1];
    xup[3][2]=xright[2][1];
    xup[3][3]=xright[3][1];

    xright[1][1]=xdown[1][3];
    xright[2][1]=xdown[1][2];
    xright[3][1]=xdown[1][1];

    xdown[1][1]=xleft[1][3];
    xdown[1][2]=xleft[2][3];
    xdown[1][3]=xleft[3][3];

    xleft[1][3]=aux3;
    xleft[2][3]=aux2;
    xleft[3][3]=aux1;

//rotim front in sens trigonometric
    //rotim coloturile
    spin=xfront[1][1];
    xfront[1][1]=xfront[1][3];
    xfront[1][3]=xfront[3][3];
    xfront[3][3]=xfront[3][1];
    xfront[3][1]=spin;

    //rotim mijloacele
    spin=xfront[2][1];
    xfront[2][1]=xfront[1][2];
    xfront[1][2]=xfront[2][3];
    xfront[2][3]=xfront[3][2];
    xfront[3][2]=spin;
}

void btrigonometric() //B'
{
    aux1=xup[1][3];
    aux2=xup[1][2];
    aux3=xup[1][1];

    xup[1][3]=xleft[1][1];
    xup[1][2]=xleft[2][1];
    xup[1][1]=xleft[3][1];

    xleft[1][1]=xdown[3][1];
    xleft[2][1]=xdown[3][2];
    xleft[3][1]=xdown[3][3];

    xdown[3][1]=xright[3][3];
    xdown[3][2]=xright[2][3];
    xdown[3][3]=xright[1][3];

    xright[3][3]=aux1;
    xright[2][3]=aux2;
    xright[1][3]=aux3;

    //rotim back in sens trigonometric
    //rotim coloturile
    spin=xback[1][1];
    xback[1][1]=xback[1][3];
    xback[1][3]=xback[3][3];
    xback[3][3]=xback[3][1];
    xback[3][1]=spin;

    //rotim mijloacele
    spin=xback[2][1];
    xback[2][1]=xback[1][2];
    xback[1][2]=xback[2][3];
    xback[2][3]=xback[3][2];
    xback[3][2]=spin;

}
void bceasornic()//B

{
    aux1=xup[1][3];
    aux2=xup[1][2];
    aux3=xup[1][1];

    xup[1][3]=xright[3][3];
    xup[1][2]=xright[2][3];
    xup[1][1]=xright[1][3];

    xright[3][3]=xdown[3][1];
    xright[2][3]=xdown[3][2];
    xright[1][3]=xdown[3][3];

    xdown[3][1]=xleft[1][1];
    xdown[3][2]=xleft[2][1];
    xdown[3][3]=xleft[3][1];

    xleft[1][1]=aux1;
    xleft[2][1]=aux2;
    xleft[3][1]=aux3;
    //rotim fața back in sens ceasornic
    //rotim coloturile
    spin=xback[1][1];
    xback[1][1]=xback[3][1];
    xback[3][1]=xback[3][3];
    xback[3][3]=xback[1][3];
    xback[1][3]=spin;

    //rotim mijloacele
    spin=xfront[2][1];
    xback[2][1]=xback[3][2];
    xback[3][2]=xback[2][3];
    xback[2][3]=xback[1][2];
    xback[1][2]=spin;

}



int main()
{
    citire();
    //ftrigonometric();
    //fceasornic();
    //bceasornic();
    //btrigonometric();


    //fceasornic();
    //uceasornic();
    //ltrigonometric();
    //afis();
}
