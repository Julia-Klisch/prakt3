#pragma once
#include<cmath>
#include<random>
#include<ctime>
namespace Prakt3 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(769, 523);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->richTextBox3);
			this->tabPage1->Controls->Add(this->richTextBox2);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(761, 494);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(492, 427);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(289, 427);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 427);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(495, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Кількість від\'ємних";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 45);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Добуток парних";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сума чисел";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(520, 86);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(145, 225);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(289, 86);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(145, 225);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(53, 86);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(145, 225);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(761, 494);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(454, 241);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 50);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Обчислити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(127, 241);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(186, 164);
			this->listBox1->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(480, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(279, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(511, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 22);
			this->label6->TabIndex = 2;
			this->label6->Text = L"k";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(310, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 22);
			this->label5->TabIndex = 1;
			this->label5->Text = L"b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(124, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"a";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox4);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(761, 494);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(57, 64);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(223, 288);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(416, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"label7";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(419, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(187, 45);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Обчислення суми";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(419, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 50);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Заповнення числами";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 523);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Практична_3_Кліщ";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, s = 0;
		for (i = 1; i <= 10; i++)
		{
			richTextBox1->AppendText(Convert::ToString(i) + "\r\n");
			s += i;
		}
		label1->Text = "Сума чисел S=" + Convert::ToInt32(s);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = 2, d = 1;
	do
	{
		richTextBox2->AppendText(Convert::ToString(i) + "\r\n");
		d *= i;
		i += 2;
	} while (i <= 10);
	label2->Text = Convert::ToString(d);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int a, i = 1, k = 0;
	srand(time(0));
	while (i <= 10)
	{
		a = rand() % 21 - 10;
		richTextBox3->AppendText(Convert::ToString(a) + "\r\n");
		if (a < 0)
		{
			k++;
		}
		i++; // i = i + 1; i+=1;
	}
	label3->Text = "Кількість від'ємних =" + Convert::ToString(k);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, k, h, y;
	a = Convert::ToDouble(textBox1->Text);
	b = Convert::ToDouble(textBox2->Text);
	k = Convert::ToDouble(textBox3->Text);
	h = (b - a) / k;
	listBox1->Items->Add("x\t|\ty");
	listBox1->Items->Add("=================");
	double x = a;
	while (x <= b)
	{
		y = pow(x, 2);
		listBox1->Items->Add(x.ToString("0") + "\t|\t" + y.ToString("0.00"));
		x += h;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rand = gcnew Random();
	richTextBox4->Clear(); 

	for (int i = 0; i < 20; i++) {
		int num = rand->Next(-150, 151); 
		richTextBox4->AppendText(num.ToString() + "\n"); 
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0; 

	array<String^>^ lines = richTextBox4->Lines;

	for (int i = 0; i < lines->Length; i++) {
		int num;
		if (Int32::TryParse(lines[i], num)) {
			if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) {
				sum += num;
			}
		}
	}
	label7->Text = "Сума двоцифрових чисел: " + sum;
}
};
}
