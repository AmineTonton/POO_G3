#include "pch.h"
#include "MAP.h"
//#---Classe Personne ---#

int CLpersonne::getIdpersonne()
{
    return id_personne;
}

void CLpersonne::setIdpersonne(int idpersonne)
{
    id_personne = idpersonne;
}

System::String^ CLpersonne::getNom()
{
    return nom;
}

void CLpersonne::setNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLpersonne::getPrenom()
{
    return prenom;
}

void CLpersonne::setPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

System::String^ CLpersonne::getAdressemail()
{
    return adresse_mail;
}

void CLpersonne::setAdressemail(System::String^ adressemail)
{
    adresse_mail = adressemail;
}

System::String^ CLpersonne::getNumerotelephone()
{
    return numero_telephone;
}

void CLpersonne::setNumerotelephone(System::String^ numerotelephone)
{
    numero_telephone = numerotelephone;
}

//#---Classe Personnel ---#

int CLpersonnel::getIdadresse()
{
    return id_adresse;
}

void CLpersonnel::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

String^ CLpersonnel::getIdpersonnelEstgere()
{
    return id_personnel_Est_gere;
}

void CLpersonnel::setIdpersonnelEstgere(String^ idpersonnelEstgere)
{
    id_personnel_Est_gere = idpersonnelEstgere;
}

System::String^ CLpersonnel::getPersonneldateembauche()
{
    return personnel_date_embauche;
}

void CLpersonnel::setPersonneldateembauche(System::String^ personneldateembauche)
{
    personnel_date_embauche = personneldateembauche;
}

String^ CLpersonnel::Select()
{
    return "select * from Personnel ";
}

String^ CLpersonnel::Insert()
{
    return "insert into Personnel (personnel_nom,personnel_prenom,personnel_date_embauche,personnel_adresse_mail,personnel_numero_telephone,id_personnel_Est_gere) values('" + this->nom + "','" + this->prenom + "','" + this->personnel_date_embauche + "','" + this->adresse_mail + "','" + this->numero_telephone + "','" + this->id_personnel_Est_gere + "');";
}

String^ CLpersonnel::Delete()
{
    return "delete from Personnel where id_personnel=" + this->id_personne + ";";
}

String^ CLpersonnel::Update()
{
    return "";
}

//#---Classe Client ---#

System::String^ CLclient::getClientdatenaissance()
{
    return client_date_naissance;
}

void CLclient::setClientdatenaissance(System::String^ clientdatenaissance)
{
    client_date_naissance = clientdatenaissance;
}

System::String^ CLclient::getClientdatepremierachat()
{
    return client_date_premier_achat;
}

void CLclient::setClientdatepremierachat(System::String^ clientdatepremierachat)
{
    client_date_premier_achat = clientdatepremierachat;
}

String^ CLclient::Select()
{
    return "select * from Client where client_nom = " + this->nom + " and client_prenom = " + this->prenom + ";";
}

String^ CLclient::Insert()
{
    return "insert into Client (client_nom,client_prenom,client_date_naissance,client_date_premier_achat,client_adresse_mail,client_numero_telephone) values('" + this->nom + "','" + this->prenom + "','" + this->client_date_naissance + "','" + this->client_date_premier_achat + "','" + this->adresse_mail + "','" + this->numero_telephone + "');";
}

String^ CLclient::Delete()
{
    return "delete from Client where id_client=" + this->id_personne + ";";
}

String^ CLclient::Update()
{
    return "";
}

//#---Classe Facture ---#

int CLfacture::getIdfacture()
{
    return id_facture;
}

void CLfacture::setIdfacture(int idfacture)
{
    id_facture = idfacture;
}

int CLfacture::getIdcommande()
{
    return id_commande;
}

void CLfacture::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

System::String^ CLfacture::getNomsociete()
{
    return nom_societe;
}

void CLfacture::setNomsociete(System::String^ nomsociete)
{
    nom_societe = nomsociete;
}

System::String^ CLfacture::getNumeroserviceclient()
{
    return numero_service_client;
}

