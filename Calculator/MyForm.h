#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnSpace;
	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnDigit9;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnDigit8;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit6;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btnDigit5;

	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit3;


	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnDigit2;

	private: System::Windows::Forms::Button^ btnDigit1;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btnDigit0;


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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(359, 67);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->Location = System::Drawing::Point(12, 85);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(75, 76);
			this->btnSpace->TabIndex = 1;
			this->btnSpace->Text = L"⌫";
			this->btnSpace->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(106, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 76);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(296, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 76);
			this->button3->TabIndex = 3;
			this->button3->Text = L"±";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(201, 85);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 76);
			this->button4->TabIndex = 4;
			this->button4->Text = L"CE";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnDigit9
			// 
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->Location = System::Drawing::Point(201, 167);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(75, 76);
			this->btnDigit9->TabIndex = 8;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = true;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(296, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 76);
			this->button6->TabIndex = 7;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// btnDigit8
			// 
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->Location = System::Drawing::Point(106, 167);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(75, 76);
			this->btnDigit8->TabIndex = 6;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = true;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit7
			// 
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->Location = System::Drawing::Point(12, 167);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(75, 76);
			this->btnDigit7->TabIndex = 5;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = true;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->Location = System::Drawing::Point(201, 249);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(75, 76);
			this->btnDigit6->TabIndex = 12;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = true;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(296, 249);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 76);
			this->button10->TabIndex = 11;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// btnDigit5
			// 
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->Location = System::Drawing::Point(106, 249);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(75, 76);
			this->btnDigit5->TabIndex = 10;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = true;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->Location = System::Drawing::Point(12, 249);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(75, 76);
			this->btnDigit4->TabIndex = 9;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = true;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->Location = System::Drawing::Point(201, 331);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(75, 76);
			this->btnDigit3->TabIndex = 16;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = true;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(296, 331);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 76);
			this->button14->TabIndex = 15;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// btnDigit2
			// 
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->Location = System::Drawing::Point(106, 331);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(75, 76);
			this->btnDigit2->TabIndex = 14;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = true;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit1
			// 
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->Location = System::Drawing::Point(12, 331);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(75, 76);
			this->btnDigit1->TabIndex = 13;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = true;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(201, 413);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 76);
			this->button17->TabIndex = 20;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(296, 413);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 76);
			this->button18->TabIndex = 19;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(106, 413);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 76);
			this->button19->TabIndex = 18;
			this->button19->Text = L".";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// btnDigit0
			// 
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit0->Location = System::Drawing::Point(12, 413);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(75, 76);
			this->btnDigit0->TabIndex = 17;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = true;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 511);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String ^ operators;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnDigit3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDigit7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
};
}
