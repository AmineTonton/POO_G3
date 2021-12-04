#pragma once
#include "AddArticle.h"
#include "ListeArticle.h"
#include "SuppArticle.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Catalogue
	/// </summary>
	public ref class Catalogue : public System::Windows::Forms::Form
	{
	public:
		Catalogue(void)
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
		~Catalogue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_modifierarticle;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_addarticle;

	private: System::Windows::Forms::Button^ btn_listearticle;
	private: System::Windows::Forms::Button^ btn_deletearticle;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Catalogue::typeid));
			this->btn_modifierarticle = (gcnew System::Windows::Forms::Button());
			this->btn_addarticle = (gcnew System::Windows::Forms::Button());
			this->btn_listearticle = (gcnew System::Windows::Forms::Button());
			this->btn_deletearticle = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_modifierarticle
			// 
			this->btn_modifierarticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_modifierarticle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_modifierarticle.BackgroundImage")));
			this->btn_modifierarticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_modifierarticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modifierarticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_modifierarticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_modifierarticle->Location = System::Drawing::Point(76, 289);
			this->btn_modifierarticle->Name = L"btn_modifierarticle";
			this->btn_modifierarticle->Size = System::Drawing::Size(292, 181);
			this->btn_modifierarticle->TabIndex = 20;
			this->btn_modifierarticle->Text = L"Modifier un article";
			this->btn_modifierarticle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_modifierarticle->UseVisualStyleBackColor = false;
			this->btn_modifierarticle->Click += gcnew System::EventHandler(this, &Catalogue::btn_modifierarticle_Click);
			// 
			// btn_addarticle
			// 
			this->btn_addarticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_addarticle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addarticle.BackgroundImage")));
			this->btn_addarticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_addarticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addarticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_addarticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_addarticle->Location = System::Drawing::Point(76, 46);
			this->btn_addarticle->Name = L"btn_addarticle";
			this->btn_addarticle->Size = System::Drawing::Size(292, 181);
			this->btn_addarticle->TabIndex = 18;
			this->btn_addarticle->Text = L"Ajouter un article";
			this->btn_addarticle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_addarticle->UseVisualStyleBackColor = false;
			this->btn_addarticle->Click += gcnew System::EventHandler(this, &Catalogue::btn_addarticle_Click);
			// 
			// btn_listearticle
			// 
			this->btn_listearticle->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_listearticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_listearticle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_listearticle.BackgroundImage")));
			this->btn_listearticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_listearticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_listearticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_listearticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_listearticle->Location = System::Drawing::Point(542, 289);
			this->btn_listearticle->Name = L"btn_listearticle";
			this->btn_listearticle->Size = System::Drawing::Size(292, 181);
			this->btn_listearticle->TabIndex = 17;
			this->btn_listearticle->Text = L"Liste articles";
			this->btn_listearticle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_listearticle->UseVisualStyleBackColor = false;
			this->btn_listearticle->Click += gcnew System::EventHandler(this, &Catalogue::btn_client_Click);
			// 
			// btn_deletearticle
			// 
			this->btn_deletearticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_deletearticle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_deletearticle.BackgroundImage")));
			this->btn_deletearticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_deletearticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_deletearticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_deletearticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_deletearticle->Location = System::Drawing::Point(542, 46);
			this->btn_deletearticle->Name = L"btn_deletearticle";
			this->btn_deletearticle->Size = System::Drawing::Size(292, 181);
			this->btn_deletearticle->TabIndex = 19;
			this->btn_deletearticle->Text = L"Supprimer un article";
			this->btn_deletearticle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_deletearticle->UseVisualStyleBackColor = false;
			this->btn_deletearticle->Click += gcnew System::EventHandler(this, &Catalogue::btn_deletearticle_Click);
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(934, 504);
			this->Controls->Add(this->btn_modifierarticle);
			this->Controls->Add(this->btn_deletearticle);
			this->Controls->Add(this->btn_addarticle);
			this->Controls->Add(this->btn_listearticle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Catalogue";
			this->Text = L"Catalogue";
			this->Load += gcnew System::EventHandler(this, &Catalogue::Catalogue_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_client_Click(System::Object^ sender, System::EventArgs^ e) {
		Interface::ListeArticle^ listearticleFrm = gcnew Interface::ListeArticle();
		listearticleFrm->ShowDialog();
	}
private: System::Void Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_addarticle_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::AddArticle^ addarticleFrm = gcnew Interface::AddArticle();
	addarticleFrm->ShowDialog();
}
private: System::Void btn_deletearticle_Click(System::Object^ sender, System::EventArgs^ e) {
	//SUPPRIMER ARTICLE
	Interface::SuppArticle^ supparticleFrm = gcnew Interface::SuppArticle();
	supparticleFrm->ShowDialog();
}
private: System::Void btn_modifierarticle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
