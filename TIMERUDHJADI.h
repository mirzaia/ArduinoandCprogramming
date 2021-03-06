#pragma once

namespace Project11 {

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
	private: System::Windows::Forms::TextBox^  JAMINPUT;
	private: System::Windows::Forms::TextBox^  DTKINPUT;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  MNTINPUT;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  JAMOUTPUT;
	private: System::Windows::Forms::Label^  MNTOUTPUT;
	private: System::Windows::Forms::Label^  DTKOUTPUT;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->JAMINPUT = (gcnew System::Windows::Forms::TextBox());
			this->DTKINPUT = (gcnew System::Windows::Forms::TextBox());
			this->MNTINPUT = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->JAMOUTPUT = (gcnew System::Windows::Forms::Label());
			this->MNTOUTPUT = (gcnew System::Windows::Forms::Label());
			this->DTKOUTPUT = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// JAMINPUT
			// 
			this->JAMINPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->JAMINPUT->Location = System::Drawing::Point(243, 33);
			this->JAMINPUT->Name = L"JAMINPUT";
			this->JAMINPUT->Size = System::Drawing::Size(95, 31);
			this->JAMINPUT->TabIndex = 0;
			// 
			// DTKINPUT
			// 
			this->DTKINPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DTKINPUT->Location = System::Drawing::Point(517, 33);
			this->DTKINPUT->Name = L"DTKINPUT";
			this->DTKINPUT->Size = System::Drawing::Size(95, 31);
			this->DTKINPUT->TabIndex = 1;
			// 
			// MNTINPUT
			// 
			this->MNTINPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MNTINPUT->Location = System::Drawing::Point(375, 33);
			this->MNTINPUT->Name = L"MNTINPUT";
			this->MNTINPUT->Size = System::Drawing::Size(95, 31);
			this->MNTINPUT->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 53);
			this->button1->TabIndex = 3;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// JAMOUTPUT
			// 
			this->JAMOUTPUT->AutoSize = true;
			this->JAMOUTPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->JAMOUTPUT->Location = System::Drawing::Point(240, 185);
			this->JAMOUTPUT->Name = L"JAMOUTPUT";
			this->JAMOUTPUT->Size = System::Drawing::Size(0, 25);
			this->JAMOUTPUT->TabIndex = 4;
			// 
			// MNTOUTPUT
			// 
			this->MNTOUTPUT->AutoSize = true;
			this->MNTOUTPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MNTOUTPUT->Location = System::Drawing::Point(370, 185);
			this->MNTOUTPUT->Name = L"MNTOUTPUT";
			this->MNTOUTPUT->Size = System::Drawing::Size(0, 25);
			this->MNTOUTPUT->TabIndex = 5;
			// 
			// DTKOUTPUT
			// 
			this->DTKOUTPUT->AutoSize = true;
			this->DTKOUTPUT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DTKOUTPUT->Location = System::Drawing::Point(512, 185);
			this->DTKOUTPUT->Name = L"DTKOUTPUT";
			this->DTKOUTPUT->Size = System::Drawing::Size(0, 25);
			this->DTKOUTPUT->TabIndex = 6;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 261);
			this->Controls->Add(this->DTKOUTPUT);
			this->Controls->Add(this->MNTOUTPUT);
			this->Controls->Add(this->JAMOUTPUT);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->MNTINPUT);
			this->Controls->Add(this->DTKINPUT);
			this->Controls->Add(this->JAMINPUT);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int detik, menit, jam;
		public: void tugas(){
					detik--;
					DTKOUTPUT->Text=detik.ToString();
					MNTOUTPUT->Text=menit.ToString();
					JAMOUTPUT->Text=jam.ToString();
					if (detik <0){
						menit--;
						detik = 59;
					DTKOUTPUT->Text=detik.ToString();
					MNTOUTPUT->Text=menit.ToString();
					JAMOUTPUT->Text=jam.ToString();
						
					if (menit<0){
						jam--;
						menit = 59;
						detik = 59;
					DTKOUTPUT->Text=detik.ToString();
					MNTOUTPUT->Text=menit.ToString();
					JAMOUTPUT->Text=jam.ToString();
					if (jam<0){
						DTKOUTPUT->Text="0";
						MNTOUTPUT->Text="0";					
						JAMOUTPUT->Text="0";					
						timer1->Enabled=false;
					}
					}
				}
				}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 detik=Convert::ToInt16(DTKINPUT->Text);
				 menit=Convert::ToInt16(MNTINPUT->Text);
				jam=Convert::ToInt16(JAMINPUT->Text);
				timer1->Enabled=true;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 tugas();
			 }
};
}
