using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using System.IO;

namespace CP_Serial_Port_Terminal
{
    public partial class Form_Project : Form
    {
        string dataOUT;
        string dataIN;

        public Form_Project()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] ports = SerialPort.GetPortNames();
            cBoxCOMPORT.Items.AddRange(ports);

            serialPort1.DtrEnable = false;
            serialPort1.RtsEnable = false;
            btnSendData.Enabled = true;

        }

        private void btnOpen_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.PortName = cBoxCOMPORT.Text;
                serialPort1.BaudRate = Convert.ToInt32(CBoxBaudRate.Text);

                serialPort1.Open();
                progressBar1.Value = 100;

                labStatus.Text = "ON";
            }

            catch (Exception err)
            {
                MessageBox.Show(err.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            try
            {
                if (serialPort1.IsOpen)
                {
                    serialPort1.Close();
                    progressBar1.Value = 0;

                    labStatus.Text = "OFF";
                }
            }
            catch (Exception err)
            {
                MessageBox.Show(err.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                labStatus.Text = "OFF";
            }
        }

        private void btnSendData_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen)
            {
                dataOUT = txtSender.Text;
                serialPort1.Write(dataOUT);
            }
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            dataIN = serialPort1.ReadExisting();
            this.Invoke(new EventHandler(ShowData));
        }

        private void ShowData(object sender, EventArgs e)
        {
            txtReceiver.Text += dataIN + "\n";

        }

        private void btnClear_Click(object sender, EventArgs e)
        {

            if (txtSender.Text != "")
            {
                txtSender.Text = "";
            }

            if (txtReceiver.Text != "")
            {
                txtReceiver.Text = "";
            }
        }
    }
}
