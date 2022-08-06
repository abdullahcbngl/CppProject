#include <iostream>
using namespace std;

class Ogrenci{

	private: 
	string tc;
	string ad;
	string soyad;
	int yas;
	string ders;
	int ortalama;
	
	public: 
		void setTc(string tc){this->tc = tc;
		}
		void setAd(string ad){this->ad = ad;
		}
		void setSoyad(string soyad){this->soyad = soyad;
		}
		void setYas(int yas){this->yas = yas;
		}
		void setDers(string ders){this->ders = ders;
		}
		void setOrtalama(int ortalama){this->ortalama = ortalama;
		}
		
		string getTc(){return tc;
		}
			string getAd(){return ad;
		}
		
			string getSoyad(){return soyad;
		}
		
			int getYas(){return yas;
		}
		
			string getDers(){return ders;
		}
			int getOrtalama(){return ortalama;
		}
		
		void OgrenciListele(Ogrenci []);
		
};

void Ogrenci :: OgrenciListele(Ogrenci ogr[]){// Ogrencilistele methodu ogrenci classını inherit alarak ona ait fonksiyon kodlarını icerisinde barındırıyor
for(int i = 0; i<2; i++){
		cout<<i+1<<". ogrencinin bilgileriniz : "<<endl;
		cout<<"tc : "<<ogr[i].getTc()<<endl;
		cout<<"ad : "<<ogr[i].getAd()<<endl;
		cout<<"soyad : "<<ogr[i].getSoyad()<<endl;
		cout<<"yas :"<<ogr[i].getYas()<<endl;
		cout<<"ders : "<<ogr[i].getDers()<<endl;
		cout<<"ortalama : "<<ogr[i].getOrtalama()<<endl;

	}
	cout<<"Bilgiler listelendi."<<endl;
	
}

void siralama(Ogrenci ogr[]){// bu fonksiyonla birlikte kayıt edilen ogrencileri listeleyebiliriz.
	Ogrenci ornek;
	for(int i = 0; i<2;i++){
		for(int j = 0; j<2; j++){
			if(ogr[j].getAd().compare(ogr[j+1].getAd())>0){
				 ornek = ogr[j];
				 ogr[j] = ogr[j+1];
				 ogr[j+1] = ornek;
			}
		}
	}
	cout<<"Siralandi."<<endl; 
	
	for(int i = 0; i<2; i++){
		cout<<i+1<<". ogrencinin bilgileriniz : "<<endl;
		cout<<"tc : "<<ogr[i].getTc()<<endl;
		cout<<"ad : "<<ogr[i].getAd()<<endl;
		cout<<"soyad : "<<ogr[i].getSoyad()<<endl;
		cout<<"yas :"<<ogr[i].getYas()<<endl;
		cout<<"ders : "<<ogr[i].getDers()<<endl;
		cout<<"ortalama : "<<ogr[i].getOrtalama()<<endl;

	}
	cout<<"Bilgiler listelendi."<<endl;
}

void bul(Ogrenci ogr[]){// bu fonksiyonla herhangi bir ogrenciyi arama islemi gerceklestirebiliriz.
	bool sonuc = false;
	string isim;
	cout<<"Isim : ";cin>>isim;
	Ogrenci ornek;

	for(int i = 0;i<2;i++){
		if( ogr[i].getAd().compare(isim)==0 ){
			ornek = ogr[i];
			sonuc = true;
			break;
			
		}
	}
		if(sonuc){//kosul durumuna gore icersinde bulunan kodları calıstırır.
		
		cout<<isim<<" ismiyle aradiginiz ogrenci bilgileri : "<<endl;
		cout<<"tc : "<<ornek.getTc()<<endl;
		cout<<"ad : "<<ornek.getAd()<<endl;
		cout<<"soyad : "<<ornek.getSoyad()<<endl;
		cout<<"yas :"<<ornek.getYas()<<endl;
		cout<<"ders : "<<ornek.getDers()<<endl;
		cout<<"ortalama : "<<ornek.getOrtalama()<<endl;
		cout<<endl;}
		else 
		{
			cout<<isim<<" kisi bulunamadi."<<endl;
			cout<<endl;
		}

}
void MaxPuan(Ogrenci ogr[]){
	int ortalama = 0;
	Ogrenci ornek;

	for(int i = 0;i<2;i++){
		if(ortalama<ogr[i].getOrtalama()){
			ornek = ogr[i];
			ortalama = ogr[i].getOrtalama();
			
		}
	}
		
		
		cout<<"En y�ksek ortalamasi olan ogrenci bilgileri : "<<endl;
		cout<<"tc : "<<ornek.getTc()<<endl;
		cout<<"ad : "<<ornek.getAd()<<endl;
		cout<<"soyad : "<<ornek.getSoyad()<<endl;
		cout<<"yas :"<<ornek.getYas()<<endl;
		cout<<"ders : "<<ornek.getDers()<<endl;
		cout<<"ortalama : "<<ornek.getOrtalama()<<endl;
		cout<<endl;
	}
int main(int argc, char** argv) {

	Ogrenci ogr[2];//ogrenci class ından referans alarak bir dizi olusturdum.
	string tc;
	string ad;
	string soyad;
	int yas;
	string ders;
	int ortalama;
	
	for(int i = 0; i<2; i++){// dongu icerisinde sart olarak dizi boyutunu vererek kullanıcıdan kayıt olacak kisinin verilerini girmesini istedim.
		cout<<i+1<<". ogrencinin bilgileriniz giriniz: "<<endl;
		cout<<"tc : ";
		cin>>tc;
		cout<<"ad : ";
		cin>>ad;
		cout<<"soyad : ";
		cin>>soyad;
		cout<<"yas : ";
		cin>>yas;
		cout<<"ders : ";
		cin>>ders;
		cout<<"ortalama : ";
		cin>>ortalama;
		
		ogr[i].setTc(tc);
		ogr[i].setAd(ad);
		ogr[i].setSoyad(soyad);
		ogr[i].setYas(yas);
		ogr[i].setDers(ders);
		ogr[i].setOrtalama(ortalama);
	}
	cout<<"Kayit tamamlanmistir. Tesekkurler :):)"<<endl;
	cout<<"Girilen bilgiler listeleniyorr..."<<endl;
	ogr[0].OgrenciListele(ogr);
	cout<<endl;
	siralama(ogr );
	bul(ogr);
	cout<<endl;
	MaxPuan(ogr);
	
	
	return 0;
}
