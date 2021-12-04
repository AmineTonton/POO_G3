#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Facture
	/// </summary>
	public ref class Facture : public System::Windows::Forms::Form
	{
	public:
		Facture(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ labelrecherche;
	private: System::Windows::Forms::Label^ labeldocument;
	private: System::Windows::Forms::Button^ btnTélécharger;
	private: System::Windows::Forms::TextBox^ textBoxid;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelnomsociété;

	private: System::Windows::Forms::TextBox^ textBoxrechercher;
	private: System::Windows::Forms::Button^ buttonrechercher;

	public:

	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Facture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;

	protected:


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
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->labeldocument = (gcnew System::Windows::Forms::Label());
			this->btnTélécharger = (gcnew System::Windows::Forms::Button());
			this->textBoxid = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelnomsociété = (gcnew System::Windows::Forms::Label());
			this->textBoxrechercher = (gcnew System::Windows::Forms::TextBox());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
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
			this->panelmove1->TabIndex = 14;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Facture::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Facture::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &Facture::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &Facture::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &Facture::X_MouseLeave);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(769, 276);
			this->dataGridView1->TabIndex = 15;
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(81, 48);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 31;
			this->labelrecherche->Text = L"Recherche";
			// 
			// labeldocument
			// 
			this->labeldocument->AutoSize = true;
			this->labeldocument->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldocument->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labeldocument->Location = System::Drawing::Point(509, 48);
			this->labeldocument->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeldocument->Name = L"labeldocument";
			this->labeldocument->Size = System::Drawing::Size(105, 25);
			this->labeldocument->TabIndex = 32;
			this->labeldocument->Text = L"Document";
			// 
			// btnTélécharger
			// 
			this->btnTélécharger->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTélécharger->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnTélécharger->Location = System::Drawing::Point(654, 97);
			this->btnTélécharger->Margin = System::Windows::Forms::Padding(2);
			this->btnTélécharger->Name = L"btnTélécharger";
			this->btnTélécharger->Size = System::Drawing::Size(85, 33);
			this->btnTélécharger->TabIndex = 33;
			this->btnTélécharger->Text = L"Télécharger";
			this->btnTélécharger->UseVisualStyleBackColor = true;
			// 
			// textBoxid
			// 
			this->textBoxid->Location = System::Drawing::Point(527, 104);
			this->textBoxid->Name = L"textBoxid";
			this->textBoxid->Size = System::Drawing::Size(100, 20);
			this->textBoxid->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(428, 100);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 25);
			this->label2->TabIndex = 35;
			this->label2->Text = L"N°Société";
			// 
			// labelnomsociété
			// 
			this->labelnomsociété->AutoSize = true;
			this->labelnomsociété->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnomsociété->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnomsociété->Location = System::Drawing::Point(10, 100);
			this->labelnomsociété->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnomsociété->Name = L"labelnomsociété";
			this->labelnomsociété->Size = System::Drawing::Size(117, 25);
			this->labelnomsociété->TabIndex = 39;
			this->labelnomsociété->Text = L"Nom société";
			// 
			// textBoxrechercher
			// 
			this->textBoxrechercher->Location = System::Drawing::Point(128, 104);
			this->textBoxrechercher->Name = L"textBoxrechercher";
			this->textBoxrechercher->Size = System::Drawing::Size(100, 20);
			this->textBoxrechercher->TabIndex = 38;
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(255, 97);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(85, 33);
			this->buttonrechercher->TabIndex = 37;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			// 
			// Facture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->labelnomsociété);
			this->Controls->Add(this->textBoxrechercher);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxid);
			this->Controls->Add(this->btnTélécharger);
			this->Controls->Add(this->labeldocument);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Facture";
			this->Text = L"Facture";
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
			Facture::Left += e->X - PanelMouseDownLocation.X;
			Facture::Top += e->Y - PanelMouseDownLocation.Y;
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
};
}
