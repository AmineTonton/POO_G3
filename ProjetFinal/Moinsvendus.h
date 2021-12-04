#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Moinsvendus
	/// </summary>
	public ref class Moinsvendus : public System::Windows::Forms::Form
	{
	public:
		Moinsvendus(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Moinsvendus()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_article;

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
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id_article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 0);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 31;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Moinsvendus::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Moinsvendus::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &Moinsvendus::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &Moinsvendus::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &Moinsvendus::X_MouseLeave);
			// 
			// buttonactualiser
			// 
			this->buttonactualiser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonactualiser->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonactualiser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonactualiser->Location = System::Drawing::Point(305, 54);
			this->buttonactualiser->Margin = System::Windows::Forms::Padding(2);
			this->buttonactualiser->Name = L"buttonactualiser";
			this->buttonactualiser->Size = System::Drawing::Size(127, 41);
			this->buttonactualiser->TabIndex = 33;
			this->buttonactualiser->Text = L"Actualiser";
			this->buttonactualiser->UseVisualStyleBackColor = true;
			this->buttonactualiser->Click += gcnew System::EventHandler(this, &Moinsvendus::buttonactualiser_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Total,
					this->id_article
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 126);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(771, 341);
			this->dataGridView1->TabIndex = 32;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->MinimumWidth = 6;
			this->Total->Name = L"Total";
			this->Total->Width = 125;
			// 
			// id_article
			// 
			this->id_article->HeaderText = L"id_article";
			this->id_article->Name = L"id_article";
			// 
			// Moinsvendus
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
			this->Name = L"Moinsvendus";
			this->Text = L"Moinsvendus";
			this->Load += gcnew System::EventHandler(this, &Moinsvendus::Moinsvendus_Load);
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
			Moinsvendus::Left += e->X - PanelMouseDownLocation.X;
			Moinsvendus::Top += e->Y - PanelMouseDownLocation.Y;
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
private: System::Void buttonactualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select top 10 sum(quantite) as 'total', id_article from Contenir group by id_article order by total asc;", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0], myReader[1]);
	}
	conDataBase->Close();
}
private: System::Void Moinsvendus_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select top 10 sum(quantite) as 'total', id_article from Contenir group by id_article order by total asc;", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0], myReader[1]);
	}
	conDataBase->Close();
}
};
}
