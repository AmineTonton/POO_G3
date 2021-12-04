#pragma once
#include "AddClient.h"
#include "SuppClient.h"
#include "ListeClient.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{

	public:
		Client(void)
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
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_listclient;
	protected:

	private: System::Windows::Forms::Button^ btn_editclient;
	protected:

	private: System::Windows::Forms::Button^ btn_suppclient;

	private: System::Windows::Forms::Button^ btn_addclient;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->btn_listclient = (gcnew System::Windows::Forms::Button());
			this->btn_editclient = (gcnew System::Windows::Forms::Button());
			this->btn_suppclient = (gcnew System::Windows::Forms::Button());
			this->btn_addclient = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_listclient
			// 
			this->btn_listclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_listclient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_listclient.BackgroundImage")));
			this->btn_listclient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_listclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_listclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_listclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_listclient->Location = System::Drawing::Point(542, 289);
			this->btn_listclient->Name = L"btn_listclient";
			this->btn_listclient->Size = System::Drawing::Size(292, 181);
			this->btn_listclient->TabIndex = 16;
			this->btn_listclient->Text = L"Liste des clients";
			this->btn_listclient->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_listclient->UseVisualStyleBackColor = false;
			this->btn_listclient->Click += gcnew System::EventHandler(this, &Client::btn_listclient_Click);
			// 
			// btn_editclient
			// 
			this->btn_editclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_editclient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_editclient.BackgroundImage")));
			this->btn_editclient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_editclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_editclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_editclient->Location = System::Drawing::Point(76, 289);
			this->btn_editclient->Name = L"btn_editclient";
			this->btn_editclient->Size = System::Drawing::Size(292, 181);
			this->btn_editclient->TabIndex = 15;
			this->btn_editclient->Text = L"Modifier un client";
			this->btn_editclient->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_editclient->UseVisualStyleBackColor = false;
			this->btn_editclient->Click += gcnew System::EventHandler(this, &Client::btn_editclient_Click);
			// 
			// btn_suppclient
			// 
			this->btn_suppclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_suppclient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_suppclient.BackgroundImage")));
			this->btn_suppclient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_suppclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_suppclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_suppclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_suppclient->Location = System::Drawing::Point(542, 46);
			this->btn_suppclient->Name = L"btn_suppclient";
			this->btn_suppclient->Size = System::Drawing::Size(292, 181);
			this->btn_suppclient->TabIndex = 14;
			this->btn_suppclient->Text = L"Supprimer un client";
			this->btn_suppclient->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_suppclient->UseVisualStyleBackColor = false;
			this->btn_suppclient->Click += gcnew System::EventHandler(this, &Client::btn_suppclient_Click);
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
			this->btn_addclient->TabIndex = 13;
			this->btn_addclient->Text = L"Ajouter un client";
			this->btn_addclient->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_addclient->UseVisualStyleBackColor = false;
			this->btn_addclient->Click += gcnew System::EventHandler(this, &Client::btn_addclient_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(934, 504);
			this->Controls->Add(this->btn_listclient);
			this->Controls->Add(this->btn_editclient);
			this->Controls->Add(this->btn_suppclient);
			this->Controls->Add(this->btn_addclient);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Client";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Client::Client_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Client_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_addclient_Click(System::Object^ sender, System::EventArgs^ e) {

		Interface::AddClient^ addclientFrm = gcnew Interface::AddClient();
		addclientFrm->ShowDialog();
		

	}
private: System::Void btn_suppclient_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::SuppClient^ suppclientFrm = gcnew Interface::SuppClient();
	suppclientFrm->ShowDialog();
}
private: System::Void btn_editclient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_listclient_Click(System::Object^ sender, System::EventArgs^ e) {
	Interface::ListeClient^ listeclientFrm = gcnew Interface::ListeClient();
	listeclientFrm->ShowDialog();
}
};
}
