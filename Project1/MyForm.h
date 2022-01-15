#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Decimal;
	private: System::Windows::Forms::Label^ Binary;
	private: System::Windows::Forms::Label^ Octal;
	private: System::Windows::Forms::Label^ Hexadecimal;
	private: System::Windows::Forms::Label^ BinaryResult;
	private: System::Windows::Forms::Label^ OctalResult;
	private: System::Windows::Forms::Label^ HexadecimalResult;

	private: System::Windows::Forms::Button^ Convert;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::TextBox^ decimalBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Decimal = (gcnew System::Windows::Forms::Label());
			this->Binary = (gcnew System::Windows::Forms::Label());
			this->Octal = (gcnew System::Windows::Forms::Label());
			this->Hexadecimal = (gcnew System::Windows::Forms::Label());
			this->BinaryResult = (gcnew System::Windows::Forms::Label());
			this->OctalResult = (gcnew System::Windows::Forms::Label());
			this->HexadecimalResult = (gcnew System::Windows::Forms::Label());
			this->Convert = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->decimalBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(438, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(621, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number System Converter";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Decimal
			// 
			this->Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Decimal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Decimal->Location = System::Drawing::Point(379, 125);
			this->Decimal->Name = L"Decimal";
			this->Decimal->Size = System::Drawing::Size(274, 45);
			this->Decimal->TabIndex = 1;
			this->Decimal->Text = L"Enter Decimal";
			// 
			// Binary
			// 
			this->Binary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Binary->Location = System::Drawing::Point(431, 214);
			this->Binary->Name = L"Binary";
			this->Binary->Size = System::Drawing::Size(132, 58);
			this->Binary->TabIndex = 2;
			this->Binary->Text = L"Binary";
			// 
			// Octal
			// 
			this->Octal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Octal->Location = System::Drawing::Point(441, 313);
			this->Octal->Name = L"Octal";
			this->Octal->Size = System::Drawing::Size(110, 49);
			this->Octal->TabIndex = 3;
			this->Octal->Text = L"Octal";
			// 
			// Hexadecimal
			// 
			this->Hexadecimal->AutoSize = true;
			this->Hexadecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hexadecimal->Location = System::Drawing::Point(379, 410);
			this->Hexadecimal->Name = L"Hexadecimal";
			this->Hexadecimal->Size = System::Drawing::Size(245, 42);
			this->Hexadecimal->TabIndex = 4;
			this->Hexadecimal->Text = L"Hexadecimal";
			// 
			// BinaryResult
			// 
			this->BinaryResult->BackColor = System::Drawing::SystemColors::WindowText;
			this->BinaryResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BinaryResult->ForeColor = System::Drawing::SystemColors::Control;
			this->BinaryResult->Location = System::Drawing::Point(727, 214);
			this->BinaryResult->Name = L"BinaryResult";
			this->BinaryResult->Size = System::Drawing::Size(500, 50);
			this->BinaryResult->TabIndex = 5;
			// 
			// OctalResult
			// 
			this->OctalResult->BackColor = System::Drawing::SystemColors::Desktop;
			this->OctalResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OctalResult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->OctalResult->Location = System::Drawing::Point(727, 313);
			this->OctalResult->Name = L"OctalResult";
			this->OctalResult->Size = System::Drawing::Size(500, 50);
			this->OctalResult->TabIndex = 6;
			// 
			// HexadecimalResult
			// 
			this->HexadecimalResult->BackColor = System::Drawing::SystemColors::Desktop;
			this->HexadecimalResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HexadecimalResult->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->HexadecimalResult->Location = System::Drawing::Point(727, 410);
			this->HexadecimalResult->Name = L"HexadecimalResult";
			this->HexadecimalResult->Size = System::Drawing::Size(500, 50);
			this->HexadecimalResult->TabIndex = 7;
			// 
			// Convert
			// 
			this->Convert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Convert->Location = System::Drawing::Point(386, 564);
			this->Convert->Name = L"Convert";
			this->Convert->Size = System::Drawing::Size(181, 44);
			this->Convert->TabIndex = 8;
			this->Convert->Text = L"Convert";
			this->Convert->UseVisualStyleBackColor = true;
			this->Convert->Click += gcnew System::EventHandler(this, &MyForm::Convert_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(648, 564);
			this->Clear->MinimumSize = System::Drawing::Size(181, 44);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(181, 44);
			this->Clear->TabIndex = 9;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// Exit
			// 
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(933, 564);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(181, 44);
			this->Exit->TabIndex = 10;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// decimalBox1
			// 
			this->decimalBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimalBox1->Location = System::Drawing::Point(731, 125);
			this->decimalBox1->Multiline = true;
			this->decimalBox1->Name = L"decimalBox1";
			this->decimalBox1->Size = System::Drawing::Size(496, 50);
			this->decimalBox1->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1568, 686);
			this->Controls->Add(this->decimalBox1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Convert);
			this->Controls->Add(this->HexadecimalResult);
			this->Controls->Add(this->OctalResult);
			this->Controls->Add(this->BinaryResult);
			this->Controls->Add(this->Hexadecimal);
			this->Controls->Add(this->Octal);
			this->Controls->Add(this->Binary);
			this->Controls->Add(this->Decimal);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	decimalBox1->Text = "";
	BinaryResult->Text = "";
	OctalResult->Text = "";
	HexadecimalResult->Text = "";

}
private: System::Void Convert_Click(System::Object^ sender, System::EventArgs^ e) {

	if (decimalBox1->Text == "") {
		MessageBox::Show("You must enter a decimal number","Converter",MessageBoxButtons::OK,MessageBoxIcon::Information);
		decimalBox1->Focus();
	}
	else {
		int numConverter = int::Parse(decimalBox1->Text);
		BinaryResult->Text =System::Convert::ToString(numConverter,2);
		OctalResult->Text = System::Convert::ToString(numConverter, 8);
		HexadecimalResult->Text = System::Convert::ToString(numConverter, 16);
	}
}
};
}
