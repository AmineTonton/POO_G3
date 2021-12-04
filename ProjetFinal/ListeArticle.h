#pragma once
#include "MAP.h"
#include "ServicesArticle.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ListeArticle
	/// </summary>
	public ref class ListeArticle : public System::Windows::Forms::Form
	{
	public:
		ListeArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_article;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_quantité;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_puht;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nature;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_seuil_reapprovisionnement;

	public:








	public:
	private:
		Point PanelMouseDownLocation;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ListeArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::Button^ buttonactualiser;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->buttonactualiser = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_quantité = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_puht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nature = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_seuil_reapprovisionnement = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, -1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 25;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ListeArticle::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ListeArticle::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &ListeArticle::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &ListeArticle::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &ListeArticle::X_MouseLeave);
			// 
			// buttonactualiser
			// 
			this->buttonactualiser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonactualiser->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonactualiser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonactualiser->Location = System::Drawing::Point(305, 53);
			this->buttonactualiser->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonactualiser->Name = L"buttonactualiser";
			this->buttonactualiser->Size = System::Drawing::Size(127, 41);
			this->buttonactualiser->TabIndex = 27;
			this->buttonactualiser->Text = L"Actualiser";
			this->buttonactualiser->UseVisualStyleBackColor = true;
			this->buttonactualiser->Click += gcnew System::EventHandler(this, &ListeArticle::buttonactualiser_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id_article,
					this->article_nom, this->article_quantité, this->article_puht, this->article_nature, this->article_seuil_reapprovisionnement
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 125);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(771, 341);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListeArticle::dataGridView1_CellContentClick);
			// 
			// id_article
			// 
			this->id_article->HeaderText = L"id_article";
			this->id_article->MinimumWidth = 6;
			this->id_article->Name = L"id_article";
			this->id_article->Width = 125;
			// 
			// article_nom
			// 
			this->article_nom->HeaderText = L"article_nom";
			this->article_nom->MinimumWidth = 6;
			this->article_nom->Name = L"article_nom";
			this->article_nom->Width = 125;
			// 
			// article_quantité
			// 
			this->article_quantité->HeaderText = L"article_quantité";
			this->article_quantité->MinimumWidth = 6;
			this->article_quantité->Name = L"article_quantité";
			this->article_quantité->Width = 125;
			// 
			// article_puht
			// 
			this->article_puht->HeaderText = L"article_puht";
			this->article_puht->MinimumWidth = 6;
			this->article_puht->Name = L"article_puht";
			this->article_puht->Width = 125;
			// 
			// article_nature
			// 
			this->article_nature->HeaderText = L"article_nature";
			this->article_nature->MinimumWidth = 6;
			this->article_nature->Name = L"article_nature";
			this->article_nature->Width = 125;
			// 
			// article_seuil_reapprovisionnement
			// 
			this->article_seuil_reapprovisionnement->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->article_seuil_reapprovisionnement->HeaderText = L"article_seuil_reapprovisionnement";
			this->article_seuil_reapprovisionnement->MinimumWidth = 6;
			this->article_seuil_reapprovisionnement->Name = L"article_seuil_reapprovisionnement";
			// 
			// ListeArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->buttonactualiser);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ListeArticle";
			this->Text = L"ListeArticle";
			this->Load += gcnew System::EventHandler(this, &ListeArticle::ListeArticle_Load);
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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
			ListeArticle::Left += e->X - PanelMouseDownLocation.X;
			ListeArticle::Top += e->Y - PanelMouseDownLocation.Y;
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void buttonactualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Article ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5]);
	}
	conDataBase->Close();





}
private: System::Void ListeArticle_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";

	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Article ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5]);
	}
	conDataBase->Close();

}
};
}