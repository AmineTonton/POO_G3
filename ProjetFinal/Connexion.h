#pragma once
#include "MyForm.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Connexion
	/// </summary>
	public ref class Connexion : public System::Windows::Forms::Form
	{
	public:
		Connexion(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Label^ labelauthentification;
	private: System::Windows::Forms::Button^ buttonconnexion;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prénom;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:


	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Connexion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;

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
			this->labelauthentification = (gcnew System::Windows::Forms::Label());
			this->buttonconnexion = (gcnew System::Windows::Forms::Button());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prénom = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panelmove1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, -1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 26;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Connexion::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Connexion::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &Connexion::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &Connexion::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &Connexion::X_MouseLeave);
			// 
			// labelauthentification
			// 
			this->labelauthentification->AutoSize = true;
			this->labelauthentification->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelauthentification->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelauthentification->Location = System::Drawing::Point(311, 62);
			this->labelauthentification->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelauthentification->Name = L"labelauthentification";
			this->labelauthentification->Size = System::Drawing::Size(144, 25);
			this->labelauthentification->TabIndex = 27;
			this->labelauthentification->Text = L"Authetification";
			// 
			// buttonconnexion
			// 
			this->buttonconnexion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonconnexion->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonconnexion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonconnexion->Location = System::Drawing::Point(307, 279);
			this->buttonconnexion->Margin = System::Windows::Forms::Padding(2);
			this->buttonconnexion->Name = L"buttonconnexion";
			this->buttonconnexion->Size = System::Drawing::Size(127, 41);
			this->buttonconnexion->TabIndex = 32;
			this->buttonconnexion->Text = L"Connexion";
			this->buttonconnexion->UseVisualStyleBackColor = true;
			this->buttonconnexion->Click += gcnew System::EventHandler(this, &Connexion::buttonconnexion_Click);
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->nom->Location = System::Drawing::Point(201, 170);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(124, 25);
			this->nom->TabIndex = 31;
			this->nom->Text = L"Mot de passe";
			this->nom->Click += gcnew System::EventHandler(this, &Connexion::nom_Click);
			// 
			// prénom
			// 
			this->prénom->AutoSize = true;
			this->prénom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prénom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->prénom->Location = System::Drawing::Point(168, 128);
			this->prénom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->prénom->Name = L"prénom";
			this->prénom->Size = System::Drawing::Size(157, 25);
			this->prénom->TabIndex = 30;
			this->prénom->Text = L"Nom d\'utilisateur";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(338, 133);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 29;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(338, 175);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(214, 233);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 25);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Mot de passe/Nom d\'utilisateur incorrect";
			this->label1->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(352, 204);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(62, 17);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"Afficher";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Connexion::checkBox1_CheckedChanged);
			// 
			// Connexion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonconnexion);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->prénom);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->labelauthentification);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Connexion";
			this->Text = L"Connexion";
			this->Load += gcnew System::EventHandler(this, &Connexion::Connexion_Load);
			this->panelmove1->ResumeLayout(false);
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
			Connexion::Left += e->X - PanelMouseDownLocation.X;
			Connexion::Top += e->Y - PanelMouseDownLocation.Y;
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
private: System::Void buttonconnexion_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin")
	{
		if (textBox2->Text == "admin")
		{
			Interface::MyForm^ f = gcnew Interface::MyForm();
			f->Show();
			this->Hide();
		}
		else
		{
			label1->Visible = true;
		}
	}
	else
	{
		label1->Visible = true;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
		textBox2->UseSystemPasswordChar = false;
	else
	{
		textBox2->UseSystemPasswordChar = true;
	}
}
private: System::Void Connexion_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = true;
}
};
}
