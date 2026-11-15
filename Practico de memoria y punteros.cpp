#include <iostream>
using namespace std;
void cambiar(int* p){
    *p+=5;
}
int sumarFila(int (*m)[3], int fila){
    return m[fila][0]+m[fila][1]+m[fila][2];
}
int main(){
    cout<<"Bloque I: Fundamentos de punteros\n";
    //Ej 1
    {
        cout<<"1. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int x=8;
        int* p=&x;
        cout<<*p;
        cout<<endl<<"Respuesta correcta: A) 8"<<endl;
    }
    //Ej 2
    {
        cout<<endl<<"2. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int x=5;
        int* p=&x;
        *p=12;
        cout<<x;
        cout<<endl<<"Respuesta correcta: A) 12"<<endl;
    }
    //Ej 3
    {
        cout<<endl<<"3. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int a=7;
        int* p=&a;
        cout<<a+*p;
        cout<<endl<<"Respuesta correcta: D) 14"<<endl;
    }
    //Ej 4
    {
        cout<<endl<<"4. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int x=3;
        int* p=&x;
        x++;
        cout<<*p;
        cout<<endl<<"Respuesta correcta: D) 4"<<endl;
    }
    //EJ 5
    {
        cout<<endl<<"5. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int a=10, b=20;
        int* p=&a;
        p=&b;
        cout<<*p;
        cout<<endl<<"Respuesta correcta: C) 20"<<endl;
    }
    //Ej 6
    {
        cout<<endl<<"6. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int n=9;
        int* p=&n;
        cout<<(&n==p);
        cout<<endl<<"Respuesta correcta: C) 1"<<endl;
    }
    //Ej7
    {
        cout<<endl<<"7. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int x=6;
        int* p=&x;
        cout<<*p<<" "<<x;
        cout<<endl<<"Respuesta correcta: C) 6 6"<<endl;
    }
    //Ej 8
    {
        cout<<endl<<"8. Punteros basicos (Inicial)"<<endl;
        cout<<"Salida: ";
        int a=4;
        int* p=&a;
        *p+=3;
        cout<<a*2;
        cout<<endl<<"Respuesta correcta: D) 14"<<endl;
    }
    //Ej 9
    {
        cout<<endl<<"9. Punteros dobles (Intermedio)"<<endl;
        cout<<"Salida: ";
        int x=11;
        int* p=&x;
        int** pp=&p;
        cout<<**pp;
        cout<<endl<<"Respuesta correcta: C) 11"<<endl;
    }
    //Ej 10
    {
        cout<<endl<<"10. Punteros dobles (Intermedio)"<<endl;
        cout<<"Salida: ";
        int x=2;
        int* p=&x;
        int** pp=&p;
        **pp=15;
        cout<<x;
        cout<<endl<<"Respuesta correcta: B) 15"<<endl;
    }


    //E 11
    {
        cout<<endl<<"11. Arreglos 1D (Inicial)"<<endl;
        cout<<"Salida: ";
        int a[4]={2,4,6,8};
        int* p=a;
        cout<<*p;
        cout<<endl<<"Respuesta correcta A) 2"<<endl;
    }
    //Ej 12
    {
        cout<<endl<<"12. Arreglos 1D (Inicial)"<<endl;
        cout<<"Salida: ";
        int a[]={3,5,7};
        int* p=a;
        cout<<*(p+1);
        cout<<endl<<"Respuesta correcta: A) 5"<<endl;
    }
    //Ej 13
    {
        cout<<endl<<"13. Arreglos 1D (Inicial)"<<endl;
        cout<<"Salida: ";
        int a[]={1,2,3,4};
        int* p=a;
        cout<<p[2];
        cout<<endl<<"Respuesta correcta: B) 3"<<endl;
    }
    //Ej 14
    {
        cout<<endl<<"14. Arreglos 1D (Inicial)"<<endl;
        cout<<"Salida: ";
        int a[]={8,6,4};
        int* p=a;
        cout<<*(p+2)+*p;
        cout<<endl<<"Respuesta correcta: C) 12"<<endl;
    }
    //Ej 15
    {
        cout<<endl<<"15. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={10,20,30};
        int* p=a;
        p++;
        cout<<*p;
        cout<<endl<<"Respuesta correcta: C) 20"<<endl;
    }
    //Ej 16
    {
        cout<<endl<<"16. Arreglos 1D (Intermedio)"<< endl;
        cout<<"Salida: ";
        int a[]={2,4,6,8};
        int* p=a;
        *(p+1)=9;
        cout<<a[1];
        cout<<endl<<"Respuesta correcta: C) 9"<<endl;
    }
    //Ej 17
    {
        cout<<endl<<"17. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={1,2,3,4};
        int* p=a;
        int suma=0;
        for(int i=0; i<4; i++){
            suma+=*(p+i);
        }
        cout<<suma;
        cout<<endl<<"Respuesta correcta: C) 10"<<endl;
    }
    //Ej 18
    {
        cout<<endl<<"18. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={5,9,2,7};
        int* p=a;
        cout<<*(p+3)-*(p+1);
        cout<<endl<<"Respuesta correcta: A) -2"<<endl;
    }
    //Ej 19
    {
        cout<<endl<<"19. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={1,3,5,7,9};
        int* p=&a[4];
        cout<<*(p-2);
        cout<<endl<<"Respuesta correcta: C) 5"<<endl;
    }
    //Ej 20
    {
        cout<<endl<<"20. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={2,4,6,8};
        int* p=a;
        cout<<(p+3)-p;
        cout<<endl<<"Respuesta correcta: D) 3"<<endl;
    }
    //Ej 21
    {
        cout<<endl<<"21. Arreglos 1D (Intermedio)" <<endl;
        cout<<"Salida: ";
        int a[]={4,7,1};
        int* p=a;
        *p=*(p+1)+*(p+2);
        cout<<a[0];
        cout<<endl<<"Respuesta correcta: D) 8"<<endl;
    }
    //Ej 22
    {
        cout<<endl<<"22. Arreglos 1D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int a[]={1,2,3};
        int* p=a;
        for(int i=0; i<3; i++){
            *(p+i)*=2;
        }
        cout<<a[0]<<" "<<a[2];
        cout<<endl<<"Respuesta correcta: C) 2 6"<<endl;
    }


    //Ej 23
    {
        cout<<endl<<"23. Matrices 2D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int m[2][3]={{1,2,3}, {4,5,6}};
        cout<<m[1][2];
        cout<<endl<<"Respuesta correcta: A 6"<<endl;
    }
    //Ej 24
    {
        cout<<endl<<"24. Matrices 2D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int m[2][2]={{2,4}, {6,8}};
        int (*p)[2]=m;
        cout<<p[1][0];
        cout<<endl<<"Respuesta correcta: B) 6"<<endl;
    }
    //Ej 25
    {
        cout<<endl<<"25. Matrices 2D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int m[2][3]={{1,2,3}, {4,5,6}};
        int (*p)[3]=m;
        cout<<*(*(p+1)+1);
        cout<<endl<<"Respuesta correcta: D) 5"<<endl;
    }
    //Ej 26
    {
        cout<<endl<<"26. Matrices 2D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int m[2][2]={{1,3}, {5,7}};
        int (*p)[2]=m;
        cout<<*(*(p)+1)+*(*(p+1));
        cout<<endl<<"Respuesta correcta: B) 8"<<endl;
    }
    //Ej 27
    {
        cout<<endl<<"27. Matrices 2D (Intermedio)"<<endl;
        cout<<"Salida: ";
        int m[3][2]={{1,2}, {3,4}, {5,6}};
        int (*p)[2]=m;
        cout<<(p+2)[0][1];
        cout<<endl<<"Respuesta correcta: B) 6"<<endl;
    }
    //Ej 28
    {
        cout<<endl<<"28. Matrices 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[2][3]={{1,2,3}, {4,5,6}};
        int (*p)[3]=m;
        p[0][2]=p[1][0]+p[1][1];
        cout<<m[0][2];
        cout<<endl<<"Respuesta correcta: C) 9"<<endl;
    }
    //Ej 29
    {
        cout<<endl<<"29. Matrices 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[2][2]={{2,3}, {4,5}};
        int (*p)[2]=m;
        int s=0;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                s+=p[i][j];
            }
        }
        cout<<s;
        cout<<endl<<"Respuesta correcta: D) 14"<<endl;
    }
    //EJ 30
    {
        cout<<endl<<"30. Matrices 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
        int (*p)[3]=m;
        cout<<p[0][0]+p[1][1]+p[2][2];
        cout<<endl<<"Respuesta correcta: A) 15"<<endl;
    }
    //Ej 31
    {
        cout<<endl<<"31. Matrics 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[2][3]={{1,2,3}, {4,5,6}};
        int (*p)[3]=m;
        cout<<p[0][2]+p[1][2];
        cout<<endl<<"Respuesta correcta: D) 9"<<endl;
    }
    //Ej 32
    {
        cout<<endl<<"32. Matrices 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[2][2]={{1,2}, {3,4}};
        int (*p)[2]=m;
        for(int i=0; i<2; i++){
            p[i][i]*=3;
        }
        cout<<m[0][0]<<" "<<m[1][1];
        cout<<endl<<"Respuesta correcta: B) 3 12"<<endl;
    }


    //Ej 33
    {
        cout<<endl<<"33. Memoria dinamica (Intermedio)"<<endl;
        cout<<"Salida: ";
        int* p=new int(25);
        cout<<*p;
        delete p;
        cout<<endl<<"Respuesta correcta: D) 25"<<endl;
    }
    //E 34
    {
        cout<<endl<<"34. Memoria dinamica (Intermedio)"<<endl;
        cout<<"Salida: ";
        int* a=new int[3]{3,6,9};
        cout<<a[1];
        delete[] a;
        cout<<endl<<"Respuesta correcta: D) 6"<<endl;
    }
    //Ej 35
    {
        cout<<endl<<"35. Memoria dinamica (Avanzado)"<<endl;
        cout<<"Salida: ";
        int* a=new int[4]{1,2,3,4};
        int* p=a;
        cout<<*(p+3);
        delete[] a;
        cout<<endl<<"Respuesta correcta: A) 4"<<endl;
    }
    //Ej 36
    {
        cout<<endl<<"36. Memoria dinamica (Avanzado)"<<endl;
        cout<<"Salida: ";
        int n=3;
        int* a=new int[n]{2,4,6};
        int s=0;
        for(int i=0; i<n; i++){
            s+=a[i];
        }
        cout<<s;
        delete[] a;
        cout<<endl<<"Respuesta correcta: D) 12"<<endl;
    }
    //Ej 37
    {
        cout<<endl<<"37. Memoria dinamica 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int (*m)[2]=new int[2][2]{{1,2}, {3,4}};
        cout<<m[1][0];
        delete[] m;
        cout<<endl<<"Respuesta correcta: A) 3"<<endl;
    }
    //Ej 38
    {
        cout<<endl<<"38. Memoria dinamica 2D (Avanzado)"<<endl;
        cout<<"Salida: ";
        int (*m)[3]=new int[2][3]{{2,4,6}, {1,3,5}};
        cout<<*(*(m+1)+2);
        delete[] m;
        cout<<endl<<"Respuesta correcta: B) 5"<<endl;
    }
    //Ej 39
    {
        cout<<endl<<"39. Funciones y punteros (Avanzado)"<<endl;
        cout<<"Salida: ";
        int x=7;
        cambiar(&x);
        cout<<x;
        cout<<endl<<"Respuesta correcta: A) 12"<<endl;
    }
    //Ej 40
    {
        cout<<endl<<"40. Funciones y matrices (Avanzado)"<<endl;
        cout<<"Salida: ";
        int m[2][3]={{1,2,3}, {4,5,6}};
        cout<<sumarFila(m,1);
        cout<<endl<<"Respuesta correcta: A) 15"<<endl;
    }
    return 0;
}