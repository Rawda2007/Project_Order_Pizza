using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;

namespace Project_Pizza2
{
    public partial class Form2 : Form
    {
        private float Upload_Size_price()
        {
            float price = 0;
            if (radSmall.Checked)
            { 
                price = Convert.ToSingle(radSmall.Tag);
                labSize.Text = radSmall.Text;
            }
            else if (radMedian.Checked)
            { 
                price = Convert.ToSingle(radMedian.Tag);
                labSize.Text = "Median";

            }
            else
            { 
                price = Convert.ToSingle(radLarge.Tag);
                labSize.Text = "Large";

            }
            return price;
        }
        private float Upload_Crust_price()
        {
            float price = 0;
            if (radThin.Checked)
            { 
                price = Convert.ToSingle(radThin.Tag);
                labCrust.Text = "Thin";

            }
            else
            { 
                price = Convert.ToSingle(radThick.Tag);
                labCrust.Text = "Thick";
            }

            return price;
        }
        private float Upload_Eat_price()
        {
            float price = 0;
            if (radEatIn.Checked)
            { 
                price = Convert.ToSingle(radEatIn.Tag);
                labEat.Text = "Eat In";
            }
            else
            { 
                price = Convert.ToSingle(radEatOut.Tag);
                labEat.Text = "Eat Out";

            }
            return price;
        }
        private float Upload_Toppings_price()
        {
            float price = 0;
               List<string> selectedToppings = new List<string>();
            if (checkBox1.Checked)
            {
                selectedToppings.Add("Extra Cheese");
                
                price += Convert.ToSingle(checkBox1.Tag);//Single=Float
            }
            if (checkBox2.Checked)
            {
                selectedToppings.Add("Peppers");

                price += Convert.ToSingle(checkBox2.Tag);}
            if (checkBox3.Checked)
            {
                selectedToppings.Add("Tomtoes");
               

                price += Convert.ToSingle(checkBox3.Tag);}
            if (checkBox4.Checked)
            {
                selectedToppings.Add("Onion ");
                

                price += Convert.ToSingle(checkBox4.Tag);}
            if (checkBox5.Checked)
            {
                selectedToppings.Add("Olives");
                
                price += Convert.ToSingle(checkBox5.Tag);}
            if (checkBox6.Checked)
            {
                selectedToppings.Add("Peppers");
                
                price += Convert.ToSingle(checkBox6.Tag);
}
            
            labToppings.Text = string.Join(",", selectedToppings);
            if (labToppings.Text == "")
                labToppings.Text = "No Toppinga";
                return price;
        }

        private float Calculator_Price()
        {
            return Upload_Size_price() + Upload_Eat_price() + Upload_Toppings_price() + Upload_Crust_price();
            ;
        }
        private void Upload_Price()
        {
            float total = Calculator_Price();
            total *=(float)numericUpDown1.Value;
            Price.Text = total.ToString("0.00") + " $";
        }

        public Form2()
        {
            InitializeComponent();

        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void Form2_Load(object sender, EventArgs e)
        {
            //radSmall.Tag = 15;
            //radMedian.Tag = 25;
            //radLarge.Tag = 35;

            //radThin.Tag = 0;
            //radThick.Tag = 5;

            //radEatIn.Tag = 5;
            //radEatOut.Tag = 0;

            //checkBox1.Tag = 5;
            //checkBox2.Tag = 5;
            //checkBox3.Tag = 5;
            //checkBox4.Tag = 5;
            //checkBox5.Tag = 5;
            //checkBox6.Tag = 5;
            //radSmall.Checked = false;
            //this.ActiveControl = null;
            radSmall.Checked = true;
            radEatIn.Checked = true;
            radThin.Checked = true;
            Upload_Price();

        }

        private void Toppings_Click(object sender, EventArgs e)
        {

        }

        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void Price_Click(object sender, EventArgs e)
        {
            // Price.Text =Calculator_Price().ToString() + "$";
        }

        private void grpSize_Enter(object sender, EventArgs e)
        {
        }

        private void grpEat_Enter(object sender, EventArgs e)
        {

        }

        private void radSmall_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radMedian_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radLarge_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radEatIn_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radEatOut_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radThin_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void radThick_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox1_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox2_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox3_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox4_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox5_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void CheckBox6_CheckedChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }

        private void radThin_CheckedChanged_1(object sender, EventArgs e)
        {
            Upload_Price();
        }
        private void Cansel_Order()
        {
            checkBox1.Checked = false;
            checkBox2.Checked = false;
            checkBox3.Checked = false;
            checkBox4.Checked = false;
            checkBox5.Checked = false;
            checkBox6.Checked = false;
            radThick.Checked = false;
            radSmall.Checked = false;
            radThin.Checked = false;
            radLarge.Checked = false;
            radMedian.Checked = false;
            radEatIn.Checked = false;
            radEatOut.Checked = false;
            //foreach(Control c in this.Controls)
            //{
            //    c.Enabled = true;
            //}
        }
        private void button1_Click(object sender, EventArgs e)
        {
            //Reset From
            //this.ShowDialog();
            Cansel_Order();

        }
        private void Disable_Order()
        {
            //grpTopping.Enabled = false; هيعمل لكل الشيك بوك
            checkBox1.Enabled = false;
            checkBox2.Enabled = false;
            checkBox3.Enabled = false;
            checkBox4.Enabled = false;
            checkBox5.Enabled = false;
            checkBox6.Enabled = false;
            radThick.Enabled= false;
            radSmall.Enabled = false;
            radThin.Enabled =false;
            radLarge.Enabled= false;
            radMedian.Enabled = false;
            radEatIn.Enabled= false;
            radEatOut.Enabled = false;
            numericUpDown1.Enabled = false;
        }
        private void button2_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure ? ", "Confirm", MessageBoxButtons.YesNo, MessageBoxIcon.Question, MessageBoxDefaultButton.Button1) == DialogResult.No)
            {
                
                Cansel_Order();

            }
            else
            {
                Disable_Order();
            }
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            Upload_Price();
        }
    }
}
