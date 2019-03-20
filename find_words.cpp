#include <iostream>
#include <cstring>
using namespace std;

	 char matriks[15][15]={    {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
	 			{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
	 			{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
	 			{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
	 			{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
	 			{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
	 			{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
	 			{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
	 			{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
	 			{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
	 			{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
	 			{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
	 			{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
	 			{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
	 			{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}	
			   };
void cetak();
int main () 
{
	cetak();
//jumlah kata yang akan dicari
		int jumlah;
		cout<<endl;
		cout<<"Masukkan jumlah kata yang ingin anda temukan  : "; 
		cin>>jumlah;
		char kata[jumlah][15];
		int input[jumlah];
		cin.ignore();
//input kata
		for (int i=0;i<jumlah;i++){
			cout<<i+1<<"  ";
			cin.getline(kata[i],15);
//menghitung jumlah huruf pada kata yang dicari
			input[i]=strlen(kata[i]);
		}
// Mencari Kata 
    int cek=0,ada=0;
    for(int a=0;a<jumlah;a++){
        for(int i=0;i<15;i++){
            for(int j=0;j<15;j++){
                if(kata[a][0]==matriks[i][j]){
			
// Vertikal Bawah
                    for (int k=0;k<input[a];k++){
                        if(kata[a][k]==matriks[i+k][j]){
                            cek=k;
                        }else
                            break;
                    }
                    if(cek == (input[a]-1)){
                           ada +=1;
                    }else{
                           ada +=0;
                    }
                    cek=0;
// Vertikal Atas
		    for (int k=0;k<input[a];k++){
		      	    if(kata[a][k]==matriks[i-k][j]){
				    cek=k;
			    }else
				    break;
		    }
		    if(cek == (input[a]-1)){
			    ada +=1;
		    }else{
			    ada +=0;
		    }
		    cek=0;
			
			
//horizontal ke kanan
		    for (int k=0; k<input[a]; k++){
			    if (kata[a][k]==matriks[i][j+k]){
				    cek=k;
			    }else
				    break;
		    }
		    if(cek==(input[a]-1)){
		  	    ada +=1;
		    }else{
			    ada +=0;
		    }
		    cek=0;
//horizontal ke kiri
		    for (int k=0; k<input[a]; k++){
			    if (kata[a][k]==matriks[i][j-k]){
				    cek=k;
			    }else
				    break;
		    }
		    if(cek==(input[a]-1)){
			    ada +=1;
		    }else{
			    ada +=0;
		    }
		    cek=0;
			
// Diagonal Kiri Atas
                    for(int k=0;k<input[a];k++){
                        if(kata[a][k]==matriks[i-k][j-k]){
                            cek=k;
                        }else
                            break;
                    }
                    if(cek == (input[a]-1)) {
                        ada +=1;
                    } else {
                        ada +=0;
                    }
                    cek=0;
			
// Diagonal kiri bawah
                    for(int k=0;k<input[a];k++){
                        if(kata[a][k]==matriks[i+k][j-k]){
                            cek=k;
                        }else
                            break;
                    }
                    if(cek == (input[a]-1)) {
                        ada +=1;
                    } else {
                        ada +=0;
                    }
                    cek=0;
	
// Diagonal kanan atas
		    for(int k=0;k<input[a];k++){
			if(kata[a][k]==matriks[i-k][j+k]){
			    cek=k;
			}else
			    break;
		    }
		    if(cek == (input[a]-1)){
			ada +=1;
		    } else {
			ada +=0;
		    }
		    cek=0;
			
// Diagonal kanan bawah
		    for(int k=0;k<input[a];k++){
			if(kata[a][k]==matriks[i+k][j+k]){
			    cek=k;
			}else
			    break;
		    }
		    if(cek == (input[a]-1)){
			ada +=1;
		    } else {
			 ada +=0;
		    }
		    cek=0;
			
                }
            }
        }

if(a==0){
	cout <<  ">>>>>   	Hasil Pencarian		<<<<<"  << endl;
}
cout << a+1 << ". ";
if(ada>0){
	cout <<"   \tADA ";
	ada = 0;
}else
	cout << "\tTIDAK ADA ";
	cout << endl;
}
	    
return 0;
}
void cetak(){
	cout<<"**********************************************************"<<endl<<endl;
	cout<<"\t\t\tFIND WORD"<<endl<<endl;
	cout<<"**********************************************************"<<endl<<endl;

    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++)
            cout << matriks[i][j] << " | ";
        cout << endl;
       
 }
}

