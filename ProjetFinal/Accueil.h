#pragma once
#include "AddClient.h"
#include "ProduitManquant.h"
#include "Facture.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Accueil
	/// </summary>
	public ref class Accueil : public System::Windows::Forms::Form
	{
	public:
		Accueil(void)
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
		~Accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_facture;
	private: System::Windows::Forms::Button^ btn_produitmanquant;
	private: System::Windows::Forms::Button^ btn_commandeencours;
	private: System::Windows::Forms::Button^ btn_addclient;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Accueil::typeid));
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->btn_produitmanquant = (gcnew System::Windows::Forms::Button());
			this->btn_commandeencours = (gcnew System::Windows::Forms::Button());
			this->btn_addclient = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->btn_facture->Location = System::Drawing::Point(542, 289);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(292, 181);
			this->btn_facture->TabIndex = 20;
			this->btn_facture->Text = L"Facture";
			this->btn_facture->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_facture->UseVisualStyleBackColor = false;
			this->btn_facture->Click += gcnew System::EventHandler(this, &Accueil::btn_facture_Click);
			// 
			// btn_produitmanquant
			// 
			this->btn_produitmanquant->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_produitmanquant->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_produitmanquant.BackgroundImage")));
			this->btn_produitmanquant->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_produitmanquant->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_produitmanquant->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_produitmanquant->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_produitmanquant->Location = System::Drawing::Point(76, 289);
			this->btn_produitmanquant->Name = L"btn_produitmanquant";
			this->btn_produitmanquant->Size = System::Drawing::Size(292, 181);
			this->btn_produitmanquant->TabIndex = 19;
			this->btn_produitmanquant->Text = L"Produits manquants";
			this->btn_produitmanquant->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_produitmanquant->UseVisualStyleBackColor = false;
			this->btn_produitmanquant->Click += gcnew System::EventHandler(this, &Accueil::btn_produitmanquant_Click);
			// 
			// btn_commandeencours
			// 
			this->btn_commandeencours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_commandeencours->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_commandeencours.BackgroundImage")));
			this->btn_commandeencours->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_commandeencours->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_commandeencours->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_commandeencours->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_commandeencours->Location = System::Drawing::Point(542, 46);
			this->btn_commandeencours->Name = L"btn_commandeencours";
			this->btn_commandeencours->Size = System::Drawing::Size(292, 181);
			this->btn_commandeencours->TabIndex = 18;
			this->btn_commandeencours->Text = L"Commande en cours";
			this->btn_commandeencours->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_commandeencours->UseVisualStyleBackColor = false;
			// 
			// btn_addclient
			// 
			this->btn_addclient->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_addclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_addclient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addclient.BackgroundImage")));
			this->btn_addclient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_addclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_addclient->Location = System::Drawing::Point(76, 46);
			this->btn_addclient->Name = L"btn_addclient";
			this->btn_addclient->Size = System::Drawing::Size(292, 181);
			this->btn_addclient->TabIndex = 17;
			this->btn_addclient->Text = L"Ajouter un client";
			this->btn_addclient->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_addclient->UseVisualStyleBackColor = false;
			this->btn_addclient->Click += gcnew System::EventHandler(this, &Accueil::btn_addclient_Click);
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(934, 504);
			this->Controls->Add(this->btn_facture);
			this->Controls->Add(this->btn_produitmanquant);
			this->Controls->Add(this->btn_commandeencours);
			this->Controls->Add(this->btn_addclient);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Accueil";
			this->Text = L"Accueil";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_addclient_Click(System::Object^ sender, System::EventArgs^ e) {
		Interface::AddClient^ addclientFrm = gcnew Interface::AddClient();
		addclientFrm->ShowDialog();
	}
private: System::Void btn_produitmanquant_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::ProduitManquant^ produitmanquantFrm = gcnew Interface::ProduitManquant();
	produitmanquantFrm->ShowDialog();
}
private: System::Void btn_facture_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::Facture^ factureFrm = gcnew Interface::Facture();
	factureFrm->ShowDialog();
}
};
}
