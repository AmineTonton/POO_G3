#pragma once
#include "Top10.h"
#include "Facture.h"
#include "Moinsvendus.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Comptabilite
	/// </summary>
	public ref class Comptabilite : public System::Windows::Forms::Form
	{
	public:
		Comptabilite(void)
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
		~Comptabilite()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_chiffreaffaire;
	protected:

	private: System::Windows::Forms::Button^ button_topvente;

	private: System::Windows::Forms::Button^ button_moinvendu;
	private: System::Windows::Forms::Button^ btn_facture;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Comptabilite::typeid));
			this->btn_chiffreaffaire = (gcnew System::Windows::Forms::Button());
			this->button_topvente = (gcnew System::Windows::Forms::Button());
			this->button_moinvendu = (gcnew System::Windows::Forms::Button());
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_chiffreaffaire
			// 
			this->btn_chiffreaffaire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_chiffreaffaire->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_chiffreaffaire.BackgroundImage")));
			this->btn_chiffreaffaire->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_chiffreaffaire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_chiffreaffaire->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_chiffreaffaire->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_chiffreaffaire->Location = System::Drawing::Point(57, 235);
			this->btn_chiffreaffaire->Margin = System::Windows::Forms::Padding(2);
			this->btn_chiffreaffaire->Name = L"btn_chiffreaffaire";
			this->btn_chiffreaffaire->Size = System::Drawing::Size(219, 147);
			this->btn_chiffreaffaire->TabIndex = 17;
			this->btn_chiffreaffaire->Text = L"Chiffre d\'affaire";
			this->btn_chiffreaffaire->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_chiffreaffaire->UseVisualStyleBackColor = false;
			// 
			// button_topvente
			// 
			this->button_topvente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->button_topvente->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_topvente.BackgroundImage")));
			this->button_topvente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_topvente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_topvente->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->button_topvente->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->button_topvente->Location = System::Drawing::Point(406, 37);
			this->button_topvente->Margin = System::Windows::Forms::Padding(2);
			this->button_topvente->Name = L"button_topvente";
			this->button_topvente->Size = System::Drawing::Size(219, 147);
			this->button_topvente->TabIndex = 18;
			this->button_topvente->Text = L"Top Vente";
			this->button_topvente->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_topvente->UseVisualStyleBackColor = false;
			this->button_topvente->Click += gcnew System::EventHandler(this, &Comptabilite::button_topvente_Click);
			// 
			// button_moinvendu
			// 
			this->button_moinvendu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->button_moinvendu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_moinvendu.BackgroundImage")));
			this->button_moinvendu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_moinvendu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_moinvendu->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->button_moinvendu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->button_moinvendu->Location = System::Drawing::Point(57, 37);
			this->button_moinvendu->Margin = System::Windows::Forms::Padding(2);
			this->button_moinvendu->Name = L"button_moinvendu";
			this->button_moinvendu->Size = System::Drawing::Size(219, 147);
			this->button_moinvendu->TabIndex = 19;
			this->button_moinvendu->Text = L"Moins vendu";
			this->button_moinvendu->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_moinvendu->UseVisualStyleBackColor = false;
			this->button_moinvendu->Click += gcnew System::EventHandler(this, &Comptabilite::button_moinvendu_Click);
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
			this->btn_facture->Location = System::Drawing::Point(406, 235);
			this->btn_facture->Margin = System::Windows::Forms::Padding(2);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(219, 147);
			this->btn_facture->TabIndex = 21;
			this->btn_facture->Text = L"Facture";
			this->btn_facture->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_facture->UseVisualStyleBackColor = false;
			this->btn_facture->Click += gcnew System::EventHandler(this, &Comptabilite::btn_facture_Click);
			// 
			// Comptabilite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(700, 410);
			this->Controls->Add(this->btn_facture);
			this->Controls->Add(this->button_moinvendu);
			this->Controls->Add(this->button_topvente);
			this->Controls->Add(this->btn_chiffreaffaire);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Comptabilite";
			this->Text = L"Comptabilite";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_topvente_Click(System::Object^ sender, System::EventArgs^ e) {
		Interface::Top10^ top10Frm = gcnew Interface::Top10();
		top10Frm->ShowDialog();
	}
private: System::Void btn_facture_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::Facture^ factureFrm = gcnew Interface::Facture();
	factureFrm->ShowDialog();
}
private: System::Void button_moinvendu_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::Moinsvendus^ moinsvendusFrm = gcnew Interface::Moinsvendus();
	moinsvendusFrm->ShowDialog();
}
};
}
