#pragma once
#include <iostream>
using namespace std;
namespace composants{
class Client {
private:
	string datenaissance;
	string firstpurshase;
	string adresselivraison;
	string adressefacturation;
public:
	Client(string aDatenaissance, string aFirstpurshase, string aAdresselivraison, string aAdressefacturation) {
		datenaissance = aDatenaissance;
		firstpurshase = aFirstpurshase;
		adresselivraison = aAdresselivraison;
		adressefacturation = aAdressefacturation;
	}
	void setdatenaissance(string aDatenaissance) {
		datenaissance = aDatenaissance;
	}
	string getdatenaissance() {
		return datenaissance;
	}
	void setfirstpurshase(string aFirstpurshase) {
		firstpurshase = aFirstpurshase;
	}
	string getfirstpurshase() {
		return firstpurshase;
	}
	void setadresselivraison(string aAdresselivraison) {
		adresselivraison = aAdresselivraison;
	}
	string getadresselivraison() {
		return adresselivraison;
	}
	void setadressefacturation(string aAdressefacturation) {
		adressefacturation = aAdressefacturation;
	}
	string getadressefacturation() {
		return adressefacturation;
	}

};

class Personne {
private:
	string nomClient;
	string prenomClient;
	int IDclient;
public:
	Personne(string aNomClient, string aPrenomClient, int aID) {
		nomClient = aNomClient;
		prenomClient = aPrenomClient;
		IDclient = aID;

	}
	void setnomClient(string aNomClient) {
		nomClient = aNomClient;
	}
	string getnomClient() {
		return nomClient;
	}
	void setprenomClient(string aPrenomClient) {
		prenomClient = aPrenomClient;
	}
	string getprenomClient() {
		return prenomClient;
	}
	void setIDclient(int aIDclient) {
		IDclient = aIDclient;
	}
	int getIDclient() {
		return IDclient;
	}

};
}