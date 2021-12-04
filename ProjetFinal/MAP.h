#pragma once

//#---Classe Personne ---#

ref class CLpersonne abstract
{
protected:
    int id_personne;
    System::String^ nom;
    System::String^ prenom;
    System::String^ adresse_mail;
    System::String^ numero_telephone;
public:

    int getIdpersonne();
    void setIdpersonne(int idpersonne);

    System::String^ getNom();
    void setNom(System::String^ nom);

    System::String^ getPrenom();
    void setPrenom(System::String^ prenom);

    System::String^ getAdressemail();
    void setAdressemail(System::String^ adressemail);

    System::String^ getNumerotelephone();
    void setNumerotelephone(System::String^ numerotelephone);

    virtual System::String^ Select() = 0;
    virtual System::String^ Insert() = 0;
    virtual System::String^ Delete() = 0;
    virtual System::String^ Update() = 0;
};

//#---Classe Personnel ---#

ref class CLpersonnel : public CLpersonne
{
private:

    int id_adresse;
    System::String^ id_personnel_Est_gere;
    System::String^ personnel_date_embauche;

public:
    int getIdadresse();
    void setIdadresse(int idadresse);

    System::String^ getIdpersonnelEstgere();
    void setIdpersonnelEstgere(System::String^ idpersonnelEstgere);

    System::String^ getPersonneldateembauche();
    void setPersonneldateembauche(System::String^ personneldateembauche);
    
    System::String^ Select() override;
    System::String^ Insert() override;
    System::String^ Delete() override;
    System::String^ Update() override;
};

//#---Classe Client ---#

ref class CLclient : public CLpersonne
{
private:

    System::String^ client_date_naissance;
    System::String^ client_date_premier_achat;

public:
    System::String^ getClientdatenaissance();
    void setClientdatenaissance(System::String^ clientdatenaissance);

    System::String^ getClientdatepremierachat();
    void setClientdatepremierachat(System::String^ clientdatepremierachat);

    System::String^ Select() override;
    System::String^ Insert() override;
    System::String^ Delete() override;
    System::String^ Update() override;

};

//#---Classe Facture ---#

ref class CLfacture
{
private:

    int id_facture;
    int id_commande;
    System::String^ nom_societe;
    System::String^ numero_service_client;
    System::String^ logo_societe;

public:
    int getIdfacture();
    void setIdfacture(int idfacture);

    int getIdcommande();
    void setIdcommande(int idcommande);

    System::String^ getNomsociete();
    void setNomsociete(System::String^ nomsociete);

    System::String^ getNumeroserviceclient();
    void setNumeroserviceclient(System::String^ numeroserviceclient);

    System::String^ getLogosociete();
    void setLogosociete(System::String^ logosociete);

};

//#---Classe Paiement ---#

ref class CLpaiement
{
private:

    int id_article;
    int id_facture;
    System::String^ date_paiement;
    System::String^ date_reglement;
    System::String^ moyen_paiement;
    System::String^ solde_reglement;

public:
    int getIdarticle();
    void setIdarticle(int idarticle);

    int getIdfacture();
    void setIdfacture(int idfacture);

    System::String^ getDatepaiement();
    void setDatepaiement(System::String^ datepaiement);

    System::String^ getDatereglement();
    void setDatereglement(System::String^ datereglement);

    System::String^ getMoyenpaiement();
    void setMoyenpaiement(System::String^ moyenpaiement);

    System::String^ getSoldereglement();
    void setSoldereglement(System::String^ soldereglement);

};

//#---Classe Article ---#

ref class CLarticle
{
private:

    int id_article;
    System::String^ article_nom;
    System::String^ article_quantite;
    System::String^ article_puht;
    System::String^ article_nature;
    System::String^ article_seuil_reapprovisionnement;

public:
    int getIdarticle();
    void setIdarticle(int idarticle);

    System::String^ getArticlenom();
    void setArticlenom(System::String^ articlenom);

    System::String^ getArticlequantite();
    void setArticlequantite(System::String^ articlequantite);

    System::String^ getArticlepuht();
    void setArticlepuht(System::String^ articlepuht);

    System::String^ getArticlenature();
    void setArticlenature(System::String^ articlenature);

    System::String^ getArticleseuilreapprovisionnement();
    void setArticleseuilreapprovisionnement(System::String^ articleseuilreapprovisionnement);

    System::String^ Select() override;
    System::String^ Insert() override;
    System::String^ Delete() override;
    System::String^ Update() override;
};

//#---Classe Commande ---#

ref class CLcommande
{
private:

    int id_commande;
    int total_articles;
    int id_client;
    int id_facture;
    System::String^ ref_commande;
    System::String^ date_livraison;
    System::String^ date_emission;
    float montant_total_ht;
    float montant_total_tva;
    float montant_total_ttc;

public:
    int getIdcommande();
    void setIdcommande(int idcommande);

    int getTotalarticles();
    void setTotalarticles(int totalarticles);

    int getIdclient();
    void setIdclient(int idclient);

    int getIdfacture();
    void setIdfacture(int idfacture);

    System::String^ getRefcommande();
    void setRefcommande(System::String^ refcommande);

    System::String^ getDatelivraison();
    void setDatelivraison(System::String^ datelivraison);

    System::String^ getDateemission();
    void setDateemission(System::String^ dateemission);

    float getMontanttotalht();
    void setMontanttotalht(float montanttotalht);

    float getMontanttotaltva();
    void setMontanttotaltva(float montanttotaltva);

    float getMontanttotalttc();
    void setMontanttotalttc(float montanttotalttc);
    
    System::String^ Select() override;
    System::String^ Insert() override;
    System::String^ Delete() override;
    System::String^ Update() override;
    
};

//#---Classe Ville ---#

ref class CLville
{
private:
    int id_ville;

    System::String^ ville;
    System::String^ code_postal;
    System::String^ pays;

public:
    int getIdville();
    void setIdville(int idville);

    System::String^ getVille();
    void setVille(System::String^ ville);

    System::String^ getCodepostal();
    void setCodepostal(System::String^ codepostal);

    System::String^ getPays();
    void setPays(System::String^ pays);

    int getid_ville();
    void setid_ville(int id);
    System::String^ Select() ;

};

//#---Classe Livre ---#

ref class CLlivre
{
private:

    int id_adresse;
    int id_client;
    System::String^ type_adresse;

public:
    int getIdadresse();
    void setIdadresse(int idadresse);

    int getIdclient();
    void setIdclient(int idclient);

    System::String^ getTypeadresse();
    void setTypeadresse(System::String^ typeadresse);

};

//#---Classe Adresse ---#

ref class CLadresse
{
private:

    int id_adresse;
    int id_ville;
    System::String^ numero_rue;
    System::String^ nom_rue;
    System::String^ ville;

public:
    int getIdadresse();
    void setIdadresse(int idadresse);

    int getIdville();
    void setIdville(int idville);

    System::String^ getNumerorue();
    void setNumerorue(System::String^ numerorue);

    System::String^ getNomrue();
    void setNomrue(System::String^ nomrue);

    System::String^ getVille();
    void setVille(System::String^ ville);

};

//#---Classe Contenir ---#

ref class CLcontenir
{
private:

    int id_article;
    int id_commande;
    int quantité;

public:
    int getIdarticle();
    void setIdarticle(int idarticle);

    int getIdcommande();
    void setIdcommande(int idcommande);

    int getQuantit();
    void setQuantit(int quantit);

};