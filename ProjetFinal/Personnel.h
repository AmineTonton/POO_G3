#pragma once
#include "SuppPersonnel.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
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
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_addpersonnel;
	private: System::Windows::Forms::Button^ btn_supppersonnel;
	private: System::Windows::Forms::Button^ btn_editpersonnel;
	private: System::Windows::Forms::Button^ btn_listpersonnel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Personnel::typeid));
			this->btn_addpersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_supppersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_editpersonnel = (gcnew System::Windows::Forms::Button());
			this->btn_listpersonnel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_addpersonnel
			// 
			this->btn_addpersonnel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_addpersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_addpersonnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addpersonnel.BackgroundImage")));
			this->btn_addpersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_addpersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addpersonnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_addpersonnel->Location = System::Drawing::Point(57, 37);
			this->btn_addpersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_addpersonnel->Name = L"btn_addpersonnel";
			this->btn_addpersonnel->Size = System::Drawing::Size(219, 147);
			this->btn_addpersonnel->TabIndex = 14;
			this->btn_addpersonnel->Text = L"Ajouter un personnel";
			this->btn_addpersonnel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_addpersonnel->UseVisualStyleBackColor = false;
			// 
			// btn_supppersonnel
			// 
			this->btn_supppersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_supppersonnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_supppersonnel.BackgroundImage")));
			this->btn_supppersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_supppersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_supppersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_supppersonnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_supppersonnel->Location = System::Drawing::Point(406, 37);
			this->btn_supppersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_supppersonnel->Name = L"btn_supppersonnel";
			this->btn_supppersonnel->Size = System::Drawing::Size(219, 147);
			this->btn_supppersonnel->TabIndex = 15;
			this->btn_supppersonnel->Text = L"Supprimer un personnel";
			this->btn_supppersonnel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_supppersonnel->UseVisualStyleBackColor = false;
			this->btn_supppersonnel->Click += gcnew System::EventHandler(this, &Personnel::btn_supppersonnel_Click);
			// 
			// btn_editpersonnel
			// 
			this->btn_editpersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_editpersonnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_editpersonnel.BackgroundImage")));
			this->btn_editpersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_editpersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_editpersonnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_editpersonnel->Location = System::Drawing::Point(57, 235);
			this->btn_editpersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_editpersonnel->Name = L"btn_editpersonnel";
			this->btn_editpersonnel->Size = System::Drawing::Size(219, 147);
			this->btn_editpersonnel->TabIndex = 16;
			this->btn_editpersonnel->Text = L"Modifier un personnel";
			this->btn_editpersonnel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_editpersonnel->UseVisualStyleBackColor = false;
			// 
			// btn_listpersonnel
			// 
			this->btn_listpersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_listpersonnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_listpersonnel.BackgroundImage")));
			this->btn_listpersonnel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_listpersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_listpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_listpersonnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_listpersonnel->Location = System::Drawing::Point(406, 235);
			this->btn_listpersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_listpersonnel->Name = L"btn_listpersonnel";
			this->btn_listpersonnel->Size = System::Drawing::Size(219, 147);
			this->btn_listpersonnel->TabIndex = 17;
			this->btn_listpersonnel->Text = L"Liste du personnel";
			this->btn_listpersonnel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_listpersonnel->UseVisualStyleBackColor = false;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(700, 410);
			this->Controls->Add(this->btn_listpersonnel);
			this->Controls->Add(this->btn_editpersonnel);
			this->Controls->Add(this->btn_supppersonnel);
			this->Controls->Add(this->btn_addpersonnel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_supppersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		//SUPP PERSONNEL
		Interface::SuppPersonnel^ supppersonnelFrm = gcnew Interface::SuppPersonnel();
		supppersonnelFrm->ShowDialog();
	}
};
}
