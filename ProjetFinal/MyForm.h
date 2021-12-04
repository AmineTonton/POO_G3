#pragma once

#include "Comptabilite.h"
#include "Accueil.h"
#include "Client.h"
#include "Catalogue.h"
#include "Commande.h"
#include "Personnel.h"
#include "MonEspace.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Form^ activeForm = nullptr;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		void Afficher(Form^ newForm)
		{
			PanelAffichage->Controls->Clear();
			newForm->TopLevel = false;
			PanelAffichage->Controls->Add(newForm);
			PanelAffichage->Tag = newForm;
			newForm->BringToFront();
			newForm->Show();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ UserName;
	private: System::Windows::Forms::Button^ Accueil;
	private: System::Windows::Forms::Button^ Catalogue;
	private: System::Windows::Forms::Button^ Client;
	private: System::Windows::Forms::Button^ Comptabilité;
	private: System::Windows::Forms::Button^ Personnel;
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::Button^ MonEspace;
	private: System::Windows::Forms::Button^ Commande;
	private: System::Windows::Forms::Label^ TDB;
	private: System::Windows::Forms::Button^ btn_client;
	private: System::Windows::Forms::Button^ btn_commande;
	private: System::Windows::Forms::Button^ btn_facture;
	private: System::Windows::Forms::Button^ btn_produit;
	private: System::Windows::Forms::Panel^ panelmove1;

	private:
		Point PanelMouseDownLocation;
	private: System::Windows::Forms::Panel^ PanelAffichage;


		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Commande = (gcnew System::Windows::Forms::Button());
			this->MonEspace = (gcnew System::Windows::Forms::Button());
			this->Personnel = (gcnew System::Windows::Forms::Button());
			this->Comptabilité = (gcnew System::Windows::Forms::Button());
			this->Catalogue = (gcnew System::Windows::Forms::Button());
			this->Client = (gcnew System::Windows::Forms::Button());
			this->Accueil = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->X = (gcnew System::Windows::Forms::Button());
			this->TDB = (gcnew System::Windows::Forms::Label());
			this->btn_client = (gcnew System::Windows::Forms::Button());
			this->btn_commande = (gcnew System::Windows::Forms::Button());
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->btn_produit = (gcnew System::Windows::Forms::Button());
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->PanelAffichage = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelmove1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel1->Controls->Add(this->Commande);
			this->panel1->Controls->Add(this->MonEspace);
			this->panel1->Controls->Add(this->Personnel);
			this->panel1->Controls->Add(this->Comptabilité);
			this->panel1->Controls->Add(this->Catalogue);
			this->panel1->Controls->Add(this->Client);
			this->panel1->Controls->Add(this->Accueil);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(257, 785);
			this->panel1->TabIndex = 0;
			// 
			// Commande
			// 
			this->Commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Commande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Commande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Commande->Location = System::Drawing::Point(0, 489);
			this->Commande->Margin = System::Windows::Forms::Padding(4);
			this->Commande->Name = L"Commande";
			this->Commande->Size = System::Drawing::Size(257, 41);
			this->Commande->TabIndex = 4;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			this->Commande->Click += gcnew System::EventHandler(this, &MyForm::Commande_Click);
			this->Commande->MouseEnter += gcnew System::EventHandler(this, &MyForm::Commande_MouseEnter);
			this->Commande->MouseLeave += gcnew System::EventHandler(this, &MyForm::Commande_MouseLeave);
			// 
			// MonEspace
			// 
			this->MonEspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MonEspace->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MonEspace->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->MonEspace->Location = System::Drawing::Point(0, 544);
			this->MonEspace->Margin = System::Windows::Forms::Padding(4);
			this->MonEspace->Name = L"MonEspace";
			this->MonEspace->Size = System::Drawing::Size(257, 41);
			this->MonEspace->TabIndex = 3;
			this->MonEspace->Text = L"Mon Espace";
			this->MonEspace->UseVisualStyleBackColor = true;
			this->MonEspace->Click += gcnew System::EventHandler(this, &MyForm::MonEspace_Click);
			this->MonEspace->MouseEnter += gcnew System::EventHandler(this, &MyForm::MonEspace_MouseEnter);
			this->MonEspace->MouseLeave += gcnew System::EventHandler(this, &MyForm::MonEspace_MouseLeave);
			// 
			// Personnel
			// 
			this->Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Personnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Personnel->Location = System::Drawing::Point(0, 432);
			this->Personnel->Margin = System::Windows::Forms::Padding(4);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Size = System::Drawing::Size(257, 41);
			this->Personnel->TabIndex = 2;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			this->Personnel->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Click);
			this->Personnel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Personnel_MouseEnter);
			this->Personnel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Personnel_MouseLeave);
			// 
			// Comptabilité
			// 
			this->Comptabilité->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Comptabilité->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Comptabilité->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Comptabilité->Location = System::Drawing::Point(0, 376);
			this->Comptabilité->Margin = System::Windows::Forms::Padding(4);
			this->Comptabilité->Name = L"Comptabilité";
			this->Comptabilité->Size = System::Drawing::Size(257, 41);
			this->Comptabilité->TabIndex = 1;
			this->Comptabilité->Text = L"Comptabilité";
			this->Comptabilité->UseVisualStyleBackColor = true;
			this->Comptabilité->Click += gcnew System::EventHandler(this, &MyForm::Comptabilité_Click);
			this->Comptabilité->MouseEnter += gcnew System::EventHandler(this, &MyForm::Comptabilité_MouseEnter);
			this->Comptabilité->MouseLeave += gcnew System::EventHandler(this, &MyForm::Comptabilité_MouseLeave);
			// 
			// Catalogue
			// 
			this->Catalogue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Catalogue->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Catalogue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Catalogue->Location = System::Drawing::Point(0, 322);
			this->Catalogue->Margin = System::Windows::Forms::Padding(4);
			this->Catalogue->Name = L"Catalogue";
			this->Catalogue->Size = System::Drawing::Size(257, 41);
			this->Catalogue->TabIndex = 1;
			this->Catalogue->Text = L"Catalogue";
			this->Catalogue->UseVisualStyleBackColor = true;
			this->Catalogue->Click += gcnew System::EventHandler(this, &MyForm::Catalogue_Click);
			this->Catalogue->MouseEnter += gcnew System::EventHandler(this, &MyForm::Catalogue_MouseEnter);
			this->Catalogue->MouseLeave += gcnew System::EventHandler(this, &MyForm::Catalogue_MouseLeave);
			// 
			// Client
			// 
			this->Client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Client->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Client->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Client->Location = System::Drawing::Point(0, 265);
			this->Client->Margin = System::Windows::Forms::Padding(4);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(257, 41);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Client";
			this->Client->UseVisualStyleBackColor = true;
			this->Client->Click += gcnew System::EventHandler(this, &MyForm::Client_Click);
			this->Client->MouseEnter += gcnew System::EventHandler(this, &MyForm::Client_MouseEnter);
			this->Client->MouseLeave += gcnew System::EventHandler(this, &MyForm::Client_MouseLeave);
			// 
			// Accueil
			// 
			this->Accueil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Accueil->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accueil->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Accueil->Location = System::Drawing::Point(0, 209);
			this->Accueil->Margin = System::Windows::Forms::Padding(4);
			this->Accueil->Name = L"Accueil";
			this->Accueil->Size = System::Drawing::Size(257, 41);
			this->Accueil->TabIndex = 1;
			this->Accueil->Text = L"Accueil";
			this->Accueil->UseVisualStyleBackColor = true;
			this->Accueil->Click += gcnew System::EventHandler(this, &MyForm::Accueil_Click);
			this->Accueil->Leave += gcnew System::EventHandler(this, &MyForm::Accueil_Leave);
			this->Accueil->MouseEnter += gcnew System::EventHandler(this, &MyForm::Accueil_MouseEnter);
			this->Accueil->MouseLeave += gcnew System::EventHandler(this, &MyForm::Accueil_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->UserName);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 188);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(81, 150);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Description";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->UserName->Location = System::Drawing::Point(67, 108);
			this->UserName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(103, 20);
			this->UserName->TabIndex = 1;
			this->UserName->Text = L"User Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 31);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// X
			// 
			this->X->FlatAppearance->BorderSize = 0;
			this->X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X->ForeColor = System::Drawing::Color::White;
			this->X->Location = System::Drawing::Point(901, 0);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(33, 36);
			this->X->TabIndex = 1;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = true;
			this->X->Click += gcnew System::EventHandler(this, &MyForm::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &MyForm::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &MyForm::X_MouseLeave);
			// 
			// TDB
			// 
			this->TDB->AutoSize = true;
			this->TDB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->TDB->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TDB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->TDB->Location = System::Drawing::Point(545, 39);
			this->TDB->Name = L"TDB";
			this->TDB->Size = System::Drawing::Size(326, 54);
			this->TDB->TabIndex = 7;
			this->TDB->Text = L"Tableau de bord";
			this->TDB->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// btn_client
			// 
			this->btn_client->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_client->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_client.BackgroundImage")));
			this->btn_client->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_client->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_client->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_client->Location = System::Drawing::Point(303, 141);
			this->btn_client->Name = L"btn_client";
			this->btn_client->Size = System::Drawing::Size(292, 181);
			this->btn_client->TabIndex = 8;
			this->btn_client->Text = L"Ajouter un client";
			this->btn_client->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_client->UseVisualStyleBackColor = false;
			// 
			// btn_commande
			// 
			this->btn_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_commande->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_commande.BackgroundImage")));
			this->btn_commande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_commande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_commande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_commande->Location = System::Drawing::Point(769, 141);
			this->btn_commande->Name = L"btn_commande";
			this->btn_commande->Size = System::Drawing::Size(292, 181);
			this->btn_commande->TabIndex = 9;
			this->btn_commande->Text = L"Commande en cours";
			this->btn_commande->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_commande->UseVisualStyleBackColor = false;
			// 
			// btn_facture
			// 
			this->btn_facture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_facture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_facture.BackgroundImage")));
			this->btn_facture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_facture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_facture->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_facture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_facture->Location = System::Drawing::Point(769, 376);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(292, 181);
			this->btn_facture->TabIndex = 11;
			this->btn_facture->Text = L"Facture";
			this->btn_facture->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_facture->UseVisualStyleBackColor = false;
			// 
			// btn_produit
			// 
			this->btn_produit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_produit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_produit.BackgroundImage")));
			this->btn_produit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_produit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_produit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_produit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_produit->Location = System::Drawing::Point(303, 376);
			this->btn_produit->Name = L"btn_produit";
			this->btn_produit->Size = System::Drawing::Size(292, 181);
			this->btn_produit->TabIndex = 10;
			this->btn_produit->Text = L"Produits manquants";
			this->btn_produit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_produit->UseVisualStyleBackColor = false;
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(257, 0);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(934, 36);
			this->panelmove1->TabIndex = 12;
			this->panelmove1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelmove_Paint);
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelmove1_MouseMove);
			// 
			// PanelAffichage
			// 
			this->PanelAffichage->Location = System::Drawing::Point(257, 96);
			this->PanelAffichage->Name = L"PanelAffichage";
			this->PanelAffichage->Size = System::Drawing::Size(934, 504);
			this->PanelAffichage->TabIndex = 13;
			this->PanelAffichage->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PanelAffichage_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(1190, 601);
			this->Controls->Add(this->PanelAffichage);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->btn_facture);
			this->Controls->Add(this->btn_produit);
			this->Controls->Add(this->btn_commande);
			this->Controls->Add(this->btn_client);
			this->Controls->Add(this->TDB);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelmove1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//                                                               
		//---------------- Liste des fonctions ----------------//
		//   

