#pragma once
#include "MAP.h"
#include "ServicesArticle.h"


namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de SuppArticle
	/// </summary>
	public ref class SuppArticle : public System::Windows::Forms::Form
	{
	public:
		SuppArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~SuppArticle()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ labelrecherche;
	private: System::Windows::Forms::Button^ buttonsupprimer;







	private: System::Windows::Forms::Panel^ panelmove1;
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::Button^ buttonrechercher;
	private: System::Windows::Forms::Label^ labelsupprimer;
	private: System::Windows::Forms::TextBox^ textBoxrefcommande;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::TextBox^ textBoxrefsuppcommande;
	private: System::Windows::Forms::Label^ labelnclient;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		Point PanelMouseDownLocation;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_quantite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_puht;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nature;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_seuil_reapprovisionnement;

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
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->buttonsupprimer = (gcnew System::Windows::Forms::Button());
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
			this->labelsupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxrefcommande = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->textBoxrefsuppcommande = (gcnew System::Windows::Forms::TextBox());
			this->labelnclient = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_quantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_puht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nature = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_seuil_reapprovisionnement = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(108, 51);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 46;
			this->labelrecherche->Text = L"Recherche";
			// 
			// buttonsupprimer
			// 
			this->buttonsupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonsupprimer->Location = System::Drawing::Point(655, 107);
			this->buttonsupprimer->Margin = System::Windows::Forms::Padding(2);
			this->buttonsupprimer->Name = L"buttonsupprimer";
			this->buttonsupprimer->Size = System::Drawing::Size(127, 41);
			this->buttonsupprimer->TabIndex = 45;
			this->buttonsupprimer->Text = L"Supprimer";
			this->buttonsupprimer->UseVisualStyleBackColor = true;
			this->buttonsupprimer->Click += gcnew System::EventHandler(this, &SuppArticle::buttonsupprimer_Click);
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 37;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppArticle::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppArticle::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &SuppArticle::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &SuppArticle::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &SuppArticle::X_MouseLeave);
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(250, 107);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(127, 41);
			this->buttonrechercher->TabIndex = 44;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			this->buttonrechercher->Click += gcnew System::EventHandler(this, &SuppArticle::buttonrechercher_Click);
			// 
			// labelsupprimer
			// 
			this->labelsupprimer->AutoSize = true;
			this->labelsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelsupprimer->Location = System::Drawing::Point(506, 51);
			this->labelsupprimer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelsupprimer->Name = L"labelsupprimer";
			this->labelsupprimer->Size = System::Drawing::Size(122, 25);
			this->labelsupprimer->TabIndex = 43;
			this->labelsupprimer->Text = L"Suppression";
			// 
			// textBoxrefcommande
			// 
			this->textBoxrefcommande->Location = System::Drawing::Point(126, 88);
			this->textBoxrefcommande->Margin = System::Windows::Forms::Padding(2);
			this->textBoxrefcommande->Name = L"textBoxrefcommande";
			this->textBoxrefcommande->Size = System::Drawing::Size(96, 20);
			this->textBoxrefcommande->TabIndex = 39;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->nom->Location = System::Drawing::Point(27, 82);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(53, 25);
			this->nom->TabIndex = 42;
			this->nom->Text = L"Nom";
			this->nom->Click += gcnew System::EventHandler(this, &SuppArticle::nom_Click);
			// 
			// textBoxrefsuppcommande
			// 
			this->textBoxrefsuppcommande->Location = System::Drawing::Point(552, 120);
			this->textBoxrefsuppcommande->Margin = System::Windows::Forms::Padding(2);
			this->textBoxrefsuppcommande->Name = L"textBoxrefsuppcommande";
			this->textBoxrefsuppcommande->Size = System::Drawing::Size(76, 20);
			this->textBoxrefsuppcommande->TabIndex = 40;
			// 
			// labelnclient
			// 
			this->labelnclient->AutoSize = true;
			this->labelnclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnclient->Location = System::Drawing::Point(453, 115);
			this->labelnclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnclient->Name = L"labelnclient";
			this->labelnclient->Size = System::Drawing::Size(90, 25);
			this->labelnclient->TabIndex = 41;
			this->labelnclient->Text = L"Article n°";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id_article,
					this->article_nom, this->article_quantite, this->article_puht, this->article_nature, this->article_seuil_reapprovisionnement
			});
			this->dataGridView1->Location = System::Drawing::Point(54, 177);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(677, 291);
			this->dataGridView1->TabIndex = 38;
			// 
			// id_article
			// 
			this->id_article->HeaderText = L"id_article";
			this->id_article->Name = L"id_article";
			// 
			// article_nom
			// 
			this->article_nom->HeaderText = L"article_nom";
			this->article_nom->Name = L"article_nom";
			// 
			// article_quantite
			// 
			this->article_quantite->HeaderText = L"article_quantite";
			this->article_quantite->Name = L"article_quantite";
			// 
			// article_puht
			// 
			this->article_puht->HeaderText = L"article_puht";
			this->article_puht->Name = L"article_puht";
			// 
			// article_nature
			// 
			this->article_nature->HeaderText = L"article_nature";
			this->article_nature->Name = L"article_nature";
			// 
			// article_seuil_reapprovisionnement
			// 
			this->article_seuil_reapprovisionnement->HeaderText = L"article_seuil_reapprovisionnement";
			this->article_seuil_reapprovisionnement->Name = L"article_seuil_reapprovisionnement";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 137);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 47;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(27, 131);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Nature";
			// 
			// SuppArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->buttonsupprimer);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->labelsupprimer);
			this->Controls->Add(this->textBoxrefcommande);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->textBoxrefsuppcommande);
			this->Controls->Add(this->labelnclient);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuppArticle";
			this->Text = L"SuppArticle";
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
			SuppArticle::Left += e->X - PanelMouseDownLocation.X;
			SuppArticle::Top += e->Y - PanelMouseDownLocation.Y;
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
private: System::Void nom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonrechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	//LANCER RECHERCHE
	String^ nom = textBoxrefcommande->Text;
	String^ nature = textBox1->Text;

	
	String^ constring = "Data Source=LAPTOP-J0DFQRK5\\MSSQL;Initial Catalog=PROJET_POO2;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Article where article_nom = '" + nom + "' and article_nature = '" + nature +"';", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5]);
	}
	conDataBase->Close();
}
private: System::Void buttonsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	//SUPPRESSION ARTICLE
	servicesarticle^ oservicearticle = gcnew servicesarticle();
	CLarticle^ oarticle = gcnew CLarticle();
	CAD^ connection = gcnew CAD();
	oservicearticle->setoCad(connection);

	oarticle->setIdarticle(int::Parse(textBoxrefsuppcommande->Text));

	oservicearticle->setoMap(oarticle);
	oservicearticle->supprimerarticle(oarticle);
}
};
}
