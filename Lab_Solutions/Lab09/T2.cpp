#include <iostream>
#include <string>
#include <cctype> // for isdigit(), islower()
using namespace std;
// Function to check if an email is a valid IBA student email
bool isValidIBAEmail(string email)
{
    string domain = "@khi.iba.edu.pk";
    // Check if email ends with correct domain
    if (email.size() <= domain.size() || email.substr(email.size() - domain.size()) != domain)
        return false;
    // Extract local part (before @)
    string local = email.substr(0, email.size() - domain.size());
    // Find the last dot (.) before ERP number
    int dotPos = local.rfind('.');
    if (dotPos == string::npos)
        return false; // no dot before ERP → invalid
    // Separate name and ERP parts
    string namePart = local.substr(0, dotPos);
    string erpPart = local.substr(dotPos + 1);
    // ERP part must have exactly 5 digits
    if (erpPart.size() != 5)
        return false;
    for (char c : erpPart)
        if (!isdigit(c)) // all must be digits
            return false;
    // Name part must have only lowercase letters and dots
    for (char c : namePart)
        if (!(islower(c) || c == '.')) // invalid if uppercase or any symbol
            return false;
    return true; // passes all checks
}
int main()
{
    cout << "Checking IBA email validity:\n";
    string emails[] = {
        "s.raza.32448@khi.iba.edu.pk",       // ✅ Valid
        "samreen.kazi.12345@khi.iba.edu.pk", // ✅ Valid
        "s.raza32448@khi.iba.edu.pk",        // ❌ Missing dot before ERP
        "s.Taha.29208@iba.edu.pk",           // ❌ Capital + wrong domain
        "Firstname.lastname@khi.iba.edu.pk"  // ❌ No ERP number
    };
    for (string email : emails)
    {
        cout << email << " --> "
             << (isValidIBAEmail(email) ? "Valid" : "Invalid") << endl;
    }
    return 0;
}