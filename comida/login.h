#pragma once
#include <string.h>
#include "menu_principal.h"

namespace comida {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_inger;
	protected:
	private: System::Windows::Forms::TextBox^ txb_user;
	private: System::Windows::Forms::TextBox^ txb_contra;
	private: System::Windows::Forms::Label^ lb_usu;
	private: System::Windows::Forms::Label^ lb_contra;
	private: System::Windows::Forms::Label^ lb_ingre;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_inger = (gcnew System::Windows::Forms::Button());
			this->txb_user = (gcnew System::Windows::Forms::TextBox());
			this->txb_contra = (gcnew System::Windows::Forms::TextBox());
			this->lb_usu = (gcnew System::Windows::Forms::Label());
			this->lb_contra = (gcnew System::Windows::Forms::Label());
			this->lb_ingre = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_inger
			// 
			this->btn_inger->Location = System::Drawing::Point(105, 182);
			this->btn_inger->Name = L"btn_inger";
			this->btn_inger->Size = System::Drawing::Size(75, 27);
			this->btn_inger->TabIndex = 0;
			this->btn_inger->Text = L"ingresar";
			this->btn_inger->UseVisualStyleBackColor = true;
			this->btn_inger->Click += gcnew System::EventHandler(this, &login::btn_inger_Click);
			// 
			// txb_user
			// 
			this->txb_user->Location = System::Drawing::Point(104, 66);
			this->txb_user->Name = L"txb_user";
			this->txb_user->Size = System::Drawing::Size(100, 22);
			this->txb_user->TabIndex = 1;
			// 
			// txb_contra
			// 
			this->txb_contra->Location = System::Drawing::Point(104, 118);
			this->txb_contra->Name = L"txb_contra";
			this->txb_contra->Size = System::Drawing::Size(100, 22);
			this->txb_contra->TabIndex = 2;
			// 
			// lb_usu
			// 
			this->lb_usu->AutoSize = true;
			this->lb_usu->Location = System::Drawing::Point(22, 72);
			this->lb_usu->Name = L"lb_usu";
			this->lb_usu->Size = System::Drawing::Size(54, 16);
			this->lb_usu->TabIndex = 3;
			this->lb_usu->Text = L"Usuario";
			// 
			// lb_contra
			// 
			this->lb_contra->AutoSize = true;
			this->lb_contra->Location = System::Drawing::Point(22, 121);
			this->lb_contra->Name = L"lb_contra";
			this->lb_contra->Size = System::Drawing::Size(76, 16);
			this->lb_contra->TabIndex = 4;
			this->lb_contra->Text = L"Contraseña";
			// 
			// lb_ingre
			// 
			this->lb_ingre->AutoSize = true;
			this->lb_ingre->Location = System::Drawing::Point(101, 31);
			this->lb_ingre->Name = L"lb_ingre";
			this->lb_ingre->Size = System::Drawing::Size(52, 16);
			this->lb_ingre->TabIndex = 5;
			this->lb_ingre->Text = L"Ingreso";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->lb_ingre);
			this->Controls->Add(this->lb_contra);
			this->Controls->Add(this->lb_usu);
			this->Controls->Add(this->txb_contra);
			this->Controls->Add(this->txb_user);
			this->Controls->Add(this->btn_inger);
			this->Name = L"login";
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_inger_Click(System::Object^ sender, System::EventArgs^ e) {
		#define USER "Admin"
		#define PASS "12345"

		String usuario, contra;

		usuario = txb_user;
		contra = txb_contra;

		if (usuario.Equals(USER) && contra.Equals(PASS))
		{
			menu_principal^ F2 = gcnew menu_principal();
			F2->ShowDialog();
		}
		else
		{
			MessageBox::Show("Usuario y/o Contraseña Incorrecta");
		}
	}
	
};
}
