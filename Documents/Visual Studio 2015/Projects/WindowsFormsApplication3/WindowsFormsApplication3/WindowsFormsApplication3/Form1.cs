using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    {
        bool IsOpen = false;
        bool IsDone = true;
        string ReceivedStr = "";
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void serialPort1_DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string ss = serialPort1.ReadExisting();
            ReceivedStr += ss;
           // ReceivedStr += "\r----------------------------\r";
            if (ss.Contains("\r") || ss.Contains("\n")) { IsDone = true; }

           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Open(); IsOpen = true; timer1.Start();

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (!IsOpen)return;
            string s1 = textBox1.Text;
            serialPort1.Write(s1);
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (IsDone)
            {
                IsDone = false;
                textBox2.Text = ReceivedStr;
            //    textBox2.Text = "\n";
                ReceivedStr = "";
            }
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Sender_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                if (!IsOpen) return;
                string s1 = textBox1.Text;
                serialPort1.Write(s1);
                MessageBox.Show("Enter key pressed");

            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
