namespace Project_Pizza2
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.grpSize = new System.Windows.Forms.GroupBox();
            this.radLarge = new System.Windows.Forms.RadioButton();
            this.radMedian = new System.Windows.Forms.RadioButton();
            this.radSmall = new System.Windows.Forms.RadioButton();
            this.grpEat = new System.Windows.Forms.GroupBox();
            this.radEatIn = new System.Windows.Forms.RadioButton();
            this.radEatOut = new System.Windows.Forms.RadioButton();
            this.grpCrust = new System.Windows.Forms.GroupBox();
            this.radThin = new System.Windows.Forms.RadioButton();
            this.radThick = new System.Windows.Forms.RadioButton();
            this.label1 = new System.Windows.Forms.Label();
            this.Toppings = new System.Windows.Forms.Label();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.checkBox2 = new System.Windows.Forms.CheckBox();
            this.checkBox3 = new System.Windows.Forms.CheckBox();
            this.checkBox4 = new System.Windows.Forms.CheckBox();
            this.checkBox5 = new System.Windows.Forms.CheckBox();
            this.checkBox6 = new System.Windows.Forms.CheckBox();
            this.label = new System.Windows.Forms.Label();
            this.Price = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.labEat = new System.Windows.Forms.Label();
            this.labCrust = new System.Windows.Forms.Label();
            this.labSize = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.labToppings = new System.Windows.Forms.Label();
            this.numericUpDown1 = new System.Windows.Forms.NumericUpDown();
            this.label3 = new System.Windows.Forms.Label();
            this.grpSize.SuspendLayout();
            this.grpEat.SuspendLayout();
            this.grpCrust.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).BeginInit();
            this.SuspendLayout();
            // 
            // grpSize
            // 
            this.grpSize.BackColor = System.Drawing.Color.Transparent;
            this.grpSize.Controls.Add(this.radLarge);
            this.grpSize.Controls.Add(this.radMedian);
            this.grpSize.Controls.Add(this.radSmall);
            this.grpSize.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpSize.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.grpSize.Location = new System.Drawing.Point(421, 75);
            this.grpSize.Name = "grpSize";
            this.grpSize.Size = new System.Drawing.Size(172, 156);
            this.grpSize.TabIndex = 0;
            this.grpSize.TabStop = false;
            this.grpSize.Text = "Size";
            this.grpSize.Enter += new System.EventHandler(this.grpSize_Enter);
            // 
            // radLarge
            // 
            this.radLarge.AutoSize = true;
            this.radLarge.Location = new System.Drawing.Point(27, 106);
            this.radLarge.Name = "radLarge";
            this.radLarge.Size = new System.Drawing.Size(89, 32);
            this.radLarge.TabIndex = 2;
            this.radLarge.TabStop = true;
            this.radLarge.Tag = "35";
            this.radLarge.Text = "Large";
            this.radLarge.UseVisualStyleBackColor = true;
            this.radLarge.CheckedChanged += new System.EventHandler(this.radLarge_CheckedChanged);
            // 
            // radMedian
            // 
            this.radMedian.AutoSize = true;
            this.radMedian.Location = new System.Drawing.Point(32, 68);
            this.radMedian.Name = "radMedian";
            this.radMedian.Size = new System.Drawing.Size(106, 32);
            this.radMedian.TabIndex = 1;
            this.radMedian.TabStop = true;
            this.radMedian.Tag = "25";
            this.radMedian.Text = "Median";
            this.radMedian.UseVisualStyleBackColor = true;
            // 
            // radSmall
            // 
            this.radSmall.AutoSize = true;
            this.radSmall.Location = new System.Drawing.Point(33, 30);
            this.radSmall.Name = "radSmall";
            this.radSmall.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.radSmall.Size = new System.Drawing.Size(87, 32);
            this.radSmall.TabIndex = 0;
            this.radSmall.TabStop = true;
            this.radSmall.Tag = "15";
            this.radSmall.Text = "Small";
            this.radSmall.UseVisualStyleBackColor = true;
            this.radSmall.CheckedChanged += new System.EventHandler(this.radSmall_CheckedChanged);
            // 
            // grpEat
            // 
            this.grpEat.BackColor = System.Drawing.Color.Transparent;
            this.grpEat.Controls.Add(this.radEatIn);
            this.grpEat.Controls.Add(this.radEatOut);
            this.grpEat.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpEat.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.grpEat.Location = new System.Drawing.Point(109, 249);
            this.grpEat.Name = "grpEat";
            this.grpEat.Size = new System.Drawing.Size(172, 119);
            this.grpEat.TabIndex = 1;
            this.grpEat.TabStop = false;
            this.grpEat.Text = "Where to Eat";
            this.grpEat.Enter += new System.EventHandler(this.grpEat_Enter);
            // 
            // radEatIn
            // 
            this.radEatIn.AutoSize = true;
            this.radEatIn.Location = new System.Drawing.Point(32, 34);
            this.radEatIn.Name = "radEatIn";
            this.radEatIn.Size = new System.Drawing.Size(95, 32);
            this.radEatIn.TabIndex = 2;
            this.radEatIn.TabStop = true;
            this.radEatIn.Tag = "5";
            this.radEatIn.Text = "Eat In";
            this.radEatIn.UseVisualStyleBackColor = true;
            this.radEatIn.CheckedChanged += new System.EventHandler(this.radEatIn_CheckedChanged);
            // 
            // radEatOut
            // 
            this.radEatOut.AutoSize = true;
            this.radEatOut.Location = new System.Drawing.Point(32, 81);
            this.radEatOut.Name = "radEatOut";
            this.radEatOut.Size = new System.Drawing.Size(110, 32);
            this.radEatOut.TabIndex = 1;
            this.radEatOut.TabStop = true;
            this.radEatOut.Tag = "0";
            this.radEatOut.Text = "Eat Out";
            this.radEatOut.UseVisualStyleBackColor = true;
            this.radEatOut.CheckedChanged += new System.EventHandler(this.radEatOut_CheckedChanged);
            // 
            // grpCrust
            // 
            this.grpCrust.BackColor = System.Drawing.Color.Transparent;
            this.grpCrust.Controls.Add(this.radThin);
            this.grpCrust.Controls.Add(this.radThick);
            this.grpCrust.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpCrust.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.grpCrust.Location = new System.Drawing.Point(421, 249);
            this.grpCrust.Name = "grpCrust";
            this.grpCrust.Size = new System.Drawing.Size(172, 122);
            this.grpCrust.TabIndex = 1;
            this.grpCrust.TabStop = false;
            this.grpCrust.Text = "Crust Type";
            // 
            // radThin
            // 
            this.radThin.AutoSize = true;
            this.radThin.Location = new System.Drawing.Point(32, 34);
            this.radThin.Name = "radThin";
            this.radThin.Size = new System.Drawing.Size(77, 32);
            this.radThin.TabIndex = 2;
            this.radThin.TabStop = true;
            this.radThin.Tag = "0";
            this.radThin.Text = "Thin";
            this.radThin.UseVisualStyleBackColor = true;
            this.radThin.CheckedChanged += new System.EventHandler(this.radThin_CheckedChanged_1);
            // 
            // radThick
            // 
            this.radThick.AutoSize = true;
            this.radThick.Location = new System.Drawing.Point(34, 72);
            this.radThick.Name = "radThick";
            this.radThick.Size = new System.Drawing.Size(86, 32);
            this.radThick.TabIndex = 1;
            this.radThick.TabStop = true;
            this.radThick.Tag = "5";
            this.radThick.Text = "Thick";
            this.radThick.UseVisualStyleBackColor = true;
            this.radThick.CheckedChanged += new System.EventHandler(this.radioButton4_CheckedChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Traditional Arabic", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(128)))));
            this.label1.Location = new System.Drawing.Point(338, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(309, 57);
            this.label1.TabIndex = 2;
            this.label1.Text = "Make Your Pizza";
            // 
            // Toppings
            // 
            this.Toppings.AutoSize = true;
            this.Toppings.BackColor = System.Drawing.Color.Transparent;
            this.Toppings.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Toppings.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.Toppings.Location = new System.Drawing.Point(311, 363);
            this.Toppings.Name = "Toppings";
            this.Toppings.Size = new System.Drawing.Size(104, 28);
            this.Toppings.TabIndex = 3;
            this.Toppings.Text = "Toppings";
            this.Toppings.Click += new System.EventHandler(this.Toppings_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.BackColor = System.Drawing.Color.Transparent;
            this.checkBox1.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox1.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox1.Location = new System.Drawing.Point(360, 405);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(154, 32);
            this.checkBox1.TabIndex = 4;
            this.checkBox1.Tag = "5";
            this.checkBox1.Text = "Extra Chees";
            this.checkBox1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.checkBox1.UseVisualStyleBackColor = false;
            this.checkBox1.CheckedChanged += new System.EventHandler(this.CheckBox5_CheckedChanged);
            // 
            // checkBox2
            // 
            this.checkBox2.AutoSize = true;
            this.checkBox2.BackColor = System.Drawing.Color.Transparent;
            this.checkBox2.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox2.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox2.Location = new System.Drawing.Point(520, 492);
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.Size = new System.Drawing.Size(115, 32);
            this.checkBox2.TabIndex = 5;
            this.checkBox2.Tag = "5";
            this.checkBox2.Text = "Peppers";
            this.checkBox2.UseVisualStyleBackColor = false;
            this.checkBox2.CheckedChanged += new System.EventHandler(this.CheckBox3_CheckedChanged);
            // 
            // checkBox3
            // 
            this.checkBox3.AutoSize = true;
            this.checkBox3.BackColor = System.Drawing.Color.Transparent;
            this.checkBox3.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox3.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox3.Location = new System.Drawing.Point(360, 492);
            this.checkBox3.Name = "checkBox3";
            this.checkBox3.Size = new System.Drawing.Size(132, 32);
            this.checkBox3.TabIndex = 6;
            this.checkBox3.Tag = "5";
            this.checkBox3.Text = "Tomatoes";
            this.checkBox3.UseVisualStyleBackColor = false;
            this.checkBox3.CheckedChanged += new System.EventHandler(this.CheckBox3_CheckedChanged);
            // 
            // checkBox4
            // 
            this.checkBox4.AutoSize = true;
            this.checkBox4.BackColor = System.Drawing.Color.Transparent;
            this.checkBox4.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox4.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox4.Location = new System.Drawing.Point(520, 405);
            this.checkBox4.Name = "checkBox4";
            this.checkBox4.Size = new System.Drawing.Size(93, 32);
            this.checkBox4.TabIndex = 7;
            this.checkBox4.Tag = "5";
            this.checkBox4.Text = "Onion";
            this.checkBox4.UseVisualStyleBackColor = false;
            this.checkBox4.CheckedChanged += new System.EventHandler(this.checkBox4_CheckedChanged);
            // 
            // checkBox5
            // 
            this.checkBox5.AutoSize = true;
            this.checkBox5.BackColor = System.Drawing.Color.Transparent;
            this.checkBox5.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox5.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox5.Location = new System.Drawing.Point(520, 448);
            this.checkBox5.Name = "checkBox5";
            this.checkBox5.Size = new System.Drawing.Size(93, 32);
            this.checkBox5.TabIndex = 8;
            this.checkBox5.Tag = "5";
            this.checkBox5.Text = "Olives";
            this.checkBox5.UseVisualStyleBackColor = false;
            this.checkBox5.CheckedChanged += new System.EventHandler(this.CheckBox3_CheckedChanged);
            // 
            // checkBox6
            // 
            this.checkBox6.AutoSize = true;
            this.checkBox6.BackColor = System.Drawing.Color.Transparent;
            this.checkBox6.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.checkBox6.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.checkBox6.Location = new System.Drawing.Point(360, 448);
            this.checkBox6.Name = "checkBox6";
            this.checkBox6.Size = new System.Drawing.Size(149, 32);
            this.checkBox6.TabIndex = 9;
            this.checkBox6.Tag = "5";
            this.checkBox6.Text = "Mushrooms";
            this.checkBox6.UseVisualStyleBackColor = false;
            this.checkBox6.CheckedChanged += new System.EventHandler(this.CheckBox2_CheckedChanged);
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.BackColor = System.Drawing.Color.Transparent;
            this.label.Font = new System.Drawing.Font("Trebuchet MS", 25.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.label.Location = new System.Drawing.Point(629, 266);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(147, 54);
            this.label.TabIndex = 10;
            this.label.Text = "Price :";
            // 
            // Price
            // 
            this.Price.AutoSize = true;
            this.Price.BackColor = System.Drawing.Color.Transparent;
            this.Price.Font = new System.Drawing.Font("Trebuchet MS", 25.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Price.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.Price.Location = new System.Drawing.Point(780, 283);
            this.Price.Name = "Price";
            this.Price.Size = new System.Drawing.Size(69, 54);
            this.Price.TabIndex = 11;
            this.Price.Text = "0$";
            this.Price.Click += new System.EventHandler(this.Price_Click);
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.Gainsboro;
            this.button1.Font = new System.Drawing.Font("Tahoma", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.ForeColor = System.Drawing.SystemColors.ActiveCaption;
            this.button1.Location = new System.Drawing.Point(638, 509);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(145, 46);
            this.button1.TabIndex = 12;
            this.button1.Text = "Reset From";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.BackColor = System.Drawing.Color.Gainsboro;
            this.button2.Font = new System.Drawing.Font("Tahoma", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.ForeColor = System.Drawing.SystemColors.ActiveCaption;
            this.button2.Location = new System.Drawing.Point(808, 509);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(145, 46);
            this.button2.TabIndex = 13;
            this.button2.Text = "Order";
            this.button2.UseVisualStyleBackColor = false;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.label2.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(674, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(67, 28);
            this.label2.TabIndex = 14;
            this.label2.Text = "Size :";
            // 
            // labEat
            // 
            this.labEat.AutoSize = true;
            this.labEat.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.labEat.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labEat.Location = new System.Drawing.Point(860, 158);
            this.labEat.Name = "labEat";
            this.labEat.Size = new System.Drawing.Size(0, 24);
            this.labEat.TabIndex = 15;
            // 
            // labCrust
            // 
            this.labCrust.AutoSize = true;
            this.labCrust.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.labCrust.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labCrust.Location = new System.Drawing.Point(825, 100);
            this.labCrust.Name = "labCrust";
            this.labCrust.Size = new System.Drawing.Size(0, 24);
            this.labCrust.TabIndex = 16;
            // 
            // labSize
            // 
            this.labSize.AutoSize = true;
            this.labSize.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.labSize.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labSize.Location = new System.Drawing.Point(768, 50);
            this.labSize.Name = "labSize";
            this.labSize.Size = new System.Drawing.Size(0, 24);
            this.labSize.TabIndex = 17;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.label6.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(674, 189);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(119, 28);
            this.label6.TabIndex = 18;
            this.label6.Text = "Toppings :";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.label7.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(674, 145);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(166, 28);
            this.label7.TabIndex = 19;
            this.label7.Text = "Where to eat : ";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.label8.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(674, 95);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(136, 28);
            this.label8.TabIndex = 20;
            this.label8.Text = "Crust Type :";
            // 
            // labToppings
            // 
            this.labToppings.AutoSize = true;
            this.labToppings.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(192)))));
            this.labToppings.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labToppings.Location = new System.Drawing.Point(825, 193);
            this.labToppings.Name = "labToppings";
            this.labToppings.Size = new System.Drawing.Size(0, 24);
            this.labToppings.TabIndex = 21;
            // 
            // numericUpDown1
            // 
            this.numericUpDown1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.numericUpDown1.Location = new System.Drawing.Point(864, 242);
            this.numericUpDown1.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.numericUpDown1.Name = "numericUpDown1";
            this.numericUpDown1.Size = new System.Drawing.Size(73, 24);
            this.numericUpDown1.TabIndex = 22;
            this.numericUpDown1.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.numericUpDown1.ValueChanged += new System.EventHandler(this.numericUpDown1_ValueChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.label3.Font = new System.Drawing.Font("Tahoma", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(673, 238);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(185, 28);
            this.label3.TabIndex = 23;
            this.label3.Text = "Numbers of Pizza";
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::Project_Pizza2.Properties.Resources.vecteezy_the_top_view_pizza_on_t;
            this.ClientSize = new System.Drawing.Size(954, 567);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.numericUpDown1);
            this.Controls.Add(this.labToppings);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.labSize);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.labCrust);
            this.Controls.Add(this.labEat);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Price);
            this.Controls.Add(this.label);
            this.Controls.Add(this.checkBox6);
            this.Controls.Add(this.checkBox5);
            this.Controls.Add(this.checkBox4);
            this.Controls.Add(this.checkBox3);
            this.Controls.Add(this.checkBox2);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.Toppings);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.grpEat);
            this.Controls.Add(this.grpCrust);
            this.Controls.Add(this.grpSize);
            this.Name = "Form2";
            this.Text = "Make Your Pizza";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.grpSize.ResumeLayout(false);
            this.grpSize.PerformLayout();
            this.grpEat.ResumeLayout(false);
            this.grpEat.PerformLayout();
            this.grpCrust.ResumeLayout(false);
            this.grpCrust.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox grpSize;
        private System.Windows.Forms.RadioButton radLarge;
        private System.Windows.Forms.RadioButton radMedian;
        private System.Windows.Forms.RadioButton radSmall;
        private System.Windows.Forms.GroupBox grpEat;
        private System.Windows.Forms.RadioButton radEatIn;
        private System.Windows.Forms.RadioButton radEatOut;
        private System.Windows.Forms.GroupBox grpCrust;
        private System.Windows.Forms.RadioButton radThin;
        private System.Windows.Forms.RadioButton radThick;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label Toppings;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.CheckBox checkBox2;
        private System.Windows.Forms.CheckBox checkBox3;
        private System.Windows.Forms.CheckBox checkBox4;
        private System.Windows.Forms.CheckBox checkBox5;
        private System.Windows.Forms.CheckBox checkBox6;
        private System.Windows.Forms.Label label;
        private System.Windows.Forms.Label Price;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labEat;
        private System.Windows.Forms.Label labCrust;
        private System.Windows.Forms.Label labSize;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label labToppings;
        private System.Windows.Forms.NumericUpDown numericUpDown1;
        private System.Windows.Forms.Label label3;
    }
}