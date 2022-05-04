<%@ Page Language="C#" AutoEventWireup="true" CodeFile="edit.aspx.cs" Inherits="edit" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <p>
        &nbsp;</p>
    <form id="form1" runat="server">
        <table style="width:100%;">
            <tr>
                <td>
                    Fulll Name</td>
                <td>
                    <asp:TextBox ID="FullNameTextBox1" runat="server" ValidationGroup="g"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="FullNameTextBox1" Display="Dynamic" 
                        ErrorMessage="RequiredFieldValidator" ValidationGroup="g"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td>
                    Nick Name</td>
                <td>
                    <asp:TextBox ID="NickNameTextBox2" runat="server" ValidationGroup="g"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td>
                    Address</td>
                <td>
                    <asp:TextBox ID="AddressTextBox3" runat="server" Height="22px" 
                        ValidationGroup="g"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td>
                    Date of Birth</td>
                <td>
                    <asp:Calendar ID="birthadayCalendar1" runat="server" BackColor="#FFFFCC" 
                        BorderColor="#FFCC66" BorderWidth="1px" DayNameFormat="Shortest" 
                        Font-Names="Verdana" Font-Size="8pt" ForeColor="#663399" Height="200px" 
                        ShowGridLines="True" Width="220px">
                        <DayHeaderStyle BackColor="#FFCC66" Font-Bold="True" Height="1px" />
                        <NextPrevStyle Font-Size="9pt" ForeColor="#FFFFCC" />
                        <OtherMonthDayStyle ForeColor="#CC9966" />
                        <SelectedDayStyle BackColor="#CCCCFF" Font-Bold="True" />
                        <SelectorStyle BackColor="#FFCC66" />
                        <TitleStyle BackColor="#990000" Font-Bold="True" Font-Size="9pt" 
                            ForeColor="#FFFFCC" />
                        <TodayDayStyle BackColor="#FFCC66" ForeColor="White" />
                    </asp:Calendar>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td>
                    Phone Number</td>
                <td>
                    <asp:TextBox ID="PhoneNumberTextBox4" runat="server" ValidationGroup="g"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="PhoneNumberTextBox4" Display="Dynamic" 
                        ErrorMessage="RequiredFieldValidator" ValidationGroup="g"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td>
                    <asp:Button ID="SubmitButton1" runat="server" onclick="SubmitButton1_Click" 
                        Text="Submit" ValidationGroup="g" />
                </td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
    <table style="width:100%;">
        <tr>
            <td>
                <asp:Button ID="allCOntacctButton1" runat="server" 
                    onclick="allcontactButton1_Click" Text="All Contact" ValidationGroup="ggg" 
                    Width="114px" />
            </td>
            <td>
                <asp:Button ID="UserAreaButton" runat="server" 
                    onclick="userareaButton_Click" Text="UserArea" ValidationGroup="ggg" 
                    Width="157px" />
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Button ID="HomeButton3" runat="server" onclick="HomeButton3_Click" 
                    Text="Home" ValidationGroup="ggg" Width="115px" />
            </td>
            <td>
                <asp:Button ID="LogoutButton4" runat="server" onclick="LogoutButton4_Click" 
                    Text="Logout" ValidationGroup="ggg" Width="159px" />
            </td>
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
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server"></asp:SqlDataSource>
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <div>
    
    </div>
    </form>
</body>
</html>
