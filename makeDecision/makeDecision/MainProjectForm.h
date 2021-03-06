#pragma once

namespace makeDecision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainProjectForm
	/// </summary>
	public ref class MainProjectForm : public System::Windows::Forms::Form
	{
	public:
		MainProjectForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainProjectForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  Condition;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DomainUpDown^  domainUpDown1;
	private: System::Windows::Forms::DomainUpDown^  domainUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Condition = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 209);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name of project";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(484, 289);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 38);
			this->textBox1->TabIndex = 1;
			// 
			// Condition
			// 
			this->Condition->FormattingEnabled = true;
			this->Condition->ItemHeight = 31;
			this->Condition->Location = System::Drawing::Point(214, 647);
			this->Condition->Name = L"Condition";
			this->Condition->Size = System::Drawing::Size(596, 252);
			this->Condition->TabIndex = 2;
			this->Condition->SelectedIndexChanged += gcnew System::EventHandler(this, &MainProjectForm::listBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(484, 372);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(297, 38);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(485, 209);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(296, 38);
			this->textBox3->TabIndex = 4;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(737, 289);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(43, 38);
			this->domainUpDown1->TabIndex = 5;
			this->domainUpDown1->Text = L"domainUpDown1";
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Location = System::Drawing::Point(737, 373);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(43, 38);
			this->domainUpDown2->TabIndex = 6;
			this->domainUpDown2->Text = L"domainUpDown2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(186, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Number of criteria";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(186, 375);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Number of alernatives";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(990, 747);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(356, 105);
			this->button1->TabIndex = 9;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MainProjectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1555, 992);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->domainUpDown2);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Condition);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MainProjectForm";
			this->Text = L"MainProjectForm";
			this->Load += gcnew System::EventHandler(this, &MainProjectForm::MainProjectForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainProjectForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
