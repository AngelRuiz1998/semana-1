//Ejercicio #3 5676//
#include < iostream >
# include < stdlib.h >
Espacio est�ndar ;
vac�o  de entranda ();
distribuci�n cero ();
int n, m, k, i, r;
int a [ 1000 ];
int b [ 1000 ];
int suma = 0 ;
int  main () {
    dentranda ();
    distribucion ();
    cout << " Las personas aceptados son: " << sum;
    devuelve  0 ;
}
vac�o  dentranda () {
    cout << " \ n Proporcionar el n�mero de solicitantes, el n�mero de apartamentos y la diferencia m�xima permitida: " ;
    cin >> n >> m >> k;
    cout << " \ n Proporcionar el tama�o del apartamento deseado: " ;
	para (i = 0 ; i <n; i ++) {
        cin >> a [i];
        
    
    }
    cout << " \ n Tama�o de cada aprtamiento disponible: " ;
    para (r = 0 ; r <m; r ++) {
        cin >> b [r];
	}    
}
 distribuci�n nula () {
	para (i = 0 ; i <n; i ++) {
    	para (r = 0 ; r <m; r ++) {
    		si (suma <m) {
			if (( abs (a [i] -b [r])) <= k) {
			suma + = 1 ;
  			a [i] = a [i + 1 ];
			b [r] = b [r + 1 ];
		}
			}
		}
}
}
� 2020 GitHub, Inc.