void CLfacture::setNumeroserviceclient(System::String^ numeroserviceclient)
{
    numero_service_client = numeroserviceclient;
}

System::String^ CLfacture::getLogosociete()
{
    return logo_societe;
}

void CLfacture::setLogosociete(System::String^ logosociete)
{
    logo_societe = logosociete;
}

//#---Classe Paiement ---#


int CLpaiement::getIdarticle()
{
    return id_article;
}

void CLpaiement::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

int CLpaiement::getIdfacture()
{
    return id_facture;
}

void CLpaiement::setIdfacture(int idfacture)
{
    id_facture = idfacture;
}

System::String^ CLpaiement::getDatepaiement()
{
    return date_paiement;
}

void CLpaiement::setDatepaiement(System::String^ datepaiement)
{
    date_paiement = datepaiement;
}

System::String^ CLpaiement::getDatereglement()
{
    return date_reglement;
}

void CLpaiement::setDatereglement(System::String^ datereglement)
{
    date_reglement = datereglement;
}

System::String^ CLpaiement::getMoyenpaiement()
{
    return moyen_paiement;
}

void CLpaiement::setMoyenpaiement(System::String^ moyenpaiement)
{
    moyen_paiement = moyenpaiement;
}

System::String^ CLpaiement::getSoldereglement()
{
    return solde_reglement;
}

void CLpaiement::setSoldereglement(System::String^ soldereglement)
{
    solde_reglement = soldereglement;
}

//#---Classe Article ---#

int CLarticle::getIdarticle()
{
    return id_article;
}

void CLarticle::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

System::String^ CLarticle::getArticlenom()
{
    return article_nom;
}

void CLarticle::setArticlenom(System::String^ articlenom)
{
    article_nom = articlenom;
}

System::String^ CLarticle::getArticlequantite()
{
    return this->article_quantite;
}

void CLarticle::setArticlequantite(System::String^ articlequantite)
{
    article_quantite = articlequantite;
}

System::String^ CLarticle::getArticlepuht()
{
    return article_puht;
}

void CLarticle::setArticlepuht(System::String^ articlepuht)
{
    article_puht = articlepuht;
}

System::String^ CLarticle::getArticlenature()
{
    return article_nature;
}

void CLarticle::setArticlenature(System::String^ articlenature)
{
    article_nature = articlenature;
}

System::String^ CLarticle::getArticleseuilreapprovisionnement()
{
    return article_seuil_reapprovisionnement;
}

void CLarticle::setArticleseuilreapprovisionnement(System::String^ articleseuilreapprovisionnement)
{
    article_seuil_reapprovisionnement = articleseuilreapprovisionnement;
}

String^ CLarticle::Select()
{
    return "select * from Article ";
}

String^ CLarticle::Insert()
{
    return "insert into Article (article_nom,article_quantite,article_puht,article_nature,artcile_seuil_reapprovisionnement) values('" + this->article_nom + "','" + this->article_quantite + "','" + this->article_puht + "','" + this->article_nature + "','" + this->article_seuil_reapprovisionnement + "');";
}

String^ CLarticle::Delete()
{
    return "delete from Article where id_article=" + this->id_article + ";";
}

String^ CLarticle::Update()
{
    return "";
}


//#---Classe Commande ---#


int CLcommande::getIdcommande()
{
    return id_commande;
}

void CLcommande::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

int CLcommande::getTotalarticles()
{
    return total_articles;
}

void CLcommande::setTotalarticles(int totalarticles)
{
    total_articles = totalarticles;
}

int CLcommande::getIdclient()
{
    return id_client;
}

void CLcommande::setIdclient(int idclient)
{
    id_client = idclient;
}

int CLcommande::getIdfacture()
{
    return id_facture;
}

void CLcommande::setIdfacture(int idfacture)
{
    id_facture = idfacture;
}

System::String^ CLcommande::getRefcommande()
{
    return ref_commande;
}

void CLcommande::setRefcommande(System::String^ refcommande)
{
    ref_commande = refcommande;
}

System::String^ CLcommande::getDatelivraison()
{
    return date_livraison;
}

