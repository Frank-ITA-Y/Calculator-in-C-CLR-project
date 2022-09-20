#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace trackBarControlTutorial {

	/// <summary>
	/// Riepilogo per MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCounterText;
	private: System::Windows::Forms::TrackBar^ trackBarCounter;
	private: System::Windows::Forms::TrackBar^ trackBarCounter;
	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblCounterText = (gcnew System::Windows::Forms::Label());
			this->trackBarCounter = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarCounter))->BeginInit();
			this->SuspendLayout();
			// 
			// lblCounterText
			// 
			this->lblCounterText->AutoSize = true;
			this->lblCounterText->Location = System::Drawing::Point(4, 4);
			this->lblCounterText->Name = L"lblCounterText";
			this->lblCounterText->Size = System::Drawing::Size(79, 16);
			this->lblCounterText->TabIndex = 0;
			this->lblCounterText->Text = L"CounterText";
			// 
			// trackBarCounter
			// 
			this->trackBarCounter->Location = System::Drawing::Point(7, 24);
			this->trackBarCounter->Maximum = 255;
			this->trackBarCounter->Name = L"trackBarCounter";
			this->trackBarCounter->Size = System::Drawing::Size(398, 56);
			this->trackBarCounter->TabIndex = 1;
			this->trackBarCounter->Scroll += gcnew System::EventHandler(this, &MyUserControl::trackBarCounter_Scroll);
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->trackBarCounter);
			this->Controls->Add(this->lblCounterText);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(413, 108);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarCounter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int _counter = 0;
	public: int GetCount() {
		return _counter;
	}

	public: property String^ CounterText {
		String^ get() {
			return lblCounterText->Text;
		}
		void set(String^ text) {
			lblCounterText->Text = text;
		}
	}

	public: event EventHandler^ ValueChanged;

	private: System::Void trackBarCounter_Scroll(System::Object^ sender, System::EventArgs^ e) {
		ValueChanged(this, EventArgs::Empty);
	}
	};
}
