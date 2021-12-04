#pragma once
#include "MAP.h"
#include "ServicesClient.h"
#include "ServicesVille.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AddClient
	/// </summary>
	public ref class AddClient : public System::Windows::Forms::Form
	{

	public:
		AddClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::TextBox^ textBoxemail;
	public:

	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxbirthdate;
	private: System::Windows::Forms::TextBox^ textBoxphonenumber;


	private: System::Windows::Forms::Label^ Numtel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxaddressstreetname;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxaddressenumber;

	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ Adresse;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::ComboBox^ comboBoxville;

	private: System::Windows::Forms::Label^ labelPays;
	private: System::Windows::Forms::TextBox^ textBoxpostal;
	private: System::Windows::Forms::TextBox^ textBoxpays;





	private:
		Point PanelMouseDownLocation;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AddClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxname;
	protected:

	private: System::Windows::Forms::Label^ Nom;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxsurname;

	private: System::Windows::Forms::Panel^ panelmove1;
	private: System::Windows::Forms::Button^ X;
	private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxname = (gcnew System::Windows::Forms::TextBox());
			this->Nom = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxsurname = (gcnew System::Windows::Forms::TextBox());
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->textBoxemail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxbirthdate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxphonenumber = (gcnew System::Windows::Forms::TextBox());
			this->Numtel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxaddressstreetname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxaddressenumber = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Adresse = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->comboBoxville = (gcnew System::Windows::Forms::ComboBox());
			this->labelPays = (gcnew System::Windows::Forms::Label());
			this->textBoxpostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxpays = (gcnew System::Windows::Forms::TextBox());
			this->panelmove1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxname
			// 
			this->textBoxname->Location = System::Drawing::Point(366, 80);
			this->textBoxname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(90, 20);
			this->textBoxname->TabIndex = 0;
			this->textBoxname->TextChanged += gcnew System::EventHandler(this, &AddClient::textBox1_TextChanged);
			// 
			// Nom
			// 
			this->Nom->AutoSize = true;
			this->Nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Nom->Location = System::Drawing::Point(283, 72);
			this->Nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(53, 25);
			this->Nom->TabIndex = 2;
			this->Nom->Text = L"Nom";
			this->Nom->Click += gcnew System::EventHandler(this, &AddClient::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(271, 105);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prénom";
			// 
			// textBoxsurname
			// 
			this->textBoxsurname->Location = System::Drawing::Point(367, 113);
			this->textBoxsurname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxsurname->Name = L"textBoxsurname";
			this->textBoxsurname->Size = System::Drawing::Size(89, 20);
			this->textBoxsurname->TabIndex = 4;
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 0);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 13;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddClient::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddClient::panelmove1_MouseMove);
			// 
			// X
			// 
			this->X->BackColor = System::Drawing::Color::White;
			this->X->FlatAppearance->BorderSize = 0;
			this->X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->X->Location = System::Drawing::Point(765, 0);
			this->X->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(28, 32);
			this->X->TabIndex = 1;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = false;
			this->X->Click += gcnew System::EventHandler(this, &AddClient::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &AddClient::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &AddClient::X_MouseLeave);
			// 
			// textBoxemail
			// 
			this->textBoxemail->Location = System::Drawing::Point(368, 230);
			this->textBoxemail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxemail->Name = L"textBoxemail";
			this->textBoxemail->Size = System::Drawing::Size(189, 20);
			this->textBoxemail->TabIndex = 14;
			this->textBoxemail->TextChanged += gcnew System::EventHandler(this, &AddClient::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label3->Location = System::Drawing::Point(285, 222);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 25);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &AddClient::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label4->Location = System::Drawing::Point(183, 188);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Date de naissance";
			this->label4->Click += gcnew System::EventHandler(this, &AddClient::label4_Click);
			// 
			// textBoxbirthdate
			// 
			this->textBoxbirthdate->Location = System::Drawing::Point(368, 195);
			this->textBoxbirthdate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxbirthdate->Name = L"textBoxbirthdate";
			this->textBoxbirthdate->Size = System::Drawing::Size(116, 20);
			this->textBoxbirthdate->TabIndex = 18;
			this->textBoxbirthdate->TextChanged += gcnew System::EventHandler(this, &AddClient::textBox4_TextChanged);
			// 
			// textBoxphonenumber
			// 
			this->textBoxphonenumber->Location = System::Drawing::Point(368, 266);
			this->textBoxphonenumber->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxphonenumber->Name = L"textBoxphonenumber";
			this->textBoxphonenumber->Size = System::Drawing::Size(132, 20);
			this->textBoxphonenumber->TabIndex = 17;
			this->textBoxphonenumber->TextChanged += gcnew System::EventHandler(this, &AddClient::textBox5_TextChanged);
			// 
			// Numtel
			// 
			this->Numtel->AutoSize = true;
			this->Numtel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Numtel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Numtel->Location = System::Drawing::Point(149, 258);
			this->Numtel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Numtel->Name = L"Numtel";
			this->Numtel->Size = System::Drawing::Size(197, 25);
			this->Numtel->TabIndex = 16;
			this->Numtel->Text = L"Numéro de téléphone";
			this->Numtel->Click += gcnew System::EventHandler(this, &AddClient::label5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label5->Location = System::Drawing::Point(206, 337);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Nom de rue";
			this->label5->Click += gcnew System::EventHandler(this, &AddClient::label5_Click_1);
			// 
			// textBoxaddressstreetname
			// 
			this->textBoxaddressstreetname->Location = System::Drawing::Point(179, 376);
			this->textBoxaddressstreetname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxaddressstreetname->Name = L"textBoxaddressstreetname";
			this->textBoxaddressstreetname->Size = System::Drawing::Size(160, 20);
			this->textBoxaddressstreetname->TabIndex = 20;
			this->textBoxaddressstreetname->TextChanged += gcnew System::EventHandler(this, &AddClient::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label6->Location = System::Drawing::Point(3, 337);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 25);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Numéros de rue";
			// 
			// textBoxaddressenumber
			// 
			this->textBoxaddressenumber->Location = System::Drawing::Point(23, 376);
			this->textBoxaddressenumber->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxaddressenumber->Name = L"textBoxaddressenumber";
			this->textBoxaddressenumber->Size = System::Drawing::Size(93, 20);
			this->textBoxaddressenumber->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label7->Location = System::Drawing::Point(420, 337);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 25);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label8->Location = System::Drawing::Point(535, 337);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 25);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Code postal";
			// 
			// Adresse
			// 
			this->Adresse->AutoSize = true;
			this->Adresse->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adresse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Adresse->Location = System::Drawing::Point(340, 301);
			this->Adresse->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Adresse->Name = L"Adresse";
			this->Adresse->Size = System::Drawing::Size(81, 25);
			this->Adresse->TabIndex = 28;
			this->Adresse->Text = L"Adresse";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(271, 150);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 25);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Information personnelle";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label9->Location = System::Drawing::Point(340, 34);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 25);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Civilité";
			// 
			// Valider
			// 
			this->Valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Valider->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Valider->Location = System::Drawing::Point(344, 435);
			this->Valider->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Valider->Name = L"Valider";
			this->Valider->Size = System::Drawing::Size(85, 33);
			this->Valider->TabIndex = 31;
			this->Valider->Text = L"Valider";
			this->Valider->UseVisualStyleBackColor = true;
			this->Valider->Click += gcnew System::EventHandler(this, &AddClient::Valide_Click);
			// 
			// comboBoxville
			// 
			this->comboBoxville->FormattingEnabled = true;
			this->comboBoxville->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
				L"Paris", L"Marseille", L"Lyon", L"Toulouse",
					L"Nice", L"Nantes", L"Strasbourg", L"Montpellier", L"Bordeaux", L"Lille", L"Rennes", L"Reims", L"Le Havre", L"Saint-Étienne",
					L"Toulon", L"Grenoble", L"Angers", L"Dijon", L"Brest", L"Le Mans", L"Nîmes", L"Aix-en-Provence", L"Clermont-Ferrand", L"Tours",
					L"Amiens", L"Limoges", L"Villeurbanne", L"Metz", L"Besançon", L"Perpignan", L"Orléans", L"Caen", L"Mulhouse", L"Boulogne-Billancourt",
					L"Rouen", L"Nancy", L"Argenteuil", L"Montreuil", L"Saint-Denis", L"Roubaix", L"Avignon", L"Tourcoing", L"Poitiers", L"Nanterre",
					L"Créteil", L"Versailles", L"Pau", L"Courbevoie", L"Vitry-sur-Seine", L"Asnières-sur-Seine", L"Colombes", L"Aulnay-sous-Bois",
					L"La Rochelle", L"Rueil-Malmaison", L"Antibes", L"Saint-Maur-des-Fossés", L"Calais", L"Champigny-sur-Marne", L"Aubervilliers",
					L"Béziers", L"Bourges", L"Cannes", L"Saint-Nazaire", L"Dunkerque", L"Quimper", L"Valence", L"Colmar", L"Drancy", L"Mérignac",
					L"Ajaccio", L"Levallois-Perret", L"Troyes", L"Neuilly-sur-Seine", L"Issy-les-Moulineaux", L"Villeneuve-d\'Ascq", L"Noisy-le-Grand",
					L"Antony", L"Niort", L"Lorient", L"Sarcelles", L"Chambéry", L"Saint-Quentin", L"Pessac", L"Vénissieux", L"Cergy", L"La Seyne-sur-Mer",
					L"Clichy", L"Beauvais", L"Cholet", L"Hyères", L"Ivry-sur-Seine", L"Montauban", L"Vannes", L"La Roche-sur-Yon", L"Charleville-Mézières",
					L"Pantin", L"Laval", L"Maisons-Alfort", L"Bondy", L"Évry"
			});
			this->comboBoxville->Location = System::Drawing::Point(381, 376);
			this->comboBoxville->Name = L"comboBoxville";
			this->comboBoxville->Size = System::Drawing::Size(121, 21);
			this->comboBoxville->TabIndex = 32;
			this->comboBoxville->SelectedIndexChanged += gcnew System::EventHandler(this, &AddClient::comboBoxville_SelectedIndexChanged);
			// 
			// labelPays
			// 
			this->labelPays->AutoSize = true;
			this->labelPays->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPays->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelPays->Location = System::Drawing::Point(701, 337);
			this->labelPays->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPays->Name = L"labelPays";
			this->labelPays->Size = System::Drawing::Size(49, 25);
			this->labelPays->TabIndex = 34;
			this->labelPays->Text = L"Pays";
			this->labelPays->Click += gcnew System::EventHandler(this, &AddClient::labelPays_Click);
			// 
			// textBoxpostal
			// 
			this->textBoxpostal->Location = System::Drawing::Point(540, 377);
			this->textBoxpostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxpostal->Name = L"textBoxpostal";
			this->textBoxpostal->ReadOnly = true;
			this->textBoxpostal->Size = System::Drawing::Size(93, 20);
			this->textBoxpostal->TabIndex = 36;
			// 
			// textBoxpays
			// 
			this->textBoxpays->Location = System::Drawing::Point(689, 377);
			this->textBoxpays->Margin = System::Windows::Forms::Padding(2);
			this->textBoxpays->Name = L"textBoxpays";
			this->textBoxpays->ReadOnly = true;
			this->textBoxpays->Size = System::Drawing::Size(93, 20);
			this->textBoxpays->TabIndex = 37;
			// 
			// AddClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->textBoxpays);
			this->Controls->Add(this->textBoxpostal);
			this->Controls->Add(this->labelPays);
			this->Controls->Add(this->comboBoxville);
			this->Controls->Add(this->Valider);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Adresse);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxaddressenumber);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxaddressstreetname);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxbirthdate);
			this->Controls->Add(this->textBoxphonenumber);
			this->Controls->Add(this->Numtel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxemail);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->textBoxsurname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Nom);
			this->Controls->Add(this->textBoxname);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AddClient";
			this->Text = L"AddClient";
			this->Load += gcnew System::EventHandler(this, &AddClient::AddClient_Load);
			this->panelmove1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
			AddClient::Left += e->X - PanelMouseDownLocation.X;
			AddClient::Top += e->Y - PanelMouseDownLocation.Y;
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

	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void X_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(221, 25, 23);
	}
	private: System::Void X_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(255, 255, 255);
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Valide_Click(System::Object^ sender, System::EventArgs^ e) {
		servicesclient^ oservicesclient = gcnew servicesclient();
		CLclient^ oclient = gcnew CLclient();
		CAD^ connection = gcnew CAD();
		oservicesclient->setoCad(connection);

		oclient->setNom(textBoxsurname->Text);
		oclient->setPrenom(textBoxname->Text);
		oclient->setAdressemail(textBoxemail->Text);
		oclient->setNumerotelephone(textBoxphonenumber->Text);
		oclient->setClientdatenaissance(textBoxbirthdate->Text);
		/*oclient->setNumerorue(textBoxaddressenumber->Text);
		oclient->setNomrue(textBoxaddressstreetname->Text);
		oclient->setCodepostal(textBoxadresszipcode->Text);
		oclient->setVille(textBoxaddresscity->Text);*/


		//Mettre les setter pour nos attributs de la table client

		oservicesclient->setoMap(oclient);
		oservicesclient->insererclient(oclient);
		this->Close();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelPays_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddClient_Load(System::Object^ sender, System::EventArgs^ e) {
	servicesville^ oservicesville = gcnew servicesville();
	CLville^ oville = gcnew CLville();
	CAD^ connection = gcnew CAD();
	oservicesville->setoCad(connection);
	oservicesville->setoMap(oville);
	comboBoxville->ValueMember = "ville";
	comboBoxville->DataSource = oservicesville->selectionnerville();
}
private: System::Void comboBoxville_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