void CLcommande::setDatelivraison(System::String^ datelivraison)
{
    date_livraison = datelivraison;
}

System::String^ CLcommande::getDateemission()
{
    return date_emission;
}

void CLcommande::setDateemission(System::String^ dateemission)
{
    date_emission = dateemission;
}

float CLcommande::getMontanttotalht()
{
    return montant_total_ht;
}

void CLcommande::setMontanttotalht(float montanttotalht)
{
    montant_total_ht = montanttotalht;
}

float CLcommande::getMontanttotaltva()
{
    return montant_total_tva;
}

void CLcommande::setMontanttotaltva(float montanttotaltva)
{
    montant_total_tva = montanttotaltva;
}

float CLcommande::getMontanttotalttc()
{
    return montant_total_ttc;
}

void CLcommande::setMontanttotalttc(float montanttotalttc)
{
    montant_total_ttc = montanttotalttc;
}

String^ CLcommande::Select()
{
    return "select * from Commande ";
}

String^ CLcommande::Insert()
{
    return "insert into Commande (ref_commande,date_livraison,date_emission,total_articles,montant_total_ht,montant_total_tva,montant_total_ttc,id_client,id_facture) values('" + this->ref_commande + "','" + this->date_livraison + "','" + this->date_emission + "','" + this->total_articles + "','" + this->montant_total_ht + "','" + this->montant_total_tva + "','" + this->montant_total_ttc + "','" + this->id_client + "','" + this->id_facture + "');";
}

String^ CLcommande::Delete()
{
    return "delete from Commande where id_commande=" + this->id_commande + ";";
}

String^ CLcommande::Update()
{
    return "";
}

//#---Classe Ville ---#

int CLville::getIdville()
{
    return id_ville;
}

void CLville::setIdville(int idville)
{
    id_ville = idville;
}

System::String^ CLville::getVille()
{
    return ville;
}

void CLville::setVille(System::String^ ville)
{
    this->ville = ville;
}

System::String^ CLville::getCodepostal()
{
    return code_postal;
}

void CLville::setCodepostal(System::String^ codepostal)
{
    this->code_postal = codepostal;
}

System::String^ CLville::getPays()
{
    return pays;
}

void CLville::setPays(System::String^ pays)
{
    this->pays = pays;
}
int CLville::getid_ville()
{
    return this->id_ville;
}
void CLville::setid_ville(int id)
{
    this->id_ville= id;
}

System::String^ CLville::Select()
{
    return "select ville from ville";
}



//#---Classe Livre ---#

int CLlivre::getIdadresse()
{
    return id_adresse;
}

void CLlivre::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

int CLlivre::getIdclient()
{
    return id_client;
}



void CLlivre::setIdclient(int idclient)
{
    id_client = idclient;
}

System::String^ CLlivre::getTypeadresse()
{
    return type_adresse;
}

void CLlivre::setTypeadresse(System::String^ typeadresse)
{
    type_adresse = typeadresse;
}

//#---Classe Adresse ---#

int CLadresse::getIdadresse()
{
    return id_adresse;
}

void CLadresse::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

int CLadresse::getIdville()
{
    return id_ville;
}

void CLadresse::setIdville(int idville)
{
    id_ville = idville;
}

System::String^ CLadresse::getNumerorue()
{
    return numero_rue;
}

void CLadresse::setNumerorue(System::String^ numerorue)
{
    numero_rue = numerorue;
}

System::String^ CLadresse::getNomrue()
{
    return nom_rue;
}

void CLadresse::setNomrue(System::String^ nomrue)
{
    nom_rue = nomrue;
}

System::String^ CLadresse::getVille()
{
    return ville;
}

void CLadresse::setVille(System::String^ ville)
{
    this->ville = ville;
}

//#---Classe Contenir ---#


int CLcontenir::getIdarticle()
{
    return id_article;
}

void CLcontenir::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

int CLcontenir::getIdcommande()
{
    return id_commande;
}

void CLcontenir::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

int CLcontenir::getQuantit()
{
    return quantité;
}

void CLcontenir::setQuantit(int quantit)
{
    quantité = quantit;
}