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

	/// <summary>
	/// Description résumée de AddArticle
	/// </summary>
	public ref class AddArticle : public System::Windows::Forms::Form
	{
	public:
		AddArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::TextBox^ textBoxnom;
	private: System::Windows::Forms::TextBox^ textBoxnature;
	private: System::Windows::Forms::TextBox^ textBoxseuil;
	public:

	public:


	private: System::Windows::Forms::TextBox^ textBoxphut;
	private: System::Windows::Forms::TextBox^ textBoxquantité;


	private: System::Windows::Forms::Label^ labelnnamearticle;
	private: System::Windows::Forms::Label^ labelarticlenature;
	private: System::Windows::Forms::Label^ labelarticlequantité;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelarticlephut;
	private: System::Windows::Forms::Button^ buttonvalider;
	private: System::Windows::Forms::Label^ labelnom;

	private: System::Windows::Forms::Label^ labelstokage;
	private: System::Windows::Forms::Label^ labelfinancier;




	private:
		Point PanelMouseDownLocation;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AddArticle()
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
			this->textBoxnom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnature = (gcnew System::Windows::Forms::TextBox());
			this->textBoxseuil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxphut = (gcnew System::Windows::Forms::TextBox());
			this->textBoxquantité = (gcnew System::Windows::Forms::TextBox());
			this->labelnnamearticle = (gcnew System::Windows::Forms::Label());
			this->labelarticlenature = (gcnew System::Windows::Forms::Label());
			this->labelarticlequantité = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelarticlephut = (gcnew System::Windows::Forms::Label());
			this->buttonvalider = (gcnew System::Windows::Forms::Button());
			this->labelnom = (gcnew System::Windows::Forms::Label());
			this->labelstokage = (gcnew System::Windows::Forms::Label());
			this->labelfinancier = (gcnew System::Windows::Forms::Label());
			this->panelmove1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 15;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddArticle::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddArticle::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &AddArticle::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &AddArticle::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &AddArticle::X_MouseLeave);
			// 
			// textBoxnom
			// 
			this->textBoxnom->Location = System::Drawing::Point(121, 101);
			this->textBoxnom->Name = L"textBoxnom";
			this->textBoxnom->Size = System::Drawing::Size(154, 20);
			this->textBoxnom->TabIndex = 16;
			// 
			// textBoxnature
			// 
			this->textBoxnature->Location = System::Drawing::Point(121, 143);
			this->textBoxnature->Name = L"textBoxnature";
			this->textBoxnature->Size = System::Drawing::Size(154, 20);
			this->textBoxnature->TabIndex = 17;
			// 
			// textBoxseuil
			// 
			this->textBoxseuil->Location = System::Drawing::Point(373, 309);
			this->textBoxseuil->Name = L"textBoxseuil";
			this->textBoxseuil->Size = System::Drawing::Size(100, 20);
			this->textBoxseuil->TabIndex = 19;
			// 
			// textBoxphut
			// 
			this->textBoxphut->Location = System::Drawing::Point(593, 101);
			this->textBoxphut->Name = L"textBoxphut";
			this->textBoxphut->Size = System::Drawing::Size(100, 20);
			this->textBoxphut->TabIndex = 18;
			// 
			// textBoxquantité
			// 
			this->textBoxquantité->Location = System::Drawing::Point(373, 259);
			this->textBoxquantité->Name = L"textBoxquantité";
			this->textBoxquantité->Size = System::Drawing::Size(100, 20);
			this->textBoxquantité->TabIndex = 20;
			// 
			// labelnnamearticle
			// 
			this->labelnnamearticle->AutoSize = true;
			this->labelnnamearticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnnamearticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnnamearticle->Location = System::Drawing::Point(56, 96);
			this->labelnnamearticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnnamearticle->Name = L"labelnnamearticle";
			this->labelnnamearticle->Size = System::Drawing::Size(53, 25);
			this->labelnnamearticle->TabIndex = 22;
			this->labelnnamearticle->Text = L"Nom";
			// 
			// labelarticlenature
			// 
			this->labelarticlenature->AutoSize = true;
			this->labelarticlenature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlenature->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlenature->Location = System::Drawing::Point(46, 138);
			this->labelarticlenature->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlenature->Name = L"labelarticlenature";
			this->labelarticlenature->Size = System::Drawing::Size(70, 25);
			this->labelarticlenature->TabIndex = 23;
			this->labelarticlenature->Text = L"Nature";
			this->labelarticlenature->Click += gcnew System::EventHandler(this, &AddArticle::label1_Click);
			// 
			// labelarticlequantité
			// 
			this->labelarticlequantité->AutoSize = true;
			this->labelarticlequantité->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlequantité->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlequantité->Location = System::Drawing::Point(271, 253);
			this->labelarticlequantité->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlequantité->Name = L"labelarticlequantité";
			this->labelarticlequantité->Size = System::Drawing::Size(85, 25);
			this->labelarticlequantité->TabIndex = 24;
			this->labelarticlequantité->Text = L"Quantité";
			this->labelarticlequantité->Click += gcnew System::EventHandler(this, &AddArticle::labelarticlequantité_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(92, 303);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 25);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Seuil de réapprovisionnement";
			// 
			// labelarticlephut
			// 
			this->labelarticlephut->AutoSize = true;
			this->labelarticlephut->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlephut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlephut->Location = System::Drawing::Point(529, 94);
			this->labelarticlephut->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlephut->Name = L"labelarticlephut";
			this->labelarticlephut->Size = System::Drawing::Size(59, 25);
			this->labelarticlephut->TabIndex = 26;
			this->labelarticlephut->Text = L"PHUT";
			// 
			// buttonvalider
			// 
			this->buttonvalider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonvalider->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonvalider->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonvalider->Location = System::Drawing::Point(324, 398);
			this->buttonvalider->Margin = System::Windows::Forms::Padding(2);
			this->buttonvalider->Name = L"buttonvalider";
			this->buttonvalider->Size = System::Drawing::Size(127, 41);
			this->buttonvalider->TabIndex = 27;
			this->buttonvalider->Text = L"Valider";
			this->buttonvalider->UseVisualStyleBackColor = true;
			this->buttonvalider->Click += gcnew System::EventHandler(this, &AddArticle::buttonvalider_Click);
			// 
			// labelnom
			// 
			this->labelnom->AutoSize = true;
			this->labelnom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnom->Location = System::Drawing::Point(130, 53);
			this->labelnom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnom->Name = L"labelnom";
			this->labelnom->Size = System::Drawing::Size(56, 25);
			this->labelnom->TabIndex = 28;
			this->labelnom->Text = L"Nom";
			// 
			// labelstokage
			// 
			this->labelstokage->AutoSize = true;
			this->labelstokage->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelstokage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelstokage->Location = System::Drawing::Point(338, 203);
			this->labelstokage->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelstokage->Name = L"labelstokage";
			this->labelstokage->Size = System::Drawing::Size(84, 25);
			this->labelstokage->TabIndex = 29;
			this->labelstokage->Text = L"Stokage";
			// 
			// labelfinancier
			// 
			this->labelfinancier->AutoSize = true;
			this->labelfinancier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelfinancier->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelfinancier->Location = System::Drawing::Point(575, 52);
			this->labelfinancier->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelfinancier->Name = L"labelfinancier";
			this->labelfinancier->Size = System::Drawing::Size(93, 25);
			this->labelfinancier->TabIndex = 30;
			this->labelfinancier->Text = L"Financier";
			// 
			// AddArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->labelfinancier);
			this->Controls->Add(this->labelstokage);
			this->Controls->Add(this->labelnom);
			this->Controls->Add(this->buttonvalider);
			this->Controls->Add(this->labelarticlephut);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelarticlequantité);
			this->Controls->Add(this->labelarticlenature);
			this->Controls->Add(this->labelnnamearticle);
			this->Controls->Add(this->textBoxquantité);
			this->Controls->Add(this->textBoxseuil);
			this->Controls->Add(this->textBoxphut);
			this->Controls->Add(this->textBoxnature);
			this->Controls->Add(this->textBoxnom);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddArticle";
			this->Text = L"AddArticle";
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
			AddArticle::Left += e->X - PanelMouseDownLocation.X;
			AddArticle::Top += e->Y - PanelMouseDownLocation.Y;
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelarticlequantité_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonvalider_Click(System::Object^ sender, System::EventArgs^ e) {
	servicesarticle^ oservicesarticle = gcnew servicesarticle();
	CLarticle^ oarticle = gcnew CLarticle();
	CAD^ connection = gcnew CAD();
	oservicesarticle->setoCad(connection);

	oarticle->setArticlenom(textBoxnom->Text);
	oarticle->setArticlenature(textBoxnature->Text);
	oarticle->setArticlepuht(textBoxphut->Text);
	oarticle->setArticlequantite(textBoxquantité->Text);
	oarticle->setArticleseuilreapprovisionnement(textBoxseuil->Text);

	oservicesarticle->setoMap(oarticle);
	oservicesarticle->insererarticle(oarticle);
	this->Close();
}
};
}
