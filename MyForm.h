#pragma once

namespace Lb4z1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Êîë³ğ;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ Âèõ³ä;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷îğíèéToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñàëàòîâèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áëàêèòíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷îğíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Êîë³ğ = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Âèõ³ä = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ñàëàòîâèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áëàêèòíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(224, 164);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Äîáğîãî ğàíêó!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem,
					this->áToolStripMenuItem, this->÷îğíèéToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(150, 76);
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// áToolStripMenuItem
			// 
			this->áToolStripMenuItem->Name = L"áToolStripMenuItem";
			this->áToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->áToolStripMenuItem->Text = L"Á³ëèé";
			this->áToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áToolStripMenuItem_Click);
			// 
			// ÷îğíèéToolStripMenuItem
			// 
			this->÷îğíèéToolStripMenuItem->Name = L"÷îğíèéToolStripMenuItem";
			this->÷îğíèéToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->÷îğíèéToolStripMenuItem->Text = L"×îğíèé";
			this->÷îğíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷îğíèéToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Êîë³ğ, this->Âèõ³ä });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(724, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Êîë³ğ
			// 
			this->Êîë³ğ->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->Êîë³ğ->Name = L"Êîë³ğ";
			this->Êîë³ğ->Size = System::Drawing::Size(62, 24);
			this->Êîë³ğ->Text = L"Êîë³ğ";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem3,
					this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(128, 26);
			this->toolStripMenuItem1->Text = L"Òåêñò";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(163, 26);
			this->toolStripMenuItem3->Text = L"×åğâîíèé";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(163, 26);
			this->toolStripMenuItem4->Text = L"Á³ëèé";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(163, 26);
			this->toolStripMenuItem5->Text = L"×îğíèé";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(128, 26);
			this->toolStripMenuItem2->Text = L"Ôîí";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(166, 26);
			this->toolStripMenuItem6->Text = L"Çåëåíèé";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(166, 26);
			this->toolStripMenuItem7->Text = L"Áëàêèòíèé";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(166, 26);
			this->toolStripMenuItem8->Text = L"Ñèí³é";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem8_Click);
			// 
			// Âèõ³ä
			// 
			this->Âèõ³ä->Name = L"Âèõ³ä";
			this->Âèõ³ä->Size = System::Drawing::Size(60, 24);
			this->Âèõ³ä->Text = L"Âèõ³ä";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñàëàòîâèéToolStripMenuItem,
					this->áëàêèòíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(153, 76);
			// 
			// ñàëàòîâèéToolStripMenuItem
			// 
			this->ñàëàòîâèéToolStripMenuItem->Name = L"ñàëàòîâèéToolStripMenuItem";
			this->ñàëàòîâèéToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->ñàëàòîâèéToolStripMenuItem->Text = L"Ñàëàòîâèé";
			this->ñàëàòîâèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñàëàòîâèéToolStripMenuItem_Click);
			// 
			// áëàêèòíèéToolStripMenuItem
			// 
			this->áëàêèòíèéToolStripMenuItem->Name = L"áëàêèòíèéToolStripMenuItem";
			this->áëàêèòíèéToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->áëàêèòíèéToolStripMenuItem->Text = L"Áëàêèòíèé";
			this->áëàêèòíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áëàêèòíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 425);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Red;
	}
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::White;
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Black;
}
private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Purple;
}
private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void áToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::White;
}
private: System::Void ÷îğíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Black;
}
private: System::Void ñàëàòîâèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void áëàêèòíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Purple;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