#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//
	//Client
	//
	private: System::Void Client_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Client->BackColor = Color::FromArgb(34, 34, 59);
		this->Client->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Client_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Client);
	}

	private: System::Void Client_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Client->BackColor = Color::FromArgb(154, 140, 152);
		this->Client->ForeColor = Color::FromArgb(34, 34, 59);
	}

	//
	//Accueil
	//
	private: System::Void Accueil_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Accueil->BackColor = Color::FromArgb(34, 34, 59);
		this->Accueil->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Accueil_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Accueil->BackColor = Color::FromArgb(154, 140, 152);
		this->Accueil->ForeColor = Color::FromArgb(34, 34, 59);
	}
	private: System::Void Accueil_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Accueil);
	}
	private: System::Void Accueil_Leave(System::Object^ sender, System::EventArgs^ e) {
		
	}


	//
	//Catalogue
	//
	private: System::Void Catalogue_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Catalogue->BackColor = Color::FromArgb(34, 34, 59);
		this->Catalogue->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Catalogue_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Catalogue);
	}
	private: System::Void Catalogue_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Catalogue->BackColor = Color::FromArgb(154, 140, 152);
		this->Catalogue->ForeColor = Color::FromArgb(34, 34, 59);
	}


	//
	//Comptabilité
	//
	private: System::Void Comptabilité_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Comptabilité->BackColor = Color::FromArgb(34, 34, 59);
		this->Comptabilité->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Comptabilité_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Comptabilité->BackColor = Color::FromArgb(154, 140, 152);
		this->Comptabilité->ForeColor = Color::FromArgb(34, 34, 59);
	}
	private: System::Void Comptabilité_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Comptabilite);
	}

	//
	//Personnel
	//
	private: System::Void Personnel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Personnel->BackColor = Color::FromArgb(34, 34, 59);
		this->Personnel->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Personnel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Personnel->BackColor = Color::FromArgb(154, 140, 152);
		this->Personnel->ForeColor = Color::FromArgb(34, 34, 59);
	}
	private: System::Void Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Personnel);
		
	}


	//
	//Menu fermer
	//
	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void X_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(221, 25, 23);
	}
	private: System::Void X_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(65, 69, 93);
	}

	//
	//Panel3
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	//Labels (Zone de textes) fonction Click
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//
	//Myform Load
	//
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Accueil);
	}

	//
	//Commande
	//
	private: System::Void Commande_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->Commande->BackColor = Color::FromArgb(34, 34, 59);
		this->Commande->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void Commande_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::Commande);
	}
	private: System::Void Commande_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Commande->BackColor = Color::FromArgb(154, 140, 152);
		this->Commande->ForeColor = Color::FromArgb(34, 34, 59);
	}

	//
	//Mon Espace
	//
	private: System::Void MonEspace_Click(System::Object^ sender, System::EventArgs^ e) {
		Afficher(gcnew Interface::MonEspace);
	}
	private: System::Void MonEspace_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->MonEspace->BackColor = Color::FromArgb(34, 34, 59);
		this->MonEspace->ForeColor = Color::FromArgb(154, 140, 152);
	}
	private: System::Void MonEspace_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->MonEspace->BackColor = Color::FromArgb(154, 140, 152);
		this->MonEspace->ForeColor = Color::FromArgb(34, 34, 59);
	}




		   //Drag and move / panelmove1

	private: void dragFormMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			PanelMouseDownLocation = e->Location;
	}
	private: void dragFormMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			MyForm::Left += e->X - PanelMouseDownLocation.X;
			MyForm::Top += e->Y - PanelMouseDownLocation.Y;
		}
	}

	private: System::Void panelmove1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseDown(sender, e);
	}
	private: System::Void panelmove1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseMove(sender, e);
	}


	private: System::Void panelmove_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


private: System::Void PanelAffichage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}



