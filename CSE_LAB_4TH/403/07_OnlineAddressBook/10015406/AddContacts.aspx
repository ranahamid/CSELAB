<%@ Page Language="C#" AutoEventWireup="true" CodeFile="AddContacts.aspx.cs" Inherits="AddContacts" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <title></title>
    <style type="text/css">

     
        .style1
        {
            width: 185px;
        }
        .style2
        {
            width: 234px;
        }
        </style>





</head>
<body>
    <form id="form1" runat="server">
    <div>
    
<h3>
    Online Address Book -Add Contacts</h3>
    
    </div>
    <asp:Label ID="Message_Label" runat="server" BackColor="#A8ACFF"></asp:Label>
    <table style="width:100%;">
        <tr>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
            <td>
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" Text="Log Out" 
                    ValidationGroup="group2" onclick="LogOut_Button2_Click" Width="244px" 
                    style="margin-left: 759px" />
            </td>
        </tr>
    </table>
    <br />
    <table align="center" cellpadding="1" cellspacing="1" frame="above" 
        style="width:100%;">
        <tr>
            <td class="style1">
                <asp:Label ID="full_name_label" runat="server" Text="Full Name"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="full_name_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:RequiredFieldValidator ID="Full_name_RequiredFieldValidator1" 
                    runat="server" ControlToValidate="full_name_textbox" Display="Dynamic" 
                    ErrorMessage="Name is Required" SetFocusOnError="True" 
                    ValidationGroup="group1" ForeColor="Red">Name is Required</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style1">
                Nick Name</td>
            <td class="style2">
                <asp:TextBox ID="nickName_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr valign="top">
            <td class="style1">
                <asp:Label ID="date_of_birth_label" runat="server" Text="Date of Birth"></asp:Label>
            </td>
            <td class="style2">
                <asp:Calendar ID="birthday_Calendar1" runat="server" CssClass="style1" 
                    NextPrevFormat="ShortMonth">
                    <DayStyle BackColor="#CCCCCC" />
                    <NextPrevStyle BackColor="#FFFFCC" BorderColor="#FFCCCC" ForeColor="#666666" />
                    <TitleStyle BackColor="#CCCC00" BorderColor="#FF3399" BorderStyle="Dotted" />
                    <TodayDayStyle BackColor="#999966" BorderColor="#666666" />
                </asp:Calendar>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr valign="top">
            <td class="style1">
                &nbsp;</td>
            <td class="style2">
                &nbsp;</td>
           </tr>
           
          <tr>
            <td class="style1">
                <asp:Label ID="phone_no_label" runat="server" Text="Phone No"></asp:Label>
              </td>
            <td class="style2">
                <asp:TextBox ID="phone_no_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="phone_no_textbox" Display="Dynamic" 
                    ErrorMessage="Phone Number Required." ForeColor="Red" 
                    ValidationGroup="group1"></asp:RequiredFieldValidator>
              </td>
        </tr>
           
          <tr>
            <td class="style1">
                Web Address</td>
            <td class="style2">
                <asp:TextBox ID="webaddress_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style1">
                <asp:Label ID="address_label" runat="server" Text="Address"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="address_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" Height="165px" TextMode="MultiLine" 
                    ValidationGroup="group1" Width="219px"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style1">
                &nbsp;</td>
            <td class="style2">
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <p>
        <table style="width:100%;">
            <tr>
                <td>
    <asp:Button ID="AddContacts_Button1" runat="server" CssClass="google_button" 
        Text="Submit" onclick="AddContacts_Button1_Click" Width="244px" ValidationGroup="group1" />
                </td>
                <td>
        <asp:Button ID="MyUserArea_Button2" runat="server" CssClass="google_button2" 
            onclick="MyUserArea_Button2_Click" Text="My User Area" ValidationGroup="group2" 
                        Width="244px" />
                </td>
                <td>
        <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
            onclick="Home_Button1_Click" Text="Home" ValidationGroup="group3" Width="244px" />
                </td>
            </tr>
            <tr>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    </form>
    <p>
        &nbsp;</p>
</body>
</html>
