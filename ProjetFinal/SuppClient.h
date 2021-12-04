#pragma once
#include "MAP.h"
#include "ServicesClient.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de SuppClient
	/// </summary>
	public ref class SuppClient : public System::Windows::Forms::Form
	{
	public:
		SuppClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_client;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_prenom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_date_naissance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_date_premier_achat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_adresse_mail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_numero_telephone;

	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~SuppClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ labelnclient;

	private: System::Windows::Forms::Label^ prénom;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ labelsupprimer;



	private: System::Windows::Forms::Button^ buttonrechercher;
	private: System::Windows::Forms::Button^ buttonsupprimer;


	private: System::Windows::Forms::Label^ labelrecherche;


	private:
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
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_date_naissance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_date_premier_achat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_adresse_mail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_numero_telephone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelnclient = (gcnew System::Windows::Forms::Label());
			this->prénom = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->labelsupprimer = (gcnew System::Windows::Forms::Label());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
			this->buttonsupprimer = (gcnew System::Windows::Forms::Button());
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 14;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppClient::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppClient::panelmove1_MouseMove);
			// 
			// X
			// 
			this->X->BackColor = System::Drawing::Color::White;
			this->X->FlatAppearance->BorderSize = 0;
			this->X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->X->Location = System::Drawing::Point(765, 0);
			this->X->Margin = System::Windows::Forms::Padding(2);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(28, 32);
			this->X->TabIndex = 1;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = false;
			this->X->Click += gcnew System::EventHandler(this, &SuppClient::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &SuppClient::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &SuppClient::X_MouseLeave);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id_client,
					this->client_nom, this->client_prenom, this->client_date_naissance, this->client_date_premier_achat, this->client_adresse_mail,
					this->client_numero_telephone
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 167);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(771, 291);
			this->dataGridView1->TabIndex = 15;
			// 
			// id_client
			// 
			this->id_client->HeaderText = L"id_client";
			this->id_client->Name = L"id_client";
			// 
			// client_nom
			// 
			this->client_nom->HeaderText = L"client_nom";
			this->client_nom->Name = L"client_nom";
			// 
			// client_prenom
			// 
			this->client_prenom->HeaderText = L"client_prenom";
			this->client_prenom->Name = L"client_prenom";
			// 
			// client_date_naissance
			// 
			this->client_date_naissance->HeaderText = L"client_date_naissance";
			this->client_date_naissance->Name = L"client_date_naissance";
			// 
			// client_date_premier_achat
			// 
			this->client_date_premier_achat->HeaderText = L"client_date_premier_achat";
			this->client_date_premier_achat->Name = L"client_date_premier_achat";
			// 
			// client_adresse_mail
			// 
			this->client_adresse_mail->HeaderText = L"client_adresse_mail";
			this->client_adresse_mail->Name = L"client_adresse_mail";
			// 
			// client_numero_telephone
			// 
			this->client_numero_telephone->HeaderText = L"client_numero_telephone";
			this->client_numero_telephone->Name = L"client_numero_telephone";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 128);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 86);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(549, 105);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 18;
			// 
			// labelnclient
			// 
			this->labelnclient->AutoSize = true;
			this->labelnclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnclient->Location = System::Drawing::Point(466, 100);
			this->labelnclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnclient->Name = L"labelnclient";
			this->labelnclient->Size = System::Drawing::Size(82, 25);
			this->labelnclient->TabIndex = 19;
			this->labelnclient->Text = L"N°Client";
			// 
			// prénom
			// 
			this->prénom->AutoSize = true;
			this->prénom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prénom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->prénom->Location = System::Drawing::Point(51, 79);
			this->prénom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->prénom->Name = L"prénom";
			this->prénom->Size = System::Drawing::Size(78, 25);
			this->prénom->TabIndex = 20;
			this->prénom->Text = L"Prénom";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->nom->Location = System::Drawing::Point(51, 119);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(53, 25);
			this->nom->TabIndex = 21;
			this->nom->Text = L"Nom";
			// 
			// labelsupprimer
			// 
			this->labelsupprimer->AutoSize = true;
			this->labelsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelsupprimer->Location = System::Drawing::Point(508, 41);
			this->labelsupprimer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelsupprimer->Name = L"labelsupprimer";
			this->labelsupprimer->Size = System::Drawing::Size(122, 25);
			this->labelsupprimer->TabIndex = 22;
			this->labelsupprimer->Text = L"Suppression";
			this->labelsupprimer->Click += gcnew System::EventHandler(this, &SuppClient::label4_Click);
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(252, 97);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(127, 41);
			this->buttonrechercher->TabIndex = 23;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			this->buttonrechercher->Click += gcnew System::EventHandler(this, &SuppClient::buttonrechercher_Click);
			// 
			// buttonsupprimer
			// 
			this->buttonsupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonsupprimer->Location = System::Drawing::Point(657, 89);
			this->buttonsupprimer->Margin = System::Windows::Forms::Padding(2);
			this->buttonsupprimer->Name = L"buttonsupprimer";
			this->buttonsupprimer->Size = System::Drawing::Size(127, 41);
			this->buttonsupprimer->TabIndex = 24;
			this->buttonsupprimer->Text = L"Supprimer";
			this->buttonsupprimer->UseVisualStyleBackColor = true;
			this->buttonsupprimer->Click += gcnew System::EventHandler(this, &SuppClient::buttonsupprimer_Click);
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(110, 41);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 25;
			this->labelrecherche->Text = L"Recherche";
			// 
			// SuppClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->buttonsupprimer);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->labelsupprimer);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->prénom);
			this->Controls->Add(this->labelnclient);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SuppClient";
			this->Text = L"SuppClient";
			this->Load += gcnew System::EventHandler(this, &SuppClient::SuppClient_Load);
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SuppClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void X_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->X->BackColor = Color::FromArgb(221, 25, 23);
}
private: System::Void X_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->X->BackColor = Color::FromArgb(255, 255, 255);
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
			SuppClient::Left += e->X - PanelMouseDownLocation.X;
			SuppClient::Top += e->Y - PanelMouseDownLocation.Y;
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

private: System::Void buttonsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	//LANCEMENT SUPPRESSION
	servicesclient^ oserviceclient = gcnew servicesclient();
	CLclient^ oclient = gcnew CLclient();
	CAD^ connection = gcnew CAD();
	oserviceclient->setoCad(connection);

	oclient->setIdpersonne(int::Parse(textBox3->Text));

	oserviceclient->setoMap(oclient);
	oserviceclient->supprimerclient(oclient);
}
private: System::Void buttonrechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	//LANCEMENT RECHERCHE

	String^ nom = textBox1->Text;
	String^ prenom = textBox2->Text;

	
	String^ constring = "Data Source=LAPTOP-J0DFQRK5\\MSSQL;Initial Catalog=PROJET_POO2;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Client where client_nom = '" + nom + "' and client_prenom = '" + prenom +"';", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5]);
	}
	conDataBase->Close();
	
/*
	servicesclient^ oserviceclient = gcnew servicesclient();
	CLclient^ oclient = gcnew CLclient();
	CAD^ connection = gcnew CAD();
	oserviceclient->setoCad(connection);

	oclient->setNom(textBox2->Text);
	oclient->setPrenom(textBox1->Text);

	oserviceclient->setoMap(oclient);
	oserviceclient->selectionnerclients(oclient);
	*/

	
}
};
}
